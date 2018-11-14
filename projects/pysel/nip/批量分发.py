# coding=utf-8
from selenium import webdriver
from time import sleep
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
import random
import datetime
import logging
from selenium.webdriver.support.ui import WebDriverWait
from com.基线环境 import getData
from selenium.webdriver.support.select import Select
import sys


def login_nip(user_name, password):
    logging.info('***** 登录 *****')
    # 输入用户名、密码，登录
    browser.find_element_by_id('userName').send_keys(user_name)
    browser.find_element_by_id('password').send_keys(password)
    browser.find_element_by_id('btn_login').click()
    sleep(1)
    return browser


def specimen_distribute(browser, tmh_list):
    logging.info('***** 样本分发start *****')

    '''
    进入样本分发页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()
    sleep(1)
    # 双击分包物流
    fbwl = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(fbwl).perform()
    sleep(1)




    # 样本分发
    browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[12]/td[2]/table/tbody/tr/td[4]/span/a').click()
    sleep(3)
    # 转到样本分发 iframe
    browser.switch_to.frame('content')

    for tmh in tmh_list:
        # 输入条码号，回车，分发条码号
        browser.find_element_by_xpath('//*[@id="barCodeInfo"]').send_keys(tmh)
        sleep(1)
        browser.find_element_by_xpath('//*[@id="barCodeInfo"]').send_keys(Keys.ENTER)
        sleep(3)






if __name__ == '__main__':
    logging.basicConfig(level=logging.ERROR, format='%(asctime)s %(levelname)s %(message)s ')
    startTime = datetime.datetime.now()
    logging.info("开始时间：" + str(startTime))

    browser = webdriver.Chrome()
    # 隐性等待 10 秒，只需要设置一次
    browser.implicitly_wait(10)
    # 最大化浏览器
    browser.maximize_window()
    # 访问网址
    browser.get('http://202.116.104.161/NIP/login.action')
    #browser.get('http://192.168.14.37/NIP/home.action')

    # barcode = '2018' + str(random.randint(2000, 2999)) + '0000'
    xmjg = '1'
    # khyy = '郑州大学附属郑州中心医院'
    # item = '血清C肽测定(CP)'
    # instrument = '西门子2'
    # i = 0
    tmhec = []
    tmhsh = []
    for i in range(1, 3):
        barcode = getData.get_normal_barcodes()
        khyy = getData.get_normal_customers()[i]
        item = getData.get_normal_items()[i]
        instrument = getData.get_normal_instruments()[i]
        login_nip('daan', '123@abc')
        try:
            specimen_distribute(browser, barcode)
        except Exception as e:
            print(str(e))
            sys.exit()

