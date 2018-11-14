/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 2739
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("home.action", 
		"URL=http://192.168.14.35/PG/home.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login.action", 
		"URL=http://192.168.14.35/PG/login.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/pic_login_01.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/btn_login_go_over.jpg", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_login_pad_bg.jpg", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/btn_login_go.jpg", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/btn_login_go1.jpg", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_top_bg.gif", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_top_meue_left.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_top_meue_right.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_login.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_cent_02.jpg", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_top_bg1.jpg", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=images/pic_logo1.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=68", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("登录");

	web_submit_data("login.action_2", 
		"Action=http://192.168.14.35/PG/login.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/login.action", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userName", "Value=xxb", ENDITEM, 
		"Name=password", "Value=daan123", ENDITEM, 
		"Name=validateCode", "Value=请在此输入验证码", ENDITEM, 
		EXTRARES, 
		"Url=images/pic_top_menu_bg.png", "Referer=http://192.168.14.35/PG/css/topmenu.css", ENDITEM, 
		"Url=css/images/tabs_icons.png", "Referer=http://192.168.14.35/PG/css/easyUI.css", ENDITEM, 
		"Url=images/top_menu_over.png", "Referer=http://192.168.14.35/PG/css/topmenu.css", ENDITEM, 
		"Url=images/submenu_shadow.png", "Referer=http://192.168.14.35/PG/css/topmenu.css", ENDITEM, 
		LAST);

	lr_end_transaction("登录",LR_AUTO);

	return 0;
}
