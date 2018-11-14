# coding : utf-8

# coding=utf-8
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

def center_item_add():
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
    进入中心检验项目设置页面
    '''
    browser.find_element_by_link_text('中心检测项目设置').click()

    sleep(2)
    # 转到样本录入 iframe
    browser.switch_to.frame('content')

    # 点击新增
    browser.find_element_by_id('addBtn').click()
    sleep(1)
    testType = browser.find_element_by_id('testType')
    Select(testType).select_by_visible_text(typ)
    sleep(1)

    testItemGroup = browser.find_element_by_id('testItemGroup')
    Select(testItemGroup).select_by_visible_text(cla)

    browser.find_element_by_id('uniqueCode').send_keys(un)
    browser.find_element_by_id('cnName').send_keys(cname)
    browser.find_element_by_id('enAbbr').send_keys(ena)
    browser.find_element_by_id('enName').send_keys(enc)
    browser.find_element_by_id('fastCode').send_keys(mnemoni)
    sleep(2)

    # 通过 xpath 定位到动态的 input 元素
    jyff = browser.find_element_by_xpath('//*[@id="divTestMethod"]/div/input')
    jyff.click()
    sleep(1)
    jyff.clear()
    sleep(1)
    jyff.send_keys(inspect)
    sleep(1)
    jyff.send_keys(Keys.ENTER)

    sleep(1)

    forSex = browser.find_element_by_id('forSex')
    Select(forSex).select_by_visible_text(sex)
    browser.find_element_by_id('coldStore').click()
    browser.find_element_by_id('privacy').click()

    browser.find_element_by_id('saveBtn').click()

    sleep(1)
    uniqueCodeSearch = browser.find_element_by_id('uniqueCodeSearch')
    uniqueCodeSearch.clear()
    uniqueCodeSearch.send_keys(cname)
    uniqueCodeSearch.send_keys(Keys.ENTER)
    sleep(1)

    browser.find_element_by_xpath('//*[@id="a_tabbar"]/div/div[1]/div/div[3]/span').click()

    sleep(1)
    laboratorys = browser.find_element_by_id('laboratorys')
    Select(laboratorys).select_by_visible_text("广州达安临床检验中心")
    Select(laboratorys).select_by_visible_text("济南达安医学检验中心")
    Select(laboratorys).select_by_visible_text("上海达安医学检验所")
    Select(laboratorys).select_by_visible_text("合肥达安医学检验中心")
    Select(laboratorys).select_by_visible_text("昆明高新达安医学检验所")
    Select(laboratorys).select_by_visible_text("南昌达安医学检验中心")
    Select(laboratorys).select_by_visible_text("成都高新达安医学检验有限公司")

    sleep(1)
    browser.find_element_by_id('save').click()
    sleep(2)
    browser.find_element_by_xpath('//*[@id="a_tabbar"]/div/div[1]/div/div[1]/span').click()
    print('保存成功中心项目中文名称为：' + cname)

    sleep(2)
    # 切出frame
    browser.switch_to.parent_frame()



def check_item_add():
    # 鼠标移动到左侧菜单栏
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()
    sleep(1)
    # # 双击基本信息
    # jcxx = browser.find_element_by_xpath(
    #     '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[2]/td[2]/table/tbody/tr[1]/td[4]/span')
    # ActionChains(browser).double_click(jcxx).perform()
    # sleep(1)
    # yxwl = browser.find_element_by_xpath(
    #     '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[2]/td[2]/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    # ActionChains(browser).double_click(yxwl).perform()

    '''
    进入检验项目设置页面
    '''
    browser.find_element_by_link_text('检验项目设置').click()

    sleep(3)
    # 转到样本录入 iframe
    browser.switch_to.frame('content')


    uniqueSearch = browser.find_element_by_id('uniqueSearch')
    uniqueSearch.send_keys(cname)
    sleep(0.5)
    uniqueSearch.send_keys(Keys.ENTER)
    sleep(1)
    browser.find_element_by_id('printOrder').send_keys(printno)

    # 医学专业组
    zhuanyezu = browser.find_element_by_xpath('//*[@id="mediDept"]/div/input')
    zhuanyezu.clear()
    zhuanyezu.send_keys(medcla)
    sleep(0.5)
    zhuanyezu.send_keys(Keys.ENTER)
    sleep(1)
    # 结果类型
    jieguoleiixing = browser.find_element_by_xpath('//*[@id="resultType"]/div/input')
    jieguoleiixing.clear()
    jieguoleiixing.send_keys(restype)
    sleep(0.5)
    jieguoleiixing.send_keys(Keys.ENTER)
    sleep(1)
    # 实验室物理组
    wulizu = browser.find_element_by_xpath('//*[@id="labDept"]/div/input')
    wulizu.clear()
    wulizu.send_keys(labcl)
    sleep(0.5)
    wulizu.send_keys(Keys.ENTER)
    sleep(1)
    # 分管原则
    fenguanyuanze = browser.find_element_by_xpath('//*[@id="tubeGroup"]/div/input')
    fenguanyuanze.clear()
    fenguanyuanze.send_keys(principle)
    sleep(0.5)
    fenguanyuanze.send_keys(Keys.ENTER)
    sleep(1)
    # 标本类型
    biaobenleixing = browser.find_element_by_xpath('//*[@id="specimenTypeName"]/div/input')
    biaobenleixing.clear()
    biaobenleixing.send_keys(samplety)
    sleep(0.5)
    biaobenleixing.send_keys(Keys.ENTER)
    sleep(1)

    browser.find_element_by_id('chargeCode').send_keys(chargecode)
    browser.find_element_by_id('caculateTest').click()
    browser.find_element_by_id('report').click()
    browser.find_element_by_id('bilLabel').click()
    sleep(1)

    browser.find_element_by_id('saveBtn').click()




if __name__ == '__main__':

    browser = webdriver.Chrome()
    # 隐性等待 15 秒，只需要设置一次
    browser.implicitly_wait(15)
    # 最大化浏览器
    browser.maximize_window()
    # 访问网址
    browser.get('http://192.168.14.37/NIP/login.action')

    user_name = 'daan'
    passwd = '1234abcd'

    for i in range(1, 2):
        typ = get_item_type()[i]   # 项目类型
        cla = get_item_class()[i]   # 项目类别
        un = get_item_un()[i]  # 全国统一码
        cname = get_item_cname()[i]     # 项目名称
        ena = get_item_ena()[i]     # 英文缩写
        enc = get_item_enc()[i]       # 英文名称
        mnemoni = get_item_mnemoni()[i]      # 助记符
        inspect = get_item_inspect()[i]       # 检验方法
        sex = get_item_sex()[i]     # 项目性别
        printno = get_item_printno()[i]       # 打印次序
        medcla = get_item_medcla()[i]        # 医学专业组
        restype = get_item_restype()[i]       # 结果类型
        labcl = get_item_labcla()[i]    # 实验室物理组
        principle = get_item_principle()[i]     # 分管原则
        samplety = get_item_samplety()[i]      # 标本类型
        chargecode = get_item_chargecode()[i]        # 收费代码


        login_nip(user_name, passwd)
        center_item_add()
        check_item_add()






    # login_nip('daan', '1234abcd')
    # open_page()
    # for i in range(14, 15):
    #     # try:
    #     login_nip('daan', '1234abcd')
    #     open_page()
    #     #cnName = get_center_items()[i].value
    #     cnName = '16p11.2-p12.2 缺失综合征'
    #     center_item_add(cnName)
    #     sleep(1)
    #     browser.switch_to.default_content()
    #     # 点击安全退出，退出浏览器
    #     browser.find_element_by_link_text('安全退出').click()
    #     sleep(1)
    #     i += 1
    #     # except Exception as e:
    #     #     print('出异常啦：' + cnName)
    #     #     continue
    #     #i += 1
    # #center_item_add()