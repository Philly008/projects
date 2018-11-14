# -*- coding: utf-8 -*-
# @Time     : 2018/10/29 14:28
# @Author   : Philly
# @Site     : 
# @File     : readfree_cookie.py
# @Software : PyCharm Community Edition

from selenium import webdriver
import time
chromedriver_path = (r'C:\Program Files (x86)\Google\Chrome\Application\chromedriver.exe')
driver = webdriver.Chrome(executable_path=chromedriver_path)
driver.get('http://readfree.me/')
time.sleep(2)

cook = {'domain':'readfree.me',
        'name':'sessionid',
        'value':'fq4pvbzdepprx84v050bmuke16sl0975',
        'path':'/',
        'expires':'2018-11-26T06:44:45.120Z',
        'httpOnly': True,
        'secure': False
        }
driver.add_cookie(cook)

time.sleep(3)
driver.refresh()