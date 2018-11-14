from selenium import webdriver
from time import sleep
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.select import Select
import datetime
import random

def login(browser, user_name, password):
    browser.find_element_by_id('userName').send_keys(user_name)
    browser.find_element_by_id('password').send_keys(password)
    browser.find_element_by_id('btn_login').click()
    sleep(1)


def pathology_add(browser, customer):

    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    # 分包物流
    fbwl = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    sleep(1)
    ActionChains(browser).double_click(fbwl).perform()

    sleep(1)
    # 病理条码录入
    yblr = browser.find_element_by_link_text('病理条码录入')
    yblr.click()

    # 等待病理条码录入页面加载完成
    sleep(1)
    #转到 iframe
    browser.switch_to.frame('content')
    # 客户选择
    khxz = browser.find_element_by_id('comboText1')
    khxz.send_keys(customer)
    sleep(0.5)
    khxz.send_keys(Keys.ENTER)
    sleep(1)

    # 病理大类
    bldl = browser.find_element_by_id('comboText3')
    bldl.send_keys('组织类')
    sleep(0.5)
    bldl.send_keys(Keys.ENTER)
    sleep(0.5)

    # 标本收集者
    bbsjz = browser.find_element_by_id('comboText2')
    bbsjz.send_keys('刘杰')
    sleep(0.5)
    bbsjz.send_keys(Keys.ENTER)
    sleep(0.5)

    barcode_list = []
    # 回执单条码
    hzdtm = browser.find_element_by_id('text1')
    for i in range(bc,bcs):
        tmh = '2018100'+ str(i) + '00'
        hzdtm.send_keys(tmh)
        sleep(0.5)
        hzdtm.send_keys(Keys.ENTER)
        sleep(0.5)
        barcode_list.append(tmh)
    sleep(1)
    browser.find_element_by_xpath('//*[@id="grid1"]/div[1]/table/tbody/tr[2]/td[1]/div/input').click()
    sleep(0.5)
    browser.find_element_by_xpath('//*[@id="tab1"]/div[2]/div[2]/div[1]/input[3]').click()
    sleep(1)
    browser.find_element_by_xpath('//*[@id="popup_ok"]').click()

    sleep(1)
    # 切出frame
    browser.switch_to.parent_frame()

    return barcode_list

