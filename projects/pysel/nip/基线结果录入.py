from selenium import webdriver
from time import sleep
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
import datetime
from selenium.webdriver.support.ui import WebDriverWait
import random
from com.基线环境 import getData


def login_nip(userName, password):
    # 输入用户名、密码，登录
    userName = browser.find_element_by_id('userName').send_keys(userName)
    password = browser.find_element_by_id('password').send_keys(password)
    login = browser.find_element_by_id('btn_login').click()
    sleep(1)
    return browser

def specimen_add(browser):
    # 鼠标移动到左侧菜单栏
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()
    sleep(1)
    # 双击分包物流
    fbwl = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[1]/td[4]/span')
    ActionChains(browser).double_click(fbwl).perform()

    '''
    进入样本录入页面
    '''
    # browser.find_element_by_xpath(
    #     '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[3]/td[2]/table/tbody/tr[8]/td[2]/table/tbody/tr/td[4]/span/a').click()

    browser.find_element_by_link_text('样本录入').click()
    sleep(0.5)
    # 转到样本录入 iframe
    browser.switch_to.frame('content')

    # 点击新增
    browser.find_element_by_id('btnAdd').click()

   # tmh_list = []
    # 编辑基本信息

    # 条码号
    browser.find_element_by_id('txtBarCode').send_keys(tmh_list)
    sleep(0.5)
    browser.find_element_by_id('txtBarCode').send_keys(Keys.ENTER)
    sleep(0.5)

    # 病人类型
    patient_type = browser.find_element_by_id('comboText2')
    patient_type.clear()
    patient_type.send_keys('CDC')
    sleep(0.5)
    patient_type.send_keys(Keys.ENTER)
    sleep(0.5)
    #browser.find_element_by_xpath('//*[@id="comboBtn2"]/a').click()
    #browser.find_element_by_xpath('//*[@id="132"]/td[2]').click()
    # 点击医院的下拉框倒三角
    hos_name = browser.find_element_by_id('comboText1')
    hos_name.clear()
    hos_name.send_keys(khyy)
    sleep(0.5)
    hos_name.send_keys(Keys.ENTER)
    # browser.find_element_by_xpath('//*[@id="comboBtn1"]/a[1]').click()
    # # 搜索 天方达 并回车
    # hospit = browser.find_element_by_id('comboText1')
    # hospit.clear()
    # hospit.send_keys(khyy)
    # sleep(1)
    # hospit.send_keys(Keys.ENTER)
    sleep(0.5)
    # 证件号，6位地区好、8位出生日期、4位尾号
    browser.find_element_by_id('txtRegion').send_keys('445122')
    browser.find_element_by_id('txtBirth').send_keys('19891126')
    browser.find_element_by_id('txtTail').send_keys('066X')
    # 临床诊断
    browser.find_element_by_id('txtClinicalRemark').send_keys('linchuangzhenduan')
    # 采样日期，当前日期的月、日
    browser.find_element_by_id('txtColMon').send_keys(datetime.datetime.now().month)
    browser.find_element_by_id('txtColDay').send_keys(datetime.datetime.now().day)
    # 医生电话
    browser.find_element_by_id('txtDoctorPhone').send_keys('yishengdianhua')
    # 病人电话
    browser.find_element_by_id('txtPatientPhone').send_keys('bingrendianhua')
    # 姓名
    browser.find_element_by_id('txtPatientName').send_keys('xingming')
    # 性别
    xingbie = browser.find_element_by_id('comboText8')
    xingbie.send_keys('男')
    sleep(0.5)
    xingbie.send_keys(Keys.ENTER)
    # 体重 kg
    browser.find_element_by_id('txtPatientWeight').send_keys('65')
    # 身高 cm
    browser.find_element_by_id('txtPatientHeight').send_keys('168')
    # 年龄
    # browser.find_element_by_xpath('//*[@id="comboBtn7"]/a').click()
    # browser.find_element_by_xpath('//*[@id="adult"]/td[2]').click()
    sleep(0.5)
    '''
    无创信息
    '''
    # 出生日期
    browser.find_element_by_id('txtBirYear').send_keys('1990')
    browser.find_element_by_id('txtBirMon').send_keys('11')
    browser.find_element_by_id('txtBirDay').send_keys('12')
    '''
    # B超孕周孕日
    browser.find_element_by_id('txtBultrasonic').send_keys('14')
    browser.find_element_by_id('txtPregnant').send_keys('4')
    browser.find_element_by_id('txtLmp').send_keys('14')
    taishu = browser.find_element_by_id('comboText10')
    taishu.send_keys('1')
    sleep(0.5)
    taishu.send_keys(Keys.ENTER)
    sleep(1)
    '''
    # 诊疗卡号
    browser.find_element_by_id('txtPatientNo').send_keys('106000191300')
    # 床号
    browser.find_element_by_id('txtBed').send_keys('chuanghao')
    # 科室
    department = browser.find_element_by_id('comboText5')
    department.send_keys('keshi')
    sleep(0.5)
    department.send_keys(Keys.ENTER)
    # 医生
    doctor = browser.find_element_by_id('comboText4')
    doctor.send_keys('yisheng')
    sleep(0.5)
    doctor.send_keys(Keys.ENTER)
    # 获取检验项目下拉框
    jyxm = browser.find_element_by_id('comboText3')
    jyxm.send_keys(item)
    sleep(1)
    jyxm.send_keys(Keys.ENTER)
    sleep(2)
    # 其他说明
    browser.find_element_by_id('txtRemark').send_keys('孕产史：qitashuoming')

    '''
       其他信息

    browser.find_element_by_xpath('//*[@id="tabOther"]').click()

    testTubeBaby = browser.find_element_by_id('testTubeBaby')
    # 根据 Select 对象的value 值选择病理类型
    Select(testTubeBaby).select_by_value("1")

    bloodTransfusion = browser.find_element_by_id('bloodTransfusion')
    # 根据 Select 对象的value 值选择病理类型
    # shuxue = Select(bloodTransfusion).select_by_value("1")
    shuxue = Select(bloodTransfusion).select_by_index("1")

    transplantation = browser.find_element_by_id('transplantation')
    # 根据 Select 对象的value 值选择病理类型
    Select(transplantation).select_by_value("1")

    stemCellTreatment = browser.find_element_by_id('stemCellTreatment')
    # 根据 Select 对象的value 值选择病理类型
    Select(stemCellTreatment).select_by_value("1")

    immune = browser.find_element_by_id('immune')
    # 根据 Select 对象的value 值选择病理类型
    Select(immune).select_by_value("1")

    tumour = browser.find_element_by_id('tumour')
    # 根据 Select 对象的value 值选择病理类型
    Select(tumour).select_by_value("1")
    browser.find_element_by_id('twentOneBodyRisk').send_keys('3')
    browser.find_element_by_id('eighteenBodyRisk').send_keys('3')
    browser.find_element_by_id('ontdRisk').send_keys('3')
    browser.find_element_by_id('inspectCustomer').send_keys('3')
    browser.find_element_by_id('samplingCustomer').send_keys('3')
    sleep(1)
    browser.find_element_by_xpath('//*[@id="tabInfo"]').click()
'''
    sleep(1)

    # 点击保存
    bc = browser.find_element_by_id('btnSave')
    bc.click()
    sleep(1)

    search_barcode = browser.find_element_by_id('txtBarCodeSearch')
    search_barcode.send_keys(tmh_list)
    sleep(0.5)
    search_barcode.send_keys(Keys.ENTER)
    sleep(1)
    # 勾选待审数据
    gxsj = browser.find_element_by_id('chkPending')
    gxsj.click()

    # 信息审核
    browser.find_element_by_id('btnCheckPending').click()

    # 退出样本录入 iframe
    browser.switch_to.parent_frame()
    return tmh_list

