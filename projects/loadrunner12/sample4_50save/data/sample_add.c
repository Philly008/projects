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

	lr_start_transaction("保存");

	web_submit_data("speInputLoadDetailByBarCode.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputLoadDetailByBarCode.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value=201811059800", ENDITEM, 
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

	web_custom_request("speInputValidateSetLab.action", 
		"URL=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputValidateSetLab.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=specimenInputDto.id=&specimenInputDto.singleItemTypes=CERX1000001007-201134-40281281401ec28f01401ec53f690003%2C&specimenInputDto.groupItemTypes=&specimenInputDto.setItemTypes=&specimenInputDto.testItemUCode=CERX1000001007%2C&specimenInputDto.barCode=201811059800&specimenInputDto.patientType=&specimenInputDto.specimenStatusId=1026&specimenInputDto.customer=f2b7c0b75d5526aa015d5da979192e9b&specimenInputDto.mergeReport=true&specimenInputDto.reportLanType=cnReport&specimenInputDto.applyNo=&"
		"specimenInputDto.idCard=&specimenInputDto.clinicalRemark=&specimenInputDto.takeDate=2018-11-05+13%3A34%3A00&specimenInputDto.doctorPhone=&specimenInputDto.patientPhone=&specimenInputDto.collectDate=2018-11-05+05%3A05%3A00&specimenInputDto.patientWeight=&specimenInputDto.patientHeight=&specimenInputDto.patientName=perf2&specimenInputDto.sexType=male&specimenInputDto.ageType=%E6%88%90%E4%BA%BA&specimenInputDto.ageYear=&specimenInputDto.ageMonth=&specimenInputDto.ageDay=&specimenInputDto.ageHour=&"
		"specimenInputDto.patientNo=&specimenInputDto.bed=&specimenInputDto.birthday=&specimenInputDto.babyCount=&specimenInputDto.urineVolume=&specimenInputDto.bodyStyle=&specimenInputDto.seminalVolume=&specimenInputDto.remark=&specimenInputDto.location=&specimenInputDto.doctor=&specimenInputDto.testTubeBaby=&specimenInputDto.bloodTransfusion=&specimenInputDto.transplantation=&specimenInputDto.stemCellTreatment=&specimenInputDto.inspectCustomer=&specimenInputDto.samplingCustomer=&specimenInputDto.immune=&"
		"specimenInputDto.tumour=&specimenInputDto.twentOneBodyRisk=&specimenInputDto.eighteenBodyRisk=&specimenInputDto.ontdRisk=&specimenInputDto.specimenStatusName=姝ｅ父&specimenInputDto.patientTypeName=&specimenInputDto.samplingDay=&specimenInputDto.lastmenstrualperiod=&specimenInputDto.pregnancy=&specimenInputDto.examinationDay=&specimenInputDto.examinationChild=&specimenInputDto.crownrumpLength=&specimenInputDto.race=&specimenInputDto.biparietaldiameter=&specimenInputDto.nuchaltranslucency=&"
		"specimenInputDto.nasalbone=&specimenInputDto.nasalboneType=&specimenInputDto.week=&specimenInputDto.day=&specimenInputDto.implantdate=&specimenInputDto.takeeggsdate=&specimenInputDto.iddm=&specimenInputDto.is_smoke=&specimenInputDto.pregnancyway=&specimenInputDto.abnormalpregnancy=&specimenInputDto.setUCodes=&specimenInputDto.uniqueCodeKeys=CERX1000001007", 
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
		"Name=barCode", "Value=201811059800", ENDITEM, 
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
		"Name=specimenIds", "Value=5bdfd5ecb4907e1c4bf727cf", ENDITEM, 
		LAST);

	web_submit_data("speInputListAudit.action", 
		"Action=http://202.116.104.161/NIP/dis/${ctx}/dis/speInputListAudit.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speInput.action", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=specimenIds", "Value=5bdfd5ecb4907e1c4bf727cf", ENDITEM, 
		LAST);

	lr_end_transaction("信息审核",LR_AUTO);

	return 0;
}
