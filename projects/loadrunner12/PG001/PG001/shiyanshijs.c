shiyanshijs()
{

	lr_think_time(34);

	lr_start_transaction("打开实验室接收页面");

	web_url("speReceiveMain.action", 
		"URL=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("打开实验室接收页面",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("扫描条码");

	web_submit_data("scanCheckSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/scanCheckSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value=201811125200", ENDITEM, 
		"Name=expressNum", "Value=", ENDITEM, 
		LAST);

	web_submit_data("speReceiveScan.action", 
		"Action=http://192.168.14.35/PG/spe/speReceiveScan.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value=201811125200", ENDITEM, 
		LAST);

	web_submit_data("speReceiveList.action", 
		"Action=http://192.168.14.35/PG/spe/speReceiveList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value=201811125200", ENDITEM, 
		"Name=userID", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		"Name=plansID", "Value=", ENDITEM, 
		"Name=expressNum", "Value=22233444", ENDITEM, 
		LAST);

	lr_end_transaction("扫描条码",LR_AUTO);

	lr_think_time(34);

	lr_start_transaction("接收");

	web_submit_data("speReceiveAcceptSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/speReceiveAcceptSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=IDs", "Value=ff80808166ce6340016706ff58900359", ENDITEM, 
		"Name=userID", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		"Name=password", "Value=daan123", ENDITEM, 
		LAST);

	web_submit_data("speReceiveArea.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speReceiveArea.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speReceiveMain.action", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userID", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		LAST);

	lr_end_transaction("接收",LR_AUTO);

	return 0;
}