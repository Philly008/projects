/* -------------------------------------------------------------------------------
	Script Title       : 添加用户并修改密码为 1234qwer，具备上海、广州权限
	Script Description : 
                        修改参数 login_user ，填入要添加的用户，replay的runtime setting设置迭代次数为 用户个数
                        
	Recorder Version   : 2739
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("login.action", 
		"URL=http://202.116.104.161/NIP/login.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/new/bgd_login_2.jpg", ENDITEM, 
		"Url=images/new/bgd_login3_0.jpg", ENDITEM, 
		"Url=images/new/input.gif", ENDITEM, 
		"Url=images/new/btn_login.png", ENDITEM, 
		LAST);

	lr_start_transaction("登录系统");

	web_submit_form("login.action_2", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=userName", "Value=daan", ENDITEM, 
		"Name=password", "Value=123@abc", ENDITEM, 
		EXTRARES, 
		"Url=scripts/pdfobject.js?_=1541740105683", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541740105684", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/pdfobject.js?_=1541740105685", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541740105686", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery.blockUI.js?_=1541740105687", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/common.js?_=1541740105688", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/dhtmlx.js?_=1541740105689", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=images/new/main_top_bgd.jpg", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=images/new/main_top.jpg", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/iconUncheckAll.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line3.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line2.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus3.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus2.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/plus4.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/minus4.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/line1.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/imgs/csh_bluebooks/minus3.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		LAST);

	
	web_custom_request("searchdanger.action", 
		"URL=http://202.116.104.161/NIP/rpt/searchdanger.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("noticeNewSearch.action", 
		"URL=http://202.116.104.161/NIP/ref/noticeNewSearch.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("searchdelay.action", 
		"URL=http://202.116.104.161/NIP/rpt/searchdelay.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("rateMatured.action", 
		"URL=http://202.116.104.161/NIP/ref/rateMatured.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("登录系统",LR_AUTO);

	return 0;
}
