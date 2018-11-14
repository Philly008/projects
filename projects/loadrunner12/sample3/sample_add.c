sample_add()
{

	lr_think_time(10);

	web_url("minus3.gif", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/minus3.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("line1.gif", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line1.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("sky_blue_sel_tree.png", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_sel_tree.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t12.inf", 
		LAST);

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

	lr_think_time(19);
	
//	构造12位数以00结尾
	
	lr_save_string("1100", "barCode_add1");		// 将字符串“1100”保存到变量barCode_add1
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

	lr_think_time(16);

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

	lr_save_datetime("%Y-%m-%d %H:%M:%S", DATE_NOW+TIME_NOW, "time1");	//获取当前时间，保存到参数time1
	lr_save_datetime("%Y-%m-%d %H:%M:%S", DATE_NOW+TIME_NOW-ONE_DAY, "time2");	//获取昨天时间

	

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
		"Name=specimenInputDto.patientName", "Value=perf2", ENDITEM, 
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

	lr_end_transaction("保存",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("信息审核");

	web_submit_data("speInputLoadDetailByBarCode.action_2",
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLoadDetailByBarCode.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/dis/speInput.action",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=barCode", "Value={bar_code}", ENDITEM,
		LAST);

	web_submit_data("speInputLocation.action_2", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLocation.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		LAST);

	web_submit_data("speInputDoctor.action_2", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputDoctor.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customerId", "Value=f2b7c0b75d5526aa015d5da979192e9b", ENDITEM, 
		LAST);

	web_submit_data("speInputVerifyAuditBarCode.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputVerifyAuditBarCode.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=specimenIds", "Value={spe_id}", ENDITEM, 
		LAST);

	web_submit_data("speInputListAudit.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputListAudit.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=specimenIds", "Value={spe_id}", ENDITEM, 
		LAST);

	lr_end_transaction("信息审核",LR_AUTO);

	return 0;
}
