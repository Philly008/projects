# -*- coding: utf-8 -*-
# @Time     : 2018/10/27 10:21
# @Author   : Philly
# @Site     : 
# @File     : readfree.py
# @Software : PyCharm Community Edition

from selenium import webdriver
from selenium.common.exceptions import NoSuchElementException
from selenium.common.exceptions import NoAlertPresentException

from PIL import Image
import unittest, time, re
from TesseractPy3 import *

class login(unittest.TestCase):
    def setUp(self):
        chromedriver_path = (r'C:\Program Files (x86)\Google\Chrome\Application\chromedriver.exe')
        self.driver = webdriver.Chrome(executable_path=chromedriver_path)
        self.driver.implicitly_wait(10)
        self.base_url = 'http://readfree.me/'   # 要测试的链接
        self.title = 'Readfree'     # 测试网站的Title
        self.verificationErrors = []
        self.accept_next_alert = True

    def test_login(self):
        driver = self.driver
        driver.get(self.base_url)
        time.sleep(3)
        driver.maximize_window()
        driver.find_element_by_xpath('//*[@id="navbar"]/div/div/ul/li[1]/a').click()
        driver.save_screenshot('All.png')   # 获取当前网页，该网页有我们需要的验证码
        imgelement = driver.find_element_by_class_name('captcha')
        location = imgelement.location  # 获取验证码x, y轴坐标
        size = imgelement.size  # 获取验证码的长宽
        rangle = (int(location['x']+30), int(location['y']+30), int(location['x']+size['width']),int(location['y']+size['height']))   # 写成需要截取的位置坐标
        i = Image.open("All.png")   # 打开截图
        time.sleep(3)
        result = i.crop(rangle) # 使用Image的crop函数，从截图中再次获取需要的区域
        result.save('result.png')
        text = image_to_string('result.png', 'eng').strip()

        # assert self.title in driver.title

        driver.find_element_by_id(u'id_email').clear()
        driver.find_element_by_id(u'id_email').send_keys('liuup66@163.com')
        driver.find_element_by_id(u'id_password').clear()
        driver.find_element_by_id(u'id_password').send_keys('Liushui68')
        driver.find_element_by_name('captcha_1').send_keys(text)
        time.sleep(3)
        driver.find_element_by_xpath('//*[@id="id_signin_form"]/div[1]/button').click()

    def is_element_present(self, how, what):
        try: self.driver.find_element(by=how, value=what)
        except NoSuchElementException as e: return False
        return True

    def is_alert_present(self):
        try: self.driver.switch_to.alert()
        except NoAlertPresentException as e: return False
        return True

    def close_alert_and_get_its_text(self):
        try:
            alert = self.driver.switch_to.alert()
            alert_text = alert.text
            if self.accept_next_alert:
                alert.accept()
            else:
                alert.dismiss()
            return alert_text
        finally: self.accept_next_alert = True

    def tearDown(self):
        self.assertEqual([], self.verificationErrors)


if __name__ == '__main__':
    unittest.main()






