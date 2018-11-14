# -*- coding: utf-8 -*-
# @Time     : 2018/10/25 17:04
# @Author   : Philly
# @Site     : 
# @File     : 常规多个.py
# @Software : PyCharm Community Edition
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


def login_nip(userName, password):
    logging.info('***** 登录 *****')
    # 输入用户名、密码，登录
    userName = browser.find_element_by_id('userName').send_keys(userName)
    password = browser.find_element_by_id('password').send_keys(password)
    login = browser.find_element_by_id('btn_login').click()
    sleep(1)
    return browser


def specimen_add():
    # 鼠标移动到左侧菜单栏
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()
    sleep(1)
    # 双击分包物流
    fbwl = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(fbwl).perform()

    '''
    进入样本录入页面
    '''
    browser.find_element_by_link_text('样本录入').click()
    sleep(3)
    # 转到样本录入 iframe
    browser.switch_to.frame('content')

    # 点击新增
    browser.find_element_by_xpath('//*[@id="btnAdd"]').click()

    tmh_list = []

    for bc in range(bcs, bce):
        barcode = '201801'+str(bc)+'00'

        # 条码号
        seacode = browser.find_element_by_id('txtBarCode')
        seacode.clear()
        sleep(0.5)
        seacode.send_keys(barcode)
        sleep(0.5)
        seacode.send_keys(Keys.ENTER)
        sleep(1)

        # 搜索 天方达 并回车
        hospit = browser.find_element_by_id('comboText1')
        hospit.clear()
        hospit.send_keys(khyy)
        sleep(1)
        hospit.send_keys(Keys.ENTER)
        sleep(0.5)
        # 采样日期，当前日期的月、日
        browser.find_element_by_id('txtColMon').send_keys(datetime.datetime.now().month)
        browser.find_element_by_id('txtColDay').send_keys(datetime.datetime.now().day)
        # 姓名
        browser.find_element_by_id('txtPatientName').send_keys('财务')
        # 性别
        sex = browser.find_element_by_id('comboText8')
        sex.send_keys('男')
        sleep(0.5)
        sex.send_keys(Keys.ENTER)
        # 年龄
        browser.find_element_by_id('comboText7').send_keys('34')
        sleep(0.5)

        # 获取检验项目下拉框
        jyxm = browser.find_element_by_id('comboText3')
        jyxm.send_keys(item)
        sleep(1)
        jyxm.send_keys(Keys.ENTER)
        sleep(3)

        # 点击保存
        browser.find_element_by_id('btnSave').click()
        sleep(2)
        tmh_list.append(barcode)

        sleep(1)
        searcheBarcode = browser.find_element_by_id('txtBarCodeSearch')
        searcheBarcode.clear()
        sleep(0.5)
        searcheBarcode.send_keys(barcode)
        sleep(0.5)
        searcheBarcode.send_keys(Keys.ENTER)
        sleep(1)
        gxsj = browser.find_element_by_id('chkPending')
        if gxsj.is_selected():
            gxsj.click()
            sleep(0.5)
            gxsj.click()
        else:
            gxsj.click()

        # 勾选待审数据
        # browser.find_element_by_xpath('//*[@id="chkPending"]').click()
        # 信息审核
        browser.find_element_by_id('btnCheckPending').click()
        sleep(2)

    # 退出样本录入 iframe
    browser.switch_to.parent_frame()
    return tmh_list


def specimen_accept(tmh_list):
    '''
    进入样本核收页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(1)
    # 样本核收
    browser.find_element_by_link_text('样本核收').click()
    sleep(2)
    # 转到样本核收 iframe
    browser.switch_to.frame('content')
    # 点击查询
    browser.find_element_by_id('btnSearch').click()
    sleep(2)
    # 点击全部选择
    browser.find_element_by_id('btnScanAll').click()
    sleep(1)
    # 点击已扫条码
    browser.find_element_by_xpath('//*[@id="rightTabBar"]/div/div[1]/div/div[2]/span').click()

    ActionChains(browser).move_to_element(browser.find_element_by_xpath('//*[@id="comboText6"]'))
    # 核收人倒三角
    browser.find_element_by_xpath('//*[@id="comboBtn6"]/a').click()
    # 对核收人文本框进行回车按键
    browser.find_element_by_xpath('//*[@id="comboText6"]').send_keys(Keys.ENTER)
    sleep(0.5)
    # 密码
    browser.find_element_by_id('txtPassWord').send_keys('123abc')
    sleep(0.5)
    # 点击核收
    browser.find_element_by_id('btnCheck').click()
    # 退出样本核收 iframe
    browser.switch_to.parent_frame()


def specimen_distribute(tmh_list):
    '''
    进入样本分发页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(1)
    # 样本分发
    browser.find_element_by_link_text('样本分发').click()
    sleep(3)

    # 转到样本分发 iframe
    browser.switch_to.frame('content')

    for tmh in tmh_list:
        # 输入条码号，回车，分发条码号
        browser.find_element_by_xpath('//*[@id="barCodeInfo"]').send_keys(tmh)
        sleep(1)
        browser.find_element_by_xpath('//*[@id="barCodeInfo"]').send_keys(Keys.ENTER)
        sleep(3)
    # 接收人倒三角
    txt = browser.find_element_by_id('comboText4')
    txt.send_keys('sh')
    sleep(1)
    txt.send_keys(Keys.ENTER)
    sleep(1)

    # 密码
    browser.find_element_by_id('receivePassword').send_keys('123@abc')
    sleep(0.5)
    # 点击确认接收
    browser.find_element_by_id('btnReceive').click()
    sleep(1)
    # 退出样本分发 iframe
    browser.switch_to.parent_frame()
    logging.info('***** 样本分发end *****')


