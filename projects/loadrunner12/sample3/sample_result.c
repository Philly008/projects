sample_result()
{

	lr_think_time(23);

	web_url("speResult.action", 
		"URL=http://202.116.104.161/NIP/lab/speResult.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../scripts/json2.js?_=1541383524438", ENDITEM, 
		"Url=../pages/test/scripts/txlr.js?_=1541383524437", ENDITEM, 
		"Url=../pages/test/scripts/mblr.js?_=1541383524439", ENDITEM, 
		LAST);

	web_link("Q", 
		"Text=Q", 
		"Snapshot=t38.inf", 
		LAST);

	lr_think_time(5);

	web_submit_data("speResultLeft.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultLeft.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		"Name=customerId", "Value=", ENDITEM, 
		LAST);

	web_submit_data("speResultDetails.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=subBarCode", "Value={bar_code}", ENDITEM, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		LAST);

	web_url("speResultPatientInfo.action", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("speResultPatientInfo.action_2",
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultPatientInfo.action?subBarCodeForPatient={bar_code}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/speResult.action",
		"Snapshot=t42.inf",
		"Mode=HTML",
		LAST);

	// 关联仪器项目ID
	web_reg_save_param_ex(
		"ParamName=spe_instrument_item_id",
		"LB=message:\"\",id:\"",
		"RB=\",result:\"",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_submit_data("speResultDetails.action_2",
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultDetails.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/speResult.action",
		"Snapshot=t43.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=subBarCode", "Value={bar_code}", ENDITEM,
		"Name=instrumentId", "Value=20192", ENDITEM,
		LAST);
	
	// 关联speid
	web_reg_save_param_ex(
		"ParamName=spe_result_id",
		"LB=\"statusInfo\":{\"id\":\"",
		"RB=\",\"subBarCode\":\"",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	
	web_custom_request("speResultSaveResult.action",
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultSaveResult.action",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/speResult.action",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=resultTypeName=%E6%95%B0%E5%80%BC%E5%9E%8B&subBarCode={bar_code}&uniqueCode=CERX1000001007&testItemResult=1.00&instrumentId=20192&itemName=%E8%A1%80%E6%B8%85C%E8%82%BD%E6%B5%8B%E5%AE%9A(CP)",
		LAST);

	web_submit_data("speResultSubmitSpecimen.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultSubmitSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=speInstrumentItemIds", "Value={spe_instrument_item_id}", ENDITEM, 
		"Name=currentSpeId", "Value={spe_result_id}", ENDITEM, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		LAST);

	web_url("speResultPatientInfo.action_3", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("speResultDetails.action_3", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/speResultDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/speResult.action", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=subBarCode", "Value={bar_code}", ENDITEM, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		LAST);

	return 0;
}
