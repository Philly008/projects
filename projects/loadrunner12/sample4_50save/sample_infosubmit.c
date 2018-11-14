sample_infosubmit()
{
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
