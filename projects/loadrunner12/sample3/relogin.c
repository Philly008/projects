relogin()
{

	web_submit_data("login.action_3", 
		"Action=http://202.116.104.161/NIP/login.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/login.action", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=userName", "Value=sh", ENDITEM, 
		"Name=password", "Value=123@abc", ENDITEM, 
		EXTRARES, 
		"Url=scripts/pdfobject.js?_=1541383609637", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541383609638", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/pdfobject.js?_=1541383609639", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541383609640", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery.blockUI.js?_=1541383609641", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/common.js?_=1541383609642", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/dhtmlx.js?_=1541383609643", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		LAST);

	web_url("top.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/common/top.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("left.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/common/left.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("searchdanger.action_2", 
		"URL=http://202.116.104.161/NIP/rpt/searchdanger.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("searchdelay.action_2", 
		"URL=http://202.116.104.161/NIP/rpt/searchdelay.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("noticeNewSearch.action_2", 
		"URL=http://202.116.104.161/NIP/ref/noticeNewSearch.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("rateMatured.action_2", 
		"URL=http://202.116.104.161/NIP/ref/rateMatured.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	return 0;
}