def specimen_ready(tmh_list):
    '''
    进入样本准备页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(1)
    # 样本检测
    ybjc = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[8]/td[2]/table/tbody/tr[1]/td[4]/span')
    # sleep(1)
    ActionChains(browser).double_click(ybjc).perform()

    sleep(1)
    # 样本准备
    browser.find_element_by_xpath('样本准备').click()
    sleep(1)
    # 转到 iframe
    browser.switch_to.frame('content')
    sleep(1)
    aa = browser.find_element_by_xpath('//*[@id="comboText1"]')
    aa.send_keys(instrument)
    sleep(1)
    aa.send_keys(Keys.ENTER)
    sleep(1)
    bb = browser.find_element_by_id('subarCodeId')
    bb.send_keys(tmh_list)
    sleep(1)
    bb.send_keys(Keys.ENTER)
    sleep(1)
    browser.switch_to.default_content()


def specimen_result(tmh_list):
    '''
    进入结果录入页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(1)
    # 样本检测
    ybjc = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[8]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(ybjc).perform()

    sleep(1)
    # 结果录入
    browser.find_element_by_link_text('结果录入').click()
    sleep(2)
    # 转到 iframe
    browser.switch_to.frame('content')

    sleep(1)

    # 仪器倒三角
    browser.find_element_by_xpath('//*[@id="comboBtn1"]/a[1]').click()
    sleep(1)
    # 搜索仪器 西门子2 并回车
    instrumentE = browser.find_element_by_id('comboText1')
    instrumentE.send_keys(instrument)
    sleep(1)
    instrumentE.send_keys(Keys.ENTER)
    sleep(5)
    for tmh in tmh_list:
        cztm = browser.find_element_by_id('txtSearchSubBarCode')
        cztm.send_keys(tmh)
        cztm.send_keys(Keys.ENTER)
        sleep(1)
        table_element = browser.find_element_by_id('gridTestItem')
        # 定位到行
        tr_elements = table_element.find_elements_by_tag_name('tr')
        td_list = []
        for td in tr_elements:
            td_elements = td.find_elements_by_tag_name('td')
            # 第 6 列，即结果输入列拼接在列表中
            td_list.append(td_elements[5])

        for jg in td_list:
            # 定位到列的对应输入框
            jg1 = jg.find_element_by_id('comboText5')
            # 清空并填写结果值
            jg1.clear()
            jg1.send_keys(xmjg)
            jg1.send_keys(Keys.ENTER)
            sleep(1)

        jyjs = browser.find_element_by_id('txtReportRemark')
        jyjs.clear()
        jyjs.send_keys('jianyijieshi')
        zdxj = browser.find_element_by_id('txtReportBrief')
        zdxj.clear()
        zdxj.send_keys('zidongxiaojie')

    # 点击提交标本
    browser.find_element_by_id('btnSubmitSpecimen').click()
    sleep(1)
    browser.find_element_by_id('popup_ok').click()
    sleep(1)
    browser.find_element_by_xpath('//*[@id="popup_ok"]').send_keys(Keys.ENTER)

    sleep(1)
    browser.switch_to.default_content()
    # 点击安全退出，退出浏览器
    browser.find_element_by_link_text('安全退出').click()
    sleep(1)


def specimen_audit(tmh_list):
    '''
    进入签字审核页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(1)
    ybjc = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[8]/td[2]/table/tbody/tr[1]/td[4]/span')
    sleep(1)
    ActionChains(browser).double_click(ybjc).perform()

    sleep(1)
    # 签字审核
    browser.find_element_by_link_text('签字审核').click()

    sleep(2)
    # 转到 iframe
    browser.switch_to.frame('content')

    sleep(1)

    # 仪器倒三角
    yq = browser.find_element_by_xpath('//*[@id="comboBtn1"]/a[1]').click()
    sleep(1)
    # 搜索仪器 西门子2 并回车
    instrumentE = browser.find_element_by_id('comboText1')
    instrumentE.send_keys(instrument)
    sleep(1)
    instrumentE.send_keys(Keys.ENTER)
    sleep(3)
    browser.find_element_by_id('chkList').click()

    # 点击审核标本
    browser.find_element_by_id('btnAuditSpecimen').click()
    sleep(1)
    browser.find_element_by_id('popup_ok').click()
    sleep(1)
    browser.find_element_by_xpath('//*[@id="popup_ok"]').send_keys(Keys.ENTER)
    logging.info('***** 签字审核end *****')
    sleep(1)
    browser.switch_to.default_content()
    # 点击安全退出，退出浏览器
    browser.find_element_by_link_text('安全退出').click()
    sleep(1)


if __name__ == '__main__':

    browser = webdriver.Chrome()
    # 隐性等待 30 秒，只需要设置一次
    browser.implicitly_wait(30)
    # 最大化浏览器
    browser.maximize_window()
    # 访问网址
    browser.get('http://202.116.104.161/NIP/login.action')

    bcs = 1020
    bce = 1022


    xmjg = '1'
    khyy = '广州市好大夫口腔门诊部有限公司'
    item = '血清C'
    instrument = '西门子2'
    login_nip('daan', '123@abc')
    tmh_list = specimen_add()
    specimen_accept(tmh_list)
    specimen_distribute(tmh_list)
    # specimen_ready(browser, tmh_list)
    specimen_result(tmh_list)
    login_nip('sh', '123@abc')
    specimen_audit(tmh_list)
    print('已签字审核的条码号为：' + str(tmh_list))

    browser.quit()
