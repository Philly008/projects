sample_prepare()
{

	lr_think_time(32);

	web_url("samplePrepare.action", 
		"URL=http://202.116.104.161/NIP/lab/samplePrepare.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=specimenPrepareList.action?instrumentId=20192&time=1541383490573", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/item_chk0.gif", ENDITEM, 
		LAST);

	web_custom_request("specimenPrepareInitDate.action", 
		"URL=http://202.116.104.161/NIP/lab/specimenPrepareInitDate.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	// 关联仪器最大流水号
	web_reg_save_param_ex(
		"ParamName=max_seq",
		"LB={maxSeq:",
		"RB=}",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	

	web_submit_data("specimenPrepareMaxSeq.action", 
		"Action=http://202.116.104.161/NIP/lab/specimenPrepareMaxSeq.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=instrumentId", "Value=20192", ENDITEM, 
		LAST);

	web_submit_data("specimenPrepareCheck.action",
		"Action=http://202.116.104.161/NIP/lab/specimenPrepareCheck.action?time=1541383494528",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action",
		"Snapshot=t35.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=instrumentId", "Value=20192", ENDITEM,
		"Name=subarCode", "Value={bar_code}", ENDITEM,
		"Name=seq", "Value={max_seq}", ENDITEM,
		"Name=preSeq", "Value=", ENDITEM,
		LAST);

	web_submit_data("specimenPrepareLocalAndNonLocal.action",
		"Action=http://202.116.104.161/NIP/lab/specimenPrepareLocalAndNonLocal.action?time=1541383494579",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/lab/samplePrepare.action",
		"Snapshot=t36.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=instrumentId", "Value=20192", ENDITEM,
		"Name=subarCode", "Value={bar_code}", ENDITEM,
		"Name=seq", "Value={max_seq}", ENDITEM,
		"Name=preSeq", "Value=", ENDITEM,
		LAST);

	return 0;
}
