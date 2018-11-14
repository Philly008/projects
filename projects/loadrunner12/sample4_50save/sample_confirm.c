sample_confirm()
{

	lr_think_time(71);

	web_url("specimenAuditMain.action", 
		"URL=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../pages/test/scripts/txlr.js?_=1541383684606", ENDITEM, 
		"Url=../scripts/json2.js?_=1541383684607", ENDITEM, 
		"Url=../pages/test/scripts/mblr.js?_=1541383684608", ENDITEM, 
		LAST);

	web_link("Q_2", 
		"Text=Q", 
		"Snapshot=t58.inf", 
		LAST);

	lr_think_time(5);

	web_submit_data("specimenAuditLeft.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditLeft.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		"Name=customerId", "Value=", ENDITEM, 
		LAST);

	web_url("specimenAuditPatientInfo.action", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("specimenAuditDetails.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=subBarCode", "Value={bar_code}", ENDITEM, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		LAST);

	web_url("specimenAuditPatientInfo.action_2",
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditPatientInfo.action?subBarCodeForPatient={bar_code}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action",
		"Snapshot=t62.inf",
		"Mode=HTML",
		LAST);

	web_submit_data("specimenAuditDetails.action_2",
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditDetails.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action",
		"Snapshot=t63.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=subBarCode", "Value={bar_code}", ENDITEM,
		"Name=instrumentId", "Value=20192", ENDITEM,
		LAST);

	web_submit_data("specimenAuditAudit.action", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditAudit.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=speInstrumentItemIds", "Value={spe_instrument_item_id}", ENDITEM, 
		"Name=currentSpeId", "Value={spe_result_id}", ENDITEM, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		"Name=instrumentName", "Value=Î÷ÃÅ×Ó2", ENDITEM, 
		LAST);

	web_url("specimenAuditPatientInfo.action_3", 
		"URL=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditPatientInfo.action?subBarCodeForPatient={bar_code}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("specimenAuditDetails.action_3", 
		"Action=http://202.116.104.161/NIP/lab/${ctx}/lab/specimenAuditDetails.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/specimenAuditMain.action", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=subBarCode", "Value={bar_code}", ENDITEM, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		LAST);

	return 0;
}