def specimen_accept(browser, tmh):
    '''
    进入样本核收页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(1)
    # 样本核收
    browser.find_element_by_link_text('样本核收').click()
    sleep(2)
    # 转到样本核收 iframe
    browser.switch_to.frame('content')
    # 点击查询
    browser.find_element_by_id('btnSearch').click()
    sleep(1)
    # 输入条码号，回车，扫描条码号
    browser.find_element_by_id('txtBarCode').send_keys(tmh)
    sleep(0.5)
    browser.find_element_by_id('txtBarCode').send_keys(Keys.ENTER)
    sleep(1)
    # 点击已扫条码
    browser.find_element_by_xpath('//*[@id="rightTabBar"]/div/div[1]/div/div[2]/span').click()

    # 核收人倒三角
    hsr = browser.find_element_by_id('comboText6')
    # 对核收人文本框进行回车按键
    hsr.send_keys('刘良静')
    sleep(0.5)
    hsr.send_keys(Keys.ENTER)
    # 密码
    browser.find_element_by_id('txtPassWord').send_keys('123@abc')
    # 点击核收
    browser.find_element_by_id('btnCheck').click()
    sleep(1)
    # 退出样本核收 iframe
    browser.switch_to.parent_frame()


def specimen_distribute(browser, tmh_list):
    '''
    进入样本分发页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(0.5)
    # 样本分发
    browser.find_element_by_link_text('样本分发').click()
    sleep(2)
    # 转到样本分发 iframe
    browser.switch_to.frame('content')

    # 输入条码号，回车，分发条码号
    fftm = browser.find_element_by_id('barCodeInfo')
    fftm.send_keys(tmh_list)
    sleep(0.5)
    fftm.send_keys(Keys.ENTER)
    sleep(2)
    # 接收人
    jieshouren = browser.find_element_by_id('comboText4')
    jieshouren.clear()
    jieshouren.send_keys('刘良静')
    sleep(0.5)
    # 对接收人文本框进行回车按键
    jieshouren.send_keys(Keys.ENTER)
    sleep(0.5)

    # 密码
    browser.find_element_by_id('receivePassword').send_keys('123@abc')
    # 点击确认接收
    browser.find_element_by_id('btnReceive').click()
    sleep(1)
    # 退出样本分发 iframe
    browser.switch_to.parent_frame()