def pathology_accept(browser, barcode_list):
    '''
    进入样本核收页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(2)
    # 样本核收
    ybhs = browser.find_element_by_link_text('样本核收')
    ybhs.click()

    # 等待样本核收页面加载完成
    sleep(3)
    # 转到 iframe
    browser.switch_to.frame('content')
    # 点击查询
    browser.find_element_by_id('btnSearch').click()
    sleep(2)

    # 其一：输入条码号，回车
    # browser.find_element_by_id('txtBarCode').send_keys(tmh)
    # sleep(1)
    # browser.find_element_by_id('txtBarCode').send_keys(Keys.ENTER)

    # 其二：点击全部选择
    browser.find_element_by_id('btnScanAll').click()
    sleep(2)
    # 点击已扫条码
    browser.find_element_by_xpath('//*[@id="rightTabBar"]/div/div[1]/div/div[2]/span').click()

    sleep(1)
    # 点击病理类型
    browser.find_element_by_id('pathologyRadio').click()
    sleep(1)
    # 核收人
    hsr = browser.find_element_by_id('comboText6')
    hsr.send_keys(user_name)
    sleep(0.5)
    hsr.send_keys(Keys.ENTER)
    sleep(0.5)
    # 密码
    mm = browser.find_element_by_id('txtPassWord')
    mm.send_keys(password)
    sleep(1)
    # 点击核收
    browser.find_element_by_id('btnCheck').click()

    sleep(3)
    browser.switch_to.parent_frame()
    sleep(1)

def pathology_produce(browser, barcode_list):
    '''
    进入核收生成病理号页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()
    sleep(1)

    # 病理管理
    blgl = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[9]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(blgl).perform()

    sleep(1)
    # 核收生成病理号
    browser.find_element_by_link_text('核收生成病理号').click()
    # browser.find_element_by_xpath(
    #     '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[9]/td[2]/table/tbody/tr[2]/td[2]/table/tbody/tr/td[4]/span/a').click()
    sleep(2)
    browser.switch_to.frame('content')
    dqbllx = browser.find_element_by_id('pathologyTypeId')
    # 根据 Select 对象的value 值选择病理类型
    # 常规病理活体组织检查
    Select(dqbllx).select_by_value("2")
    # 液基细胞学检测（TCT）
    # Select(dqbllx).select_by_value("1")
    # 病理切片会诊
    # Select(dqbllx).select_by_value("3")
    # 病理细胞学检查
    # Select(dqbllx).select_by_value("4")
    # 液基细胞学检测（BD-LCT）
    # Select(dqbllx).select_by_value("9")
    # 荧光原位杂交（FISH）检测
    # Select(dqbllx).select_by_value("20102")
    # 荧光定量PCR
    # Select(dqbllx).select_by_value("20103")
    # 基因测序
    # Select(dqbllx).select_by_value("20104")
    # 液基细胞学检测（LCT）
    # Select(dqbllx).select_by_value("7")


    sleep(1)
    # 输入条码号
    tiaomahao = browser.find_element_by_id('suBarCodeId')
    for tmh in barcode_list:
        tiaomahao.send_keys(tmh)
        tiaomahao.send_keys(Keys.ENTER)
        sleep(0.5)

    sleep(1)
    browser.find_element_by_id('passBtn').click()
    sleep(1)
    # 返回默认内容
    browser.switch_to.default_content()
    browser.switch_to.frame(2)
    browser.find_element_by_xpath('//*[@id="okBtn"]').click()

    sleep(2)
    # 切出frame
    browser.switch_to.parent_frame()


