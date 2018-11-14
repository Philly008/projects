Action()
{

	web_add_cookie("CurrentUICulture=zh-CN; DOMAIN=192.168.14.38");

	web_url("Login", 
		"URL=http://192.168.14.38:88/User/Login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Content/login/img/pass.png", ENDITEM, 
		"Url=../Content/login/img/logo.png", ENDITEM, 
		"Url=../Content/login/img/user.png", ENDITEM, 
		"Url=../Content/login/img/login_banner.jpg", "Referer=http://192.168.14.38:88/Content/login/css/css.css", ENDITEM, 
		"Url=../Content/login/img/erweima1.jpg", ENDITEM, 
		"Url=../Content/login/img/erweima2.jpg", ENDITEM, 
		"Url=http://127.0.0.1:17681/?callback=jsonpcallback&json={%22function%22:%22%22}&_=1542180560535", ENDITEM, 
		"Url=http://127.0.0.1:17681/?callback=jsonpcallback&json={%22function%22:%22InitiateLock%22,%22sn%22:0}&_=1542180560536", ENDITEM, 
		"Url=http://127.0.0.1:17681/?callback=jsonpcallback&json={%22function%22:%22Lock32_Function%22,%22sn%22:0,%22rand%22:%22-766627003%22}&_=1542180560537", ENDITEM, 
		LAST);

	web_custom_request("getRandom", 
		"URL=http://192.168.14.38:88/User/getRandom", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.14.38:88/User/Login", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_start_transaction("µÇÂ¼");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=68", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("viewerUri=http%3A//183.63.91.140%3A3338; DOMAIN=192.168.14.38");

	web_add_cookie("ftpName=192.168.14.38; DOMAIN=192.168.14.38");

	web_add_cookie("ftpUserName=bldemo; DOMAIN=192.168.14.38");

	web_add_cookie("ftpPassWord=xmkdcJKImD4%3D; DOMAIN=192.168.14.38");

	web_add_cookie("Mactype=1; DOMAIN=192.168.14.38");

	web_add_cookie("FtpCatalog=%5C%5C202.116.104.141%5Cbldemo; DOMAIN=192.168.14.38");

	web_add_cookie("HostViewerUri=http%3A//192.168.14.38%3A8080; DOMAIN=192.168.14.38");

	web_add_cookie("UncToken=I5unPpg3hoULkQFuCcbinAN8A6Cu3sqHxD5cv+b3iO4I3n2mBREAHOP/ZI/T/HpngYJU/5WVAM7AeZ67s6AFXpB2UzLjovfD; DOMAIN=192.168.14.38");

	web_add_cookie("ASP.NET_SessionId=w3u3hpsczsmzewgnraznejzj; DOMAIN=192.168.14.38");	// °ÑrequestÖÐµÄcookie´æÈë¼´¿ÉµÇÂ¼¡£

	
	
	web_submit_data("Login_2", 
		"Action=http://192.168.14.38:88/User/Login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.38:88/User/Login", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=rand", "Value=-766627003", ENDITEM, 
		"Name=randlock32", "Value=undefined", ENDITEM, 
		"Name=LoginAccount", "Value=zbsqy", ENDITEM, 
		"Name=Password", "Value=admin", ENDITEM, 
		"Name=verifyCode", "Value=2312", ENDITEM, 
		EXTRARES, 
		"Url=../Content/themes/default/home/img/sqfloor3.png", "Referer=http://192.168.14.38:88/Content/themes/default/home/css/base.css", ENDITEM, 
		"Url=../Content/themes/default/home/img/grayPoint.png", "Referer=http://192.168.14.38:88/Content/themes/default/home/css/base.css", ENDITEM, 
		"Url=../Content/themes/default/home/img/sqfloor1.png", "Referer=http://192.168.14.38:88/Content/themes/default/home/css/base.css", ENDITEM, 
		"Url=../Content/themes/default/home/img/sqfloor2.png", "Referer=http://192.168.14.38:88/Content/themes/default/home/css/base.css", ENDITEM, 
		"Url=../Content/themes/default/home/img/u_bg.png", "Referer=http://192.168.14.38:88/Home/Index", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/metro/images/layout_arrows.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/metro/easyui.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/icons/sqy/cancel.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/icon.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/icons/sqy/save.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/icon.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/icons/sqy/search.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/icon.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/metro/images/pagination_icons.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/metro/easyui.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/metro/images/loading.gif", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/metro/easyui.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/metro/images/tabs_icons.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/metro/easyui.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/metro/images/panel_tools.png", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/metro/easyui.css", ENDITEM, 
		"Url=../Scripts/common/EasyUI/themes/metro/images/blank.gif", "Referer=http://192.168.14.38:88/Scripts/common/EasyUI/themes/metro/easyui.css", ENDITEM, 
		"Url=../Content/themes/default/home/img/bg.png", "Referer=http://192.168.14.38:88/Content/themes/default/home/css/face.css", ENDITEM, 
		LAST);

	web_custom_request("GetPartsCount", 
		"URL=http://192.168.14.38:88/Home/GetPartsCount", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.38:88/Home/Index", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("List", 
		"Action=http://192.168.14.38:88/Home/List?Fot=null", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.38:88/Home/Index", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=page", "Value=1", ENDITEM, 
		"Name=rows", "Value=6", ENDITEM, 
		LAST);

	web_submit_data("List_2", 
		"Action=http://192.168.14.38:88/Home/List?Fot=null", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.38:88/Home/Index", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=page", "Value=1", ENDITEM, 
		"Name=rows", "Value=6", ENDITEM, 
		LAST);

	lr_end_transaction("µÇÂ¼",LR_AUTO);

	return 0;
}