def specimen_ready(browser, tmh_list):
    '''
    进入样本准备页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(1)
    # 样本检测
    ybjc = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[8]/td[2]/table/tbody/tr[1]/td[4]/span')
    # sleep(1)
    ActionChains(browser).double_click(ybjc).perform()

    sleep(1)
    # 样本准备
    browser.find_element_by_link_text('样本准备').click()
    sleep(1)
    # 转到 iframe
    browser.switch_to.frame('content')
    sb = browser.find_element_by_id('comboText1')
    sb.send_keys(instrument)
    sleep(0.5)
    sb.send_keys(Keys.ENTER)
    sleep(1)
    bb = browser.find_element_by_id('subarCodeId')
    bb.send_keys(tmh_list)
    sleep(0.5)
    bb.send_keys(Keys.ENTER)
    sleep(1)
    browser.switch_to.default_content()


def specimen_result(browser, tmh_list, xmjg):
    '''
    进入结果录入页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

    sleep(1)
    #样本检测
    ybjc = browser.find_element_by_xpath(
        '//*[@id="treeboxbox_tree"]/div/table/tbody/tr[8]/td[2]/table/tbody/tr[1]/td[4]/span')
    # sleep(1)
    ActionChains(browser).double_click(ybjc).perform()

    # 结果录入
    browser.find_element_by_link_text('结果录入').click()
    sleep(1)
    # 转到 iframe
    browser.switch_to.frame('content')

    # 搜索仪器 并回车
    instrumentE = browser.find_element_by_id('comboText1')
    instrumentE.send_keys(instrument)
    sleep(1)
    instrumentE.send_keys(Keys.ENTER)
    sleep(1)
    cztm = browser.find_element_by_id('txtSearchSubBarCode')
    cztm.send_keys(tmh_list)
    sleep(1)
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

    for i in range(len(td_list)):
        if td_list[i].text == '':
            # 定位到列的对应输入框
            jg1 = td_list[i].find_element_by_id('comboText5')
            jg1.click()
            # 清空并填写结果值
            jg1.clear()
            jg1.send_keys(xmjg)
            sleep(0.5)
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

