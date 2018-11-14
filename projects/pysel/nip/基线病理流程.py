from selenium import webdriver
from time import sleep
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.select import Select
import datetime
import random
from com.基线环境 import getData


def login(userName, password):

    userName = browser.find_element_by_id('userName').send_keys(userName)
    password = browser.find_element_by_id('password').send_keys(password)
    login = browser.find_element_by_id('btn_login').click()
    sleep(1)

def pathology_add(browser, tmh, collectBy, customer):

    #customer = '肇庆市高要区中医院'
    pathologyGroup = '组织类'


    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    fbwl = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    sleep(1)
    ActionChains(browser).double_click(fbwl).perform()

    sleep(1)
    yblr = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[9]/td[2]/table/tbody/tr/td[4]/span/a')
    yblr.click()

    # 等待样本录入页面加载完成
    sleep(3)
    #转到 iframe
    browser.switch_to.frame('content')
    # 选择医院
    yiyuan = browser.find_element_by_id('comboText1')
    yiyuan.send_keys(customer)
    sleep(1)
    yiyuan.send_keys(Keys.ENTER)
    sleep(2)

    # 病理大类
    bldl = browser.find_element_by_id('comboText3')
    bldl.send_keys(pathologyGroup)
    sleep(1)
    bldl.send_keys(Keys.ENTER)
    sleep(2)

    # 标本收集者
    sjz = browser.find_element_by_id('comboText2')
    sjz.send_keys(collectBy)
    sleep(1)
    sjz.send_keys(Keys.ENTER)
    sleep(2)

    # 回执单条码
    hzdtm = browser.find_element_by_id('text1')
    hzdtm.send_keys(tmh)
    hzdtm.send_keys(Keys.ENTER)
    sleep(3)
    browser.find_element_by_xpath('//*[@id="grid1"]/div[1]/table/tbody/tr[2]/td[1]/div/input').click()
    sleep(1)
    browser.find_element_by_xpath('//*[@id="tab1"]/div[2]/div[2]/div[1]/input[3]').click()
    sleep(2)
    browser.find_element_by_xpath('//*[@id="popup_ok"]').click()

    sleep(3)
    # 切出frame
    browser.switch_to.parent_frame()

