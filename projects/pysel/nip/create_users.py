# -*- coding: utf-8 -*-
# @Time     : 2018/10/19 10:13
# @Author   : Philly
# @Site     : 
# @File     : create_users.py
# @Software : PyCharm Community Edition
from selenium import webdriver
from time import sleep

chromedriver = r"C:\Program Files (x86)\Google\Chrome\Application\chromedriver.exe"
browser = webdriver.Chrome(executable_path=chromedriver)
browser.get("http://202.116.104.161/NIP/home.action")
browser.maximize_window()
browser.find_element_by_id('userName').send_keys('daan')
browser.find_element_by_id('password').send_keys('123@abc')
browser.find_element_by_id('btn_login').click()
sleep(3)