def pathology_result(browser, barcode_list):

    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(1)
    # 病理结果录入
    browser.find_element_by_link_text('病理结果录入').click()

    # 等待病理结果录入页面加载完成
    sleep(5)

    for tmh in barcode_list:
        # 转到 iframe
        browser.switch_to.frame('content')
        # 输入条码号，回车
        tiaomahao2 = browser.find_element_by_id('searchCode')
        tiaomahao2.send_keys(tmh)
        tiaomahao2.send_keys(Keys.ENTER)
        sleep(1)

        browser.find_element_by_id('modifyButton').click()

        browser.find_element_by_id('patientName').send_keys('财务')
        browser.find_element_by_id('comboText10').send_keys('33')  # 年龄
        browser.find_element_by_id('ageMonth').send_keys('5')  # 月

        browser.find_element_by_xpath('//*[@id="comboBtn6"]/a[1]').click()
        sleep(1)
        # 获取性别下拉框的值，男
        # xb = browser.find_element_by_xpath('//*[@id="male"]/td[2]').click()
        browser.find_element_by_xpath('//*[@id="comboText6"]').send_keys(Keys.ENTER)
        sleep(1)
        browser.find_element_by_id('doctorPhone').send_keys('yishengdianhua')  # 医生电话
        browser.find_element_by_id('phone').send_keys('13666666666')
        browser.find_element_by_id('patientNo').send_keys('menzhenhao')
        browser.find_element_by_id('bed').send_keys('chuanghao')
        browser.find_element_by_id('locationName').send_keys('yiyuankeshi')
        browser.find_element_by_id('comboText3').send_keys('yisheng')
        sleep(1)
        browser.find_element_by_id('primaryPathologyNo').send_keys('W-and666ing8')
        browser.find_element_by_id('remark').send_keys('qitashuoming')
        browser.find_element_by_id('source').send_keys('songjianwu   haha')
        browser.find_element_by_id('clinicRemark').send_keys('linchuangzhenduan  lalal')
        sleep(1)
        now = datetime.datetime.now()
        yes_time = now + datetime.timedelta(days=-1)    # 获取前一天的时间
        collect_date = yes_time.strftime('%Y-%m-%d %H:%M:%S')
        browser.find_element_by_id('collectDate').send_keys(collect_date)
        # 取材医生
        browser.find_element_by_xpath('//*[@id="comboBtn7"]/a[1]').click()
        browser.find_element_by_xpath('//*[@id="4af4e88a47617eea0147625b464a05d6"]/td[3]').click()
        sleep(1)

        # 增加项目
        browser.find_element_by_xpath('//*[@id="comboBtn1"]/a[1]').click()
        browser.find_element_by_xpath('//*[@id="4af4e889505f5ad001506f42dd357f26"]/td[4]').click()
        sleep(1)

        # 复诊医生
        browser.find_element_by_xpath('//*[@id="comboBtn9"]/a[1]').click()
        # browser.find_element_by_xpath('//*[@id="2014100500000045"]/td[3]').click()
        browser.find_element_by_xpath('//*[@id="comboText9"]').send_keys(Keys.ENTER)
        sleep(1)
        # 初诊医生
        browser.find_element_by_xpath('//*[@id="comboBtn8"]/a[1]').click()
        sleep(1)
        # browser.find_element_by_xpath('//*[@id="20226"]/td[3]').click()
        browser.find_element_by_xpath('//*[@id="comboText8"]').send_keys(Keys.ENTER)

        sleep(1)
        browser.find_element_by_xpath('//*[@id="tabBar"]/div/div[1]/div/div[2]/span').click()
        sleep(1)
        browser.find_element_by_id('textarea_0').send_keys('rouyansuojian')
        browser.find_element_by_id('textarea_1').send_keys('guangjingsuojian')
        browser.find_element_by_id('textarea_2').send_keys('binglizhenduan')
        sleep(0.5)

        browser.find_element_by_xpath('//*[@id="tabBar"]/div/div[1]/div/div[1]/span').click()
        sleep(0.5)

        browser.find_element_by_id('saveButton').click()
        sleep(3)
        browser.switch_to.default_content()

        browser.switch_to.frame('content')
        browser.find_element_by_id('submitBtn').click()
        sleep(1)

        browser.switch_to.default_content()
        # 转到iframe的src包含 tmh 变量的frame中
        browser.switch_to.frame(browser.find_element_by_xpath('//iframe[contains(@src,"' + tmh + '")]'))

        sleep(1)
        browser.find_element_by_xpath('//*[@id="okBtn"]').click()

        sleep(1)
        browser.switch_to.default_content()
        browser.switch_to.parent_frame()


def pathology_confirm(browser, barcode_list):

    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(1)
    # 医师复核
    browser.find_element_by_link_text('医师复核').click()
    sleep(2)
    browser.switch_to.frame('content')

    for tmh in barcode_list:
        seq = browser.find_element_by_id('seq')
        seq.clear()
        sleep(0.5)
        seq.send_keys(tmh)
        sleep(0.5)
        seq.send_keys(Keys.ENTER)
        sleep(2)
        browser.find_element_by_id('finishBtn').click()
        sleep(2)


if __name__ == '__main__':
    browser = webdriver.Chrome()
    # 隐性等待 10 秒
    browser.implicitly_wait(10)
    browser.maximize_window()
    url = 'http://202.116.104.161/NIP/home.action'
    # url = 'http://47.99.16.10/NIP/home.action'

    browser.get(url)

    user_name = 'daan'
    password = '123@abc'
    customer = '广州市好大夫口腔门诊部有限公司'
    # 构造条码号的其中四位数据
    bc = 550
    bcs = 551
    login(browser, user_name,password)
    barcode_list = pathology_add(browser, customer)
    pathology_accept(browser, barcode_list)

    # sleep(1)
    # browser.switch_to.default_content()
    # # 点击安全退出，退出浏览器
    # browser.find_element_by_link_text('安全退出').click()
    # sleep(1)

    pathology_produce(browser, barcode_list)
    pathology_result(browser, barcode_list)
    pathology_confirm(browser, barcode_list)
    print('医师复核完成条码号：' + str(barcode_list))

    browser.quit()