def specimen_accept(browser, tmh, password):
    '''
    进入样本核收页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(2)
    # 样本核收
    ybhs = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[10]/td[2]/table/tbody/tr/td[4]/span/a')
    sleep(3)
    ybhs.click()

    # 等待样本核收页面加载完成
    sleep(3)
    #转到 iframe
    browser.switch_to.frame('content')
    # 点击查询
    ybhscx = browser.find_element_by_id('btnSearch').click()
    sleep(2)

    # 其一：输入条码号，回车
    smtmh = browser.find_element_by_id('txtBarCode')
    smtmh.send_keys(tmh)
    sleep(1)
    smtmh.send_keys(Keys.ENTER)

    #其二：点击全部选择
    #qbxz = browser.find_element_by_id('btnScanAll').click()
    sleep(2)
    # 点击已扫条码
    ystm = browser.find_element_by_xpath('//*[@id="rightTabBar"]/div/div[1]/div/div[2]/span').click()

    sleep(2)
    # 点击病理类型
    browser.find_element_by_id('pathologyRadio').click()
    sleep(1)
    ActionChains(browser).move_to_element(browser.find_element_by_xpath('//*[@id="comboText6"]'))
    # 核收人倒三角
    hsr = browser.find_element_by_xpath('//*[@id="comboBtn6"]/a').click()
    sleep(1)
    # 对核收人文本框进行回车按键
    browser.find_element_by_xpath('//*[@id="comboText6"]').send_keys(Keys.ENTER)
    sleep(2)
    # 密码
    mima = browser.find_element_by_id('txtPassWord').send_keys(password)
    sleep(1)
    # 点击核收
    heshou = browser.find_element_by_id('btnCheck').click()

    sleep(3)
    browser.switch_to.parent_frame()

def pathology_receive(browser, tmh, pathology_type):
    '''
    进入核收生成病理号页面
    '''
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    # 病理管理
    blgl = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[9]/td[2]/table/tbody/tr[1]/td[4]/span')
    sleep(1)
    ActionChains(browser).double_click(blgl).perform()

    sleep(1)
    hsscblh = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[9]/td[2]/table/tbody/tr[2]/td[2]/table/tbody/tr/td[4]/span/a')
    sleep(2)
    hsscblh.click()
    sleep(2)
    browser.switch_to.frame('content')
    dqbllx = browser.find_element_by_id('pathologyTypeId')
    # 根据 Select 对象的value 值选择病理类型
    # 常规病理活体组织检查

    Select(dqbllx).select_by_visible_text(pathology_type)   # 根据下拉框值选择
    #Select(dqbllx).select_by_value("2")
    # 液基细胞学检测（TCT）
    #Select(dqbllx).select_by_value("1")
    # 病理切片会诊
    #Select(dqbllx).select_by_value("3")
    # 病理细胞学检查
    #Select(dqbllx).select_by_value("4")
    # 液基细胞学检测（BD-LCT）
    #Select(dqbllx).select_by_value("9")
    # 荧光原位杂交（FISH）检测
    #Select(dqbllx).select_by_value("20102")
    # 荧光定量PCR
    #Select(dqbllx).select_by_value("20103")
    # 基因测序
    #Select(dqbllx).select_by_value("20104")
    # 液基细胞学检测（LCT）
    #Select(dqbllx).select_by_value("7")


    sleep(1)
    #输入条码号
    tiaomahao = browser.find_element_by_id('suBarCodeId')
    tiaomahao.send_keys(tmh)
    tiaomahao.send_keys(Keys.ENTER)

    sleep(1)
    browser.find_element_by_id('passBtn').click()
    sleep(2)
    # 返回默认内容
    browser.switch_to.default_content()
    iframe2 = browser.switch_to.frame(2)
    sleep(3)
    browser.find_element_by_xpath('//*[@id="okBtn"]').click()


    sleep(2)
    # 切出frame
    browser.switch_to.parent_frame()
    browser.switch_to.parent_frame()

def pathology_result(browser, tmh):
    moveTo = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveTo).perform()

    sleep(2)
    # 病理结果录入
    bbjglr = browser.find_element_by_xpath('//*[@id="treeboxbox_tree"]/div/table/tbody/tr[9]/td[2]/table/tbody/tr[5]/td[2]/table/tbody/tr/td[4]/span/a')
    sleep(2)
    bbjglr.click()

    # 等待病理结果录入页面加载完成
    sleep(3)
    #转到 iframe
    browser.switch_to.frame('content')

    # 输入条码号，回车
    tiaomahao2 = browser.find_element_by_id('searchCode')
    tiaomahao2.send_keys(tmh)
    tiaomahao2.send_keys(Keys.ENTER)
    sleep(3)

    browser.find_element_by_id('modifyButton').click()

    browser.find_element_by_id('patientName').send_keys('0511')
    browser.find_element_by_id('comboText10').send_keys('33')   # 年龄
    browser.find_element_by_id('ageMonth').send_keys('5')   # 月

    xb = browser.find_element_by_xpath('//*[@id="comboBtn6"]/a[1]').click()
    sleep(1)
    # 获取性别下拉框的值，男
    browser.find_element_by_xpath('//*[@id="comboText6"]').send_keys(Keys.ENTER)
    sleep(1)
    browser.find_element_by_id('doctorPhone').send_keys('yishengdianhua')   # 医生电话
    browser.find_element_by_id('phone').send_keys('13666666666')
    browser.find_element_by_id('patientNo').send_keys('menzhenhao')
    browser.find_element_by_id('bed').send_keys('chuanghao')
    browser.find_element_by_id('locationName').send_keys('yiyuankeshi')
    browser.find_element_by_id('comboText3').send_keys('yisheng')
    sleep(1)
    browser.find_element_by_id('remark').send_keys('qitashuoming')
    browser.find_element_by_id('source').send_keys('songjianwu   haha')
    browser.find_element_by_id('clinicRemark').send_keys('linchuangzhenduan  lalal')
    sleep(1)

    browser.find_element_by_id('collectDate').send_keys('2018-05-01 16:50:08')
    #取材医生
    browser.find_element_by_xpath('//*[@id="comboBtn7"]/a[1]').click()
    browser.find_element_by_xpath('//*[@id="4af4e88a47617eea0147625b464a05d6"]/td[3]').click()
    sleep(2)

    #增加项目
    browser.find_element_by_xpath('//*[@id="comboBtn1"]/a[1]').click()
    browser.find_element_by_xpath('//*[@id="4af4e889505f5ad001506f42dd357f26"]/td[4]').click()
    sleep(2)

    #复诊医生
    browser.find_element_by_xpath('//*[@id="comboBtn9"]/a[1]').click()
    browser.find_element_by_xpath('//*[@id="comboText9"]').send_keys(Keys.ENTER)
    sleep(2)
    #初诊医生
    browser.find_element_by_xpath('//*[@id="comboBtn8"]/a[1]').click()
    sleep(1)
    browser.find_element_by_xpath('//*[@id="comboText8"]').send_keys(Keys.ENTER)

    browser.find_element_by_id('saveButton').click()
    sleep(2)



if __name__ == '__main__':
    startTime = datetime.datetime.now()
    print("开始时间：" + str(startTime))

    browser = webdriver.Chrome()
    # 隐性等待 30 秒
    browser.implicitly_wait(30)
    browser.maximize_window()
    # browser.get('http://113.108.207.92:8088/NIP/home.action')      # 康源测试环境外网地址
    browser.get('http://202.116.104.161/NIP/home.action')  # 康源linux基线环境

    userName = 'daan'
    password = '123@abc'
    collectBy = '刘良静'


    #tmh = '201801' + str(random.randint(1000, 9999)) + '00'


    tmhec = []

    for i in range(0, 90):
        # tmh = getData.get_barcodes()[i]
        tmh = '201810305900'
        pathology_type = getData.get_pathology_types()[i]
        customer = getData.get_customers()[i]

        try:
            login(userName, password)
            pathology_add(browser, tmh, collectBy, customer)

            specimen_accept(browser, tmh, password)
            pathology_receive(browser, tmh, pathology_type)
            pathology_result(browser, tmh)
            print('已录入结果的条码号为；' + tmh)
            browser.switch_to.default_content()
            # 点击安全退出，退出浏览器
            browser.find_element_by_link_text('安全退出').click()
            sleep(1)
           # i += 1
        except Exception:

            browser.get_screenshot_as_file("%sError.png" + tmh)

            tmhec.append(tmh)
            print('出现异常的条码号为：' + tmh)
            sleep(1)
            browser.switch_to.default_content()
            # 点击安全退出，退出浏览器
            browser.find_element_by_link_text('安全退出').click()
            sleep(1)
            continue

    print('异常条码号有这些：' + str(tmhec))

    endTime = datetime.datetime.now()
    print('结束时间：' + str(endTime))
    totalTime = endTime - startTime
    print('消耗时间(s)：' + str(totalTime.seconds))




