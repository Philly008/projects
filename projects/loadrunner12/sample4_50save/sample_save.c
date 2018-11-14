sample_save()
{

	lr_start_transaction("登录");
	web_url("login.action", 
		"URL=http://202.116.104.161/NIP/login.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/new/bgd_login_2.jpg", ENDITEM, 
		"Url=images/new/bgd_login3_0.jpg", ENDITEM, 
		"Url=images/new/input.gif", ENDITEM, 
		"Url=images/new/btn_login.png", ENDITEM, 
		LAST);

	web_submit_form("login.action_2", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=userName", "Value={user_name}", ENDITEM, 
		"Name=password", "Value=1234qwer", ENDITEM, 
		EXTRARES, 
		"Url=scripts/pdfobject.js?_=1541395994665", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541395994666", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/pdfobject.js?_=1541395994667", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541395994668", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery.blockUI.js?_=1541395994669", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/common.js?_=1541395994670", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/dhtmlx.js?_=1541395994671", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=images/new/main_top_bgd.jpg", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=images/new/main_top.jpg", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/iconUncheckAll.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line3.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line2.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus3.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus2.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus4.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		LAST);

	
	web_custom_request("searchdanger.action", 
		"URL=http://202.116.104.161/NIP/rpt/searchdanger.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("noticeNewSearch.action", 
		"URL=http://202.116.104.161/NIP/ref/noticeNewSearch.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("searchdelay.action", 
		"URL=http://202.116.104.161/NIP/rpt/searchdelay.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("rateMatured.action", 
		"URL=http://202.116.104.161/NIP/ref/rateMatured.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	lr_end_transaction("登录", LR_AUTO);
	
	lr_start_transaction("打开样本录入页面");	
	lr_think_time(3);

	

	web_url("speInput.action", 
		"URL=http://202.116.104.161/NIP/dis/speInput.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../pages/test/images/button01a.jpg", ENDITEM, 
		"Url=../pages/test/images/button02a.jpg", ENDITEM, 
		"Url=../pages/test/images/line_01.jpg", ENDITEM, 
		"Url=../pages/test/images/button_bg1a.jpg", ENDITEM, 
		"Url=../pages/test/images/ico_lock_2.jpg", ENDITEM, 
		"Url=../pages/test/images/select-basic.jpg", ENDITEM, 
		"Url=../pages/test/images/clear-basic.jpg", ENDITEM, 
		"Url=../pages/test/images/loading.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhtmlxcalendar_dhx_skyblue/bg_main.png", ENDITEM, 
		"Url=../pages/test/images/ico_01.jpg", ENDITEM, 
		"Url=../pages/test/images/select-hover.jpg", ENDITEM, 
		"Url=../pages/test/images/select-click.jpg", ENDITEM, 
		"Url=../pages/test/images/button_bg1b.jpg", ENDITEM, 
		"Url=../pages/test/images/clear-hover.jpg", ENDITEM, 
		"Url=../images/busy.gif", ENDITEM, 
		LAST);

	lr_think_time(10);
	lr_end_transaction("打开样本录入页面", LR_AUTO);

//	lr_rendezvous("用户在此集中进行样本录入");

/* LR12社区版支持并发数 50 
tomcat中的conf/server.xml设置并发连接数
minProcessors：最小空闲连接线程数，用于提高系统处理性能，默认值为10
maxProcessors：最大连接线程数，即：并发处理的最大请求数，默认值为75
acceptCount：允许的最大连接数，即等待队列，指定当所有可以使用的处理请求的线程数都被使用时，可以放到处理队列中的请求数，超过这个数的请求将不予处理。应大于等于maxProcessors，默认值为100
*/
//	构造12位数以00结尾	
	lr_save_string("1200", "barCode_add1");		// 将字符串“1100”保存到变量barCode_add1
//	lr_output_message(lr_eval_string("{barCode_add1}"));	// 返回参数中当前的值，并输出
	lr_save_string(lr_eval_string("{barCode_add2}{barCode_add1}"), "barCode_add");
	lr_output_message(lr_eval_string("{barCode_add}"));
	
	lr_save_string(lr_eval_string("{barCode_add}"),"barCode_add");

	

	lr_start_transaction("保存");

	web_submit_data("speInputLoadDetailByBarCode.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLoadDetailByBarCode.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value={barCode_add}", ENDITEM, 
		LAST);

	web_submit_data("speInputCustomerInputTips.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputCustomerInputTips.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		LAST);

	web_submit_data("speInputLocation.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputLocation.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		LAST);

	web_submit_data("speInputDoctor.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputDoctor.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		LAST);

	web_submit_data("speInputItem.action", 
		"Action=http://202.116.104.161/NIP/dis/speInputItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_data("speInputInfoTestItem.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputInfoTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=testItemCentreId", "Value=111019", ENDITEM, 
		"Name=currentId", "Value=", ENDITEM, 
		"Name=currentSex", "Value=male", ENDITEM, 
		"Name=type", "Value=单项", ENDITEM, 
		LAST);
	
	// 关联speID

	web_reg_save_param_ex(
		"ParamName=spe_id",
		"LB=\",id:\"",
		"RB=\",deliveryType:",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_reg_save_param_ex(
		"ParamName=bar_code",
		"LB=deliveryType:\"\",barCode:\"",
		"RB=\",",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

//	web_reg_find("Text=success",LAST);	// 没找到success就中止运行。

	lr_save_datetime("%Y-%m-%d %H:%M:%S", DATE_NOW+TIME_NOW, "time1");	//获取当前时间，保存到参数time1
	lr_save_datetime("%Y-%m-%d %H:%M:%S", DATE_NOW+TIME_NOW-ONE_DAY, "time2");	//获取昨天时间

	
/*
	web_submit_data("speInputValidateSetLab.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputValidateSetLab.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=specimenInputDto.id", "Value=", ENDITEM, 
		"Name=specimenInputDto.singleItemTypes", "Value=CERX1000001007-201134-40281281401ec28f01401ec53f690003,", ENDITEM, // %2C 解码（unquote）后表示 ,
		"Name=specimenInputDto.groupItemTypes", "Value=", ENDITEM, 
		"Name=specimenInputDto.setItemTypes", "Value=", ENDITEM, 
		"Name=specimenInputDto.testItemUCode", "Value=CERX1000001007", ENDITEM, 
		"Name=specimenInputDto.barCode", "Value={barCode_add}", ENDITEM, 
		"Name=specimenInputDto.patientType", "Value=", ENDITEM, 
		"Name=specimenInputDto.specimenStatusId", "Value=1026", ENDITEM, 
		"Name=specimenInputDto.customer", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		"Name=specimenInputDto.mergeReport", "Value=true", ENDITEM, 
		"Name=specimenInputDto.reportLanType", "Value=cnReport", ENDITEM, 
		"Name=specimenInputDto.applyNo", "Value=", ENDITEM, 
		"Name=specimenInputDto.idCard", "Value=", ENDITEM, 
		"Name=specimenInputDto.clinicalRemark", "Value=", ENDITEM, 
		"Name=specimenInputDto.takeDate", "Value={time1}", ENDITEM, 
		"Name=specimenInputDto.doctorPhone", "Value=", ENDITEM, 
		"Name=specimenInputDto.patientPhone", "Value=", ENDITEM, 
		"Name=specimenInputDto.collectDate", "Value={time2}", ENDITEM, 
		"Name=specimenInputDto.patientWeight", "Value=", ENDITEM, 
		"Name=specimenInputDto.patientHeight", "Value=", ENDITEM, 
		"Name=specimenInputDto.patientName", "Value=pa_{patien_name}", ENDITEM, 
		"Name=specimenInputDto.sexType", "Value=male", ENDITEM, 
		"Name=specimenInputDto.ageType", "Value=", ENDITEM, 
		"Name=specimenInputDto.ageYear", "Value=23", ENDITEM, 
		"Name=specimenInputDto.ageMonth", "Value=", ENDITEM, 
		"Name=specimenInputDto.ageDay", "Value=", ENDITEM, 
		"Name=specimenInputDto.ageHour", "Value=", ENDITEM, 
		"Name=specimenInputDto.patientNo", "Value=", ENDITEM, 
		"Name=specimenInputDto.bed", "Value=", ENDITEM, 
		"Name=specimenInputDto.birthday", "Value=", ENDITEM, 
		"Name=specimenInputDto.babyCount", "Value=", ENDITEM, 
		"Name=specimenInputDto.urineVolume", "Value=", ENDITEM, 
		"Name=specimenInputDto.bodyStyle", "Value=", ENDITEM, 
		"Name=specimenInputDto.seminalVolume", "Value=", ENDITEM, 
		"Name=specimenInputDto.remark", "Value=", ENDITEM, 
		"Name=specimenInputDto.location", "Value=", ENDITEM, 
		"Name=specimenInputDto.doctor", "Value=", ENDITEM, 
		"Name=specimenInputDto.testTubeBaby", "Value=", ENDITEM, 
		"Name=specimenInputDto.bloodTransfusion", "Value=", ENDITEM, 
		"Name=specimenInputDto.transplantation", "Value=", ENDITEM, 
		"Name=specimenInputDto.stemCellTreatment", "Value=", ENDITEM, 
		"Name=specimenInputDto.inspectCustomer", "Value=", ENDITEM, 
		"Name=specimenInputDto.samplingCustomer", "Value=", ENDITEM, 
		"Name=specimenInputDto.immune", "Value=", ENDITEM, 
		"Name=specimenInputDto.tumour", "Value=", ENDITEM, 
		"Name=specimenInputDto.twentOneBodyRisk", "Value=", ENDITEM, 
		"Name=specimenInputDto.eighteenBodyRisk", "Value=", ENDITEM, 
		"Name=specimenInputDto.ontdRisk", "Value=", ENDITEM, 
		"Name=specimenInputDto.specimenStatusName", "Value=正常", ENDITEM, 	// 无法识别中文
		"Name=specimenInputDto.patientTypeName", "Value=", ENDITEM, 
		"Name=specimenInputDto.samplingDay", "Value=", ENDITEM, 
		"Name=specimenInputDto.lastmenstrualperiod", "Value=", ENDITEM, 
		"Name=specimenInputDto.pregnancy", "Value=", ENDITEM, 
		"Name=specimenInputDto.examinationDay", "Value=", ENDITEM, 
		"Name=specimenInputDto.examinationChild", "Value=", ENDITEM, 
		"Name=specimenInputDto.crownrumpLength", "Value=", ENDITEM, 
		"Name=specimenInputDto.race", "Value=", ENDITEM, 
		"Name=specimenInputDto.biparietaldiameter", "Value=", ENDITEM, 
		"Name=specimenInputDto.nuchaltranslucency", "Value=", ENDITEM, 
		"Name=specimenInputDto.nasalbone", "Value=", ENDITEM, 
		"Name=specimenInputDto.nasalboneType", "Value=", ENDITEM, 
		"Name=specimenInputDto.week", "Value=", ENDITEM, 
		"Name=specimenInputDto.day", "Value=", ENDITEM, 
		"Name=specimenInputDto.implantdate", "Value=", ENDITEM, 
		"Name=specimenInputDto.takeeggsdate", "Value=", ENDITEM, 
		"Name=specimenInputDto.iddm", "Value=", ENDITEM, 
		"Name=specimenInputDto.is_smoke", "Value=", ENDITEM, 
		"Name=specimenInputDto.pregnancyway", "Value=", ENDITEM, 
		"Name=specimenInputDto.abnormalpregnancy", "Value=", ENDITEM, 
		"Name=specimenInputDto.setUCodes", "Value=", ENDITEM, 
		"Name=specimenInputDto.uniqueCodeKeys", "Value=CERX1000001007", ENDITEM, 
		LAST);
*/
	
	lr_rendezvous("样本录入_保存_集合点");

	web_custom_request("speInputValidateSetLab.action", 
		"URL=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputValidateSetLab.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=specimenInputDto.id="
		"&specimenInputDto.singleItemTypes=CERX1000001007-201134-40281281401ec28f01401ec53f690003%2C"
		"&specimenInputDto.groupItemTypes="
		"&specimenInputDto.setItemTypes="
		"&specimenInputDto.testItemUCode=CERX1000001007%2C"
		"&specimenInputDto.barCode={barCode_add}"
		"&specimenInputDto.patientType="
		"&specimenInputDto.specimenStatusId=201842"		// 标本状态 轻度溶血
		"&specimenInputDto.customer=f2b7c0b75d5526aa015d5da979192e9b"
		"&specimenInputDto.mergeReport=true"
		"&specimenInputDto.reportLanType=cnReport"
		"&specimenInputDto.applyNo="
		"&specimenInputDto.idCard="
		"&specimenInputDto.clinicalRemark="
		"&specimenInputDto.takeDate={time1}"
		"&specimenInputDto.doctorPhone="
		"&specimenInputDto.patientPhone="
		"&specimenInputDto.collectDate={time2}"
		"&specimenInputDto.patientWeight="
		"&specimenInputDto.patientHeight="
		"&specimenInputDto.patientName={user_name}_{patient_name}"
		"&specimenInputDto.sexType=male"
		"&specimenInputDto.ageType=%E6%88%90%E4%BA%BA"	// 可以通过python的urllib.parse.unquote()解码后为 成人
		"&specimenInputDto.ageYear="
		"&specimenInputDto.ageMonth="
		"&specimenInputDto.ageDay="
		"&specimenInputDto.ageHour="
		"&specimenInputDto.patientNo="
		"&specimenInputDto.bed="
		"&specimenInputDto.birthday="
		"&specimenInputDto.babyCount="
		"&specimenInputDto.urineVolume="
		"&specimenInputDto.bodyStyle="
		"&specimenInputDto.seminalVolume="
		"&specimenInputDto.remark="
		"&specimenInputDto.location="
		"&specimenInputDto.doctor="
		"&specimenInputDto.testTubeBaby="
		"&specimenInputDto.bloodTransfusion="
		"&specimenInputDto.transplantation="
		"&specimenInputDto.stemCellTreatment="
		"&specimenInputDto.inspectCustomer="
		"&specimenInputDto.samplingCustomer="
		"&specimenInputDto.immune="
		"&specimenInputDto.tumour="
		"&specimenInputDto.twentOneBodyRisk="
		"&specimenInputDto.eighteenBodyRisk="
		"&specimenInputDto.ontdRisk="
		"&specimenInputDto.specimenStatusName="		// 由 specimenStatusId 确定
		"&specimenInputDto.patientTypeName="
		"&specimenInputDto.samplingDay="
		"&specimenInputDto.lastmenstrualperiod="
		"&specimenInputDto.pregnancy="
		"&specimenInputDto.examinationDay="
		"&specimenInputDto.examinationChild="
		"&specimenInputDto.crownrumpLength="
		"&specimenInputDto.race="
		"&specimenInputDto.biparietaldiameter="
		"&specimenInputDto.nuchaltranslucency="
		"&specimenInputDto.nasalbone="
		"&specimenInputDto.nasalboneType="
		"&specimenInputDto.week="
		"&specimenInputDto.day="
		"&specimenInputDto.implantdate="
		"&specimenInputDto.takeeggsdate="
		"&specimenInputDto.iddm="
		"&specimenInputDto.is_smoke="
		"&specimenInputDto.pregnancyway="
		"&specimenInputDto.abnormalpregnancy="
		"&specimenInputDto.setUCodes="
		"&specimenInputDto.uniqueCodeKeys=CERX1000001007",
		LAST);
	lr_end_transaction("保存",LR_AUTO);

	lr_think_time(12);

	

	return 0;
}