def specimen_audit(browser):
    '''
    进入签字审核页面
    '''
    moveto = browser.find_element_by_id('left2')
    ActionChains(browser).move_to_element(moveto).perform()

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
    # yq = browser.find_element_by_xpath('//*[@id="comboBtn1"]/a[1]').click()
    # sleep(1)
    # 搜索仪器 并回车
    instrumentE = browser.find_element_by_id('comboText1')
    instrumentE.send_keys(instrument)
    sleep(1)
    instrumentE.send_keys(Keys.ENTER)
    sleep(1)
    browser.find_element_by_id('chkList').click()

    # 点击审核标本
    browser.find_element_by_id('btnAuditSpecimen').click()
    sleep(1)
    browser.find_element_by_id('popup_ok').click()
    sleep(1)
    browser.find_element_by_xpath('//*[@id="popup_ok"]').send_keys(Keys.ENTER)
    sleep(1)
    browser.switch_to.default_content()
    # 点击安全退出，退出浏览器
    browser.find_element_by_link_text('安全退出').click()
    sleep(1)

if __name__ == '__main__':

    browser = webdriver.Chrome()
    # 隐性等待 10 秒，只需要设置一次
    browser.implicitly_wait(10)
    # 最大化浏览器
    browser.maximize_window()
    # 访问网址
    browser.get('http://202.116.104.161/NIP/login.action')
    #browser.get('http://192.168.14.37/NIP/home.action')

    """
    tmh_list = ['201820460000']
    xmjg = '1'
    khyy = '郑州大学附属郑州中心医院'
    item = '血清C肽测定(CP)'
    instrument = '西门子2'

    login_nip('daan', '123@abc')
    specimen_add(browser)
    specimen_accept(browser, tmh_list)
    specimen_distribute(browser, tmh_list)
    specimen_ready(browser, tmh_list)
    specimen_result(browser, tmh_list, xmjg)
    """
    # khyy = '郑州大学附属郑州中心医院'
    # item = '血清C肽测定(CP)'
    # instrument = '西门子2'
    # i = 0
    tmhec = []
    tmhsh = []
    for i in range(0, 40):
        tmh_list = getData.get_normal_barcodes()[i]
        khyy = getData.get_normal_customers()[i]
        item = getData.get_normal_items()[i]
        instrument = getData.get_normal_instruments()[i]
        xmjg = '1'
        try:
            login_nip('daan', '123@abc')
            tmh_list = specimen_add(browser)
            specimen_accept(browser,tmh_list)
            specimen_distribute(browser, tmh_list)
            specimen_ready(browser, tmh_list)
            specimen_result(browser, tmh_list, xmjg)
            login_nip('sh', '123@abc')
            specimen_audit(browser)
            print('已签字审核的条码号为：' + str(tmh_list))
            tmhsh.append(tmh_list)
            sleep(1)
        except Exception as e:
            print('出现异常的条码号为：' + tmh_list + '\n' + str(e))

            tmhec.append(tmh_list)
            sleep(1)
            browser.switch_to.default_content()
            # 点击安全退出，退出浏览器
            browser.find_element_by_link_text('安全退出').click()
            sleep(1)
            continue

    print('异常条码号有这些：' + str(len(tmhec)) + '个。\n'+ str(tmhec))
    print('已审核条码号有这些：' + str(len(tmhsh)) + '个。\n'+ str(tmhsh))