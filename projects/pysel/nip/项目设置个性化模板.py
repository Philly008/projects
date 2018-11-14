# -*- coding: utf-8 -*-
# @Time     : 2018/9/14 17:18
# @Author   : Philly
# @Site     : 
# @File     : 项目设置个性化模板.py
# @Software : PyCharm Community Edition
from selenium import webdriver
from time import sleep
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
import random
import datetime
import logging
from selenium.webdriver.support.ui import WebDriverWait
from com.测试环境.getData import *
from selenium.webdriver.support.select import Select

def login_nip(userName, password):
    logging.info('***** 登录 *****')
    # 输入用户名、密码，登录
    browser.find_element_by_id('userName').send_keys(userName)
    browser.find_element_by_id('password').send_keys(password)
    browser.find_element_by_id('btn_login').click()
    sleep(1)
    return browser




def tst_item_add():
    # 鼠标移动到左侧菜单栏
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()
    sleep(1)
    # 双击基本信息
    jcxx = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[2]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(jcxx).perform()
    sleep(1)
    # 双击 医学检测
    yxwl = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[2]/td[2]/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(yxwl).perform()
    sleep(1)

    '''
    进入检验项目设置页面
    '''
    browser.find_element_by_link_text('检验项目设置').click()

    sleep(2)
    # 转到样本录入 iframe
    browser.switch_to.frame('content')

    uniqueSearch = browser.find_element_by_id('uniqueSearch')
    uniqueSearch.send_keys(jyxm)    # 检验项目
    sleep(1)
    uniqueSearch.send_keys(Keys.ENTER)
    sleep(1)

    browser.find_element_by_xpath('//*[@id="tabBar"]/div/div[1]/div/div[5]/span').click()
    sleep(3)
    comboText11 = browser.find_element_by_xpath('//*[@id="reportTemplates"]/div/input')
    comboText11.send_keys(gxh)  # 个性化模板
    sleep(0.5)
    comboText11.send_keys('模板')
    sleep(1)
    comboText11.send_keys(Keys.ENTER)
    sleep(1)
    comboText10 = browser.find_element_by_xpath('//*[@id="customerList"]/div/input')
    comboText10.send_keys(gxhkh)    # 个性化客户医院
    sleep(1)
    comboText10.send_keys(Keys.ENTER)
    sleep(1)
    browser.find_element_by_xpath('//*[@id="testItemIndividuation"]/div/div[1]/table/tbody/tr/td[5]/input').click()
    sleep(1)

    browser.switch_to.default_content()
    # 点击安全退出，退出浏览器
    browser.find_element_by_link_text('安全退出').click()
    sleep(1)



if __name__ == '__main__':

    browser = webdriver.Chrome()
    # 隐性等待 15 秒，只需要设置一次
    browser.implicitly_wait(15)
    # 最大化浏览器
    browser.maximize_window()
    # 访问网址
    browser.get('http://202.116.104.161/NIP/home.action')
    # browser.get('http://192.168.14.37/NIP/login.action')



    user_name = 'daan'
    passwd = '123@abc'


    for i in range(0, 72):

        login_nip(user_name, passwd)
        jyxm = get_item_gxh()[i]
        gxh = get_template_gxh()[i]
        gxhkh = get_hospital_gxh()[i]
        tst_item_add()

