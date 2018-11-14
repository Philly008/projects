sample_receive()
{

	lr_think_time(23);

	lr_start_transaction("样本核收");

	web_url("speCheck.action", 
		"URL=http://202.116.104.161/NIP/dis/speCheck.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhx_skyblue/bg_top.png", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhx_skyblue/dhx_skyblue_top.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/icons_greenfolders/sort_desc.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_grid.gif", ENDITEM, 
		LAST);

	lr_think_time(27);

	lr_start_transaction("扫描条码");

	web_submit_data("speCheckScan.action", 
		"Action=http://202.116.104.161/NIP/dis/speCheckScan.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speCheck.action", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value=201811059800", ENDITEM, 
		LAST);

	lr_end_transaction("扫描条码",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("核收人");

	web_submit_data("speCheckAffirm.action", 
		"Action=http://202.116.104.161/NIP/dis/speCheckAffirm.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/speCheck.action", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=barCodes", "Value=201811059800", ENDITEM, 
		"Name=userID", "Value=4af4e88a47617eea0147625b464a05d6", ENDITEM, 
		"Name=password", "Value=123@abc", ENDITEM, 
		LAST);

	lr_end_transaction("核收人",LR_AUTO);

	lr_end_transaction("样本核收",LR_AUTO);

	return 0;
}