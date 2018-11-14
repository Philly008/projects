Action()
{

	web_url("geturl.php", 
		"URL=http://config.pinyin.sogou.com/api/toolbox/geturl.php?h=897ED7C618515788E32C079E2F34029C&v=8.9.0.2223&r=0000_sogoupinyin_8.6.0.1634", 
		"Resource=1", 
		"RecContentType=application/x-troff-man", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	lr_think_time(59);

	lr_start_transaction("打开用户信息菜单");

	web_url("sky_blue_sel_tree.png", 
		"URL=http://202.116.104.161/NIP/scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_sel_tree.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("user.action", 
		"URL=http://202.116.104.161/NIP/ref/user.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhx_skyblue/bg_top.png", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhx_skyblue/dhx_skyblue_top.gif", ENDITEM, 
		"Url=../scripts/pdfobject.js?_=1541740235890", ENDITEM, 
		"Url=distributeCentreList.action", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sort_desc.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_grid.gif", ENDITEM, 
		"Url=../images/select-clear.jpg", ENDITEM, 
		"Url=../images/select-basic.jpg", ENDITEM, 
		"Url=../pages/test/images/select-basic.jpg", ENDITEM, 
		"Url=../pages/test/images/clear-basic.jpg", ENDITEM, 
		"Url=../pages/test/images/loading.gif", ENDITEM, 
		"Url=../pages/test/images/ico_01.jpg", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/iconUncheckAll.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/minus5.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/line2.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/plus3.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/line3.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/plus2.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/item_chk1.gif", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/sky_blue_sel.png", ENDITEM, 
		"Url=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/item_chk0.gif", ENDITEM, 
		"Url=../pages/test/images/select-hover.jpg", ENDITEM, 
		"Url=../pages/test/images/select-click.jpg", ENDITEM, 
		"Url=../images/busy.gif", ENDITEM, 
		"Url=../pages/test/images/clear-hover.jpg", ENDITEM, 
		LAST);

	web_url("userListInit.action", 
		"URL=http://202.116.104.161/NIP/ref/userListInit.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("userDetailInfo.action", 
		"URL=http://202.116.104.161/NIP/ref/userDetailInfo.action?id=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("userDetailList.action", 
		"Action=http://202.116.104.161/NIP/ref/userDetailList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=searchStr", "Value=", ENDITEM, 
		"Name=comboCurrPage", "Value=1", ENDITEM, 
		"Name=comboPageSize", "Value=30", ENDITEM, 
		LAST);

	web_submit_data("userDetailList.action_2", 
		"Action=http://202.116.104.161/NIP/ref/userDetailList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Id", "Value=1", ENDITEM, 
		"Name=searchStr", "Value=", ENDITEM, 
		"Name=comboCurrPage", "Value=1", ENDITEM, 
		"Name=comboPageSize", "Value=30", ENDITEM, 
		LAST);

	web_custom_request("selectUserDetail.action", 
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id=4028128140b83a100140b855edd90001&level=1&time=1541740239086", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("打开用户信息菜单",LR_AUTO);

	lr_start_transaction("新增用户");

	web_submit_data("userSave.action", 
		"Action=http://202.116.104.161/NIP/ref/userSave.action?userId=null&treeId=1&parentId=&organizationId=1&time=1541740293208", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userDto.id", "Value=", ENDITEM, 
		"Name=userDto.organization", "Value=1", ENDITEM, 
		"Name=userDto.organizationName", "Value=达安健康有限公司", ENDITEM, 
		"Name=userDto.active", "Value=1", ENDITEM, 
		"Name=userDto.lockFlag", "Value=0", ENDITEM, 
		"Name=userDto.fakeUser", "Value=0", ENDITEM, 
		"Name=userDto.salesUser", "Value=0", ENDITEM, 
		"Name=userDto.isSupperDoctor", "Value=0", ENDITEM, 
		"Name=userDto.userName", "Value={login_user}", ENDITEM, 
		"Name=userDto.name", "Value=n{login_user}", ENDITEM, 
		"Name=userDto.email", "Value=", ENDITEM, 
		"Name=userDto.physicsLab", "Value=", ENDITEM, 
		"Name=userDto.organization1", "Value=1", ENDITEM, 
		"Name=userDto.mobiel", "Value=", ENDITEM, 
		"Name=search_userName", "Value=", ENDITEM, 
		LAST);

	web_submit_data("userDetailList.action_3", 
		"Action=http://202.116.104.161/NIP/ref/userDetailList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Id", "Value=1", ENDITEM, 
		"Name=searchStr", "Value=", ENDITEM, 
		"Name=comboCurrPage", "Value=1", ENDITEM, 
		"Name=comboPageSize", "Value=30", ENDITEM, 
		LAST);

	web_submit_data("userDetailList.action_4", 
		"Action=http://202.116.104.161/NIP/ref/userDetailList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Id", "Value=1", ENDITEM, 
		"Name=searchStr", "Value=", ENDITEM, 
		"Name=comboCurrPage", "Value=2", ENDITEM, 
		"Name=comboPageSize", "Value=30", ENDITEM, 
		LAST);

	web_custom_request("selectUserDetail.action_2", 
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id=4af4e88a4627fe6a01462824f5c70552&level=1&time=1541740293799", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("新增用户",LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("查找用户");

/*Correlation comment - Do not change!  Original value='5be5167bb4907e1ab2b6bead' Name ='id' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=id",
		"RegExp=\\[\\{id:\"(.*?)\",userName:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("userDetailList.action_5", 
		"Action=http://202.116.104.161/NIP/ref/userDetailList.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/ref/user.action", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Id", "Value=1", ENDITEM, 
		"Name=searchStr", "Value={login_user}", ENDITEM, 
		"Name=comboCurrPage", "Value=1", ENDITEM, 
		"Name=comboPageSize", "Value=30", ENDITEM, 
		LAST);

	web_custom_request("selectUserDetail.action_3",
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id={id}&level=1&time=1541740322025",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/user.action",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"EncType=",
		EXTRARES,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhxwins_dhx_skyblue/inactive/header_bg.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhxwins_dhx_skyblue/inactive/progress.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhxwins_dhx_skyblue/active/progress.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhxwins_dhx_skyblue/buttons.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhxwins_dhx_skyblue/active/icon_normal.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/dhxwins_dhx_skyblue/active/header_bg.gif", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM,
		LAST);

	lr_end_transaction("查找用户",LR_AUTO);

	lr_start_transaction("职能分配");

	web_custom_request("selectUserDetail.action_4",
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id={id}&level=1&time=1541740346298",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/user.action",
		"Snapshot=t24.inf",
		"Mode=HTML",
		"EncType=",
		LAST);

	web_url("userDepartmentLoad.action",
		"URL=http://202.116.104.161/NIP/ref/userDepartmentLoad.action?userId={id}&userName={login_user}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/home.action",
		"Snapshot=t25.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=userLaboratoryList.action?id={id}", "Referer=http://202.116.104.161/NIP/ref/userDepartmentLoad.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/radio_chk0.gif", "Referer=http://202.116.104.161/NIP/ref/userDepartmentLoad.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/radio_chk1.gif", "Referer=http://202.116.104.161/NIP/ref/userDepartmentLoad.action?userId={id}&userName={login_user}", ENDITEM,
		LAST);

	lr_think_time(5);

	web_submit_data("updateUserDepartment.action",
		"Action=http://202.116.104.161/NIP/ref/updateUserDepartment.action",
		"Method=POST",
		"Referer=http://202.116.104.161/NIP/ref/userDepartmentLoad.action?userId={id}&userName={login_user}",
		"Snapshot=t26.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=labs", "Value=[{\"laboratory\":\"40281281401ec28f01401ec53f690003\",\"isDefault\":\"1\",\"distributeCentre\":\"40281281401ec28f01401ec4c4c60001\"},{\"laboratory\":\"4af4e889494653120149502ecab87add\",\"isDefault\":\"0\",\"distributeCentre\":\"4af4e889494653120149502a8d657563\"}]", ENDITEM,
		"Name=id", "Value={id}", ENDITEM,
		"Name=userName", "Value={login_user}", ENDITEM,
		LAST);

	lr_end_transaction("职能分配",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("用户角色");

	web_url("userRoleLoad.action",
		"URL=http://202.116.104.161/NIP/ref/userRoleLoad.action?userId={id}&userName={login_user}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/home.action",
		"Snapshot=t27.inf",
		"Mode=HTML",
		LAST);

	web_custom_request("selectUserDetail.action_5",
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id={id}&level=1&time=1541740396180",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/user.action",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"EncType=",
		EXTRARES,
		"URL=userRoleList.action?status=unselect&id={id}", "Referer=http://202.116.104.161/NIP/ref/userRoleLoad.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=../scripts/dhtmlxSuite/dhtmlx_std_full/imgs/icons_greenfolders/sort_desc.gif", "Referer=http://202.116.104.161/NIP/ref/userRoleLoad.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=userRoleList.action?status=select&id={id}", "Referer=http://202.116.104.161/NIP/ref/userRoleLoad.action?userId={id}&userName={login_user}", ENDITEM,
		LAST);

	lr_think_time(12);

	web_submit_data("updateUserRole.action",
		"Action=http://202.116.104.161/NIP/ref/updateUserRole.action",
		"Method=POST",
		"Referer=http://202.116.104.161/NIP/ref/userRoleLoad.action?userId={id}&userName={login_user}",
		"Snapshot=t29.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=saveids", "Value=[{\"roleId\":\"4028128140a40cba0140a4722f380003\",\"laboratoryList\":[\"40281281401ec28f01401ec53f690003\",\"4af4e889494653120149502ecab87add\"]}]", ENDITEM,
		"Name=id", "Value={id}", ENDITEM,
		"Name=userName", "Value={login_user}", ENDITEM,
		LAST);

	lr_end_transaction("用户角色",LR_AUTO);

	lr_think_time(11);

	lr_start_transaction("操作仪器");

	web_custom_request("selectUserDetail.action_6",
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id={id}&level=1&time=1541740420677",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/user.action",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"EncType=",
		LAST);

	web_url("userInstrumentLoad.action",
		"URL=http://202.116.104.161/NIP/ref/userInstrumentLoad.action?userId={id}&userName={login_user}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/home.action",
		"Snapshot=t31.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=userInstrumentList.action?status=select&id={id}", "Referer=http://202.116.104.161/NIP/ref/userInstrumentLoad.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=userInstrumentList.action?status=unselect&id={id}&laboratotyId=40281281401ec28f01401ec53f690003", "Referer=http://202.116.104.161/NIP/ref/userInstrumentLoad.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=userInstrumentList.action?status=unselect&id={id}&laboratotyId=4af4e889494653120149502ecab87add", "Referer=http://202.116.104.161/NIP/ref/userInstrumentLoad.action?userId={id}&userName={login_user}", ENDITEM,
		LAST);

	lr_think_time(5);

	web_submit_data("updateUserInstrument.action",
		"Action=http://202.116.104.161/NIP/ref/updateUserInstrument.action",
		"Method=POST",
		"Referer=http://202.116.104.161/NIP/ref/userInstrumentLoad.action?userId={id}&userName={login_user}",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=allRows", "Value=20214,20246,20251,20237,20117,20243,20135,20244,20250,20172,20179,20201,20217,20229,20231,20207,20242,20228,20230,20218,20187,20191,20197,20194,20208,20234,20235,20238,20189,20241,20185,20184,20144,20206,20146,20270,20249,20153,20155,20164,20188,20106,20212,20199,20259,20262,20263,20220,2093,20100,20252,20168,20169,20173,20125,20165,20213,20202,20150,20152,20268,20254,20255,20272,20266,20267,20175,20200,20170,20148,20248,20221,20257,20265,2091,20182,20109,2096,20143,20102,2094,20130,2081,20178,20107,20258,20256,20139,20253,20162,20123,20126,2080,20127,20219,20128,20129,20210,20156,20120,20198,20118,20193,20233,20236,20163,20192,20205,2098,20111,20240,20186,20190,20145,2097,20101,20115,20119,20239,20245,4af4e8bd45b1d2d30145b71974f90110,20122,20154,20121,20177,20180,20181,40288ea65e79b26f015e7f5590fe019d,4af4e88a4723b58a01472480102a45b8,4af4e889497a15a80149888b441d530a,4af4e88a495621ea01495abbef096e60,4af4e889498a475e01499e2a69ac3c7a,4af4e88a4abf7c7c014ace3f7dfd1554,4af4e88a4abf7c7c014ace401039155a,4af4e"
		"88a4abf7c7c014ace40a7191560,4af4e88a4abf7c7c014ace411a061566,4af4e88a4abf7c7c014ace419167156c,4af4e88a4abf7c7c014ace4202701572,4af4e8894b0138dd014b0172646c10e3,4af4e8894b147189014b14af97ce3d02,4af4e889498a47360149a29c78242889,4af4e8894b0138dd014b016f714c1096,4af4e8894d00596b014d0326df6d0505,4af4e88a470f20940147190d77be36ed,4af4e88a483a9c3e014845020a2f418c,4af4e88a470f2094014715762d7d3bde,4af4e88a466817d901466a0f691b276e,4af4e88a4757222f0147623a03f23b7b,4af4e88a498362e601499861bc8f2ba4,4af4e88a498362e6014998645ba42fc8,4af4e88a498362e6014998d0f75a71ce,4af4e88a498362e601499860b1592ac2,4af4e88949a734350149a7cfedc7507c,4af4e88a49e654b50149eb645c2a178c,4af4e88a49faa68b014a0488b3443ecd,4af4e88a4a7bb69b014a809341571184,4af4e88a4a7bb69b014a8093d21d11f1,4af4e88a4a7bb69b014a80945e311221,4af4e88a4a7bb69b014a8094e43912ad,4af4e88a4f10b211014f159d06e12bd6,4af4e88a4e570dd6014e62978031620c,4af4e88a4e570dd6014e6298886a63b5,4af4e88a4e570dd6014e62994f1564f2,4af4e8894e099ab8014e2ede0f567472,4af4e88a46001a190146045aad6014c1,4af4"
		"e88a47857cb7014785cdb4ed0d29,f2b7c0b7589649e70158995d32ed0e82,f2b7c0b758f7a55c0159017752430018,f2b7c0b75907310801592057818d0428,f2b7c0b759abe95b0159b5c24ff32006,f2b7c0b75a89542b015ad0d8d8d77792,f2b7c0b75a89542b015ad0da09b677a6,f2b79f855b2951ae015b4150f0611c61,f2b7c0b75b42bdc3015b467158ac7b95,f2b7c0b75b42bdc3015b4671e6367b98,f2b7c0b75b42bdc3015b4672ac167b9a,f2b79f855b42bfa1015b56abd6fd57be,f2b79f855b42bfa1015b56ad67ee57ce,4af4e88a51bdaac30151ce1e535c369a,4af4e8895229e6ce01522fc8fb004a03,4af4e8895398edeb01539d51f5aa3d0a,4af4e88a4f58dd4d014f5de49efc102a,4af4e88950ae26f70150b2376f894992,4028908a5125f98e01516075e5203dd5,4af4e88a5392600e015397fc3f654129,4af4e88a5398e7d20153cbd5aed807d3,4af4e8894fbbe8a8014fd4f78f6e4320,4af4e8895276f4c201527c67cc4f6e2a,4028908a53d6db3c0153eedd43ad3033,4af4e88a53df21e50153f45098981ce7,4af4e889503aa1a801505b0a270c2892,4af4e889503aa1a801505b0b8bec28d9,4af4e88a51d632a00151d7b98e591981,4af4e88a5229df970152535e3e2d4166,4af4e88a5398e7d20153c13ed2606a2c,4af4e88a53c8174f0153ea9ca10b497a,4af"
		"4e88a548d66d501549dd76fb6480d,4af4e88a4665c719014667956d4d7521,5b0cfd2bb4907e42709d8f09,5b0f7111b4907e4a5068c786,5b5824d1b4907e61182ac901,4af4e8895125f80601513792931a1c59,4af4e88951f5c4240151f6d95e0109db,4af4e88a4fbbe2ce014fc9917b695ba2,4028908a551580a80155260feb3f4e9f,4028908a5558b165015572d22259142c,4028908a5558b165015572d22fd6142e,4028908a5558b165015572d238331430,4028908a551580a8015525f63e5f4360,4028908a55de9e6b0155e8951d3c29f8,4028908a56a0d5a80156b16540ab7d71,f2b79f8556ff267a015709043aa71242,4028908a559687ea0155a0401e15210b,4028908a559687ea0155a06261042d56,4028908a55de9e42015601e59e1f00ef,f2b7c0b75730bc2601573cb8cded7844,f2b79f8557b85c100157c253ea961487,f2b7c0b758bdf4dd0158cd0a68c770e3,f2b7c0b757cf87860157e5d7cffb1f33,f2b7c0b758a640fa0158aa46a3e60bb2,f2b7c0b758a640fa0158aa4a34630cbe,f2b7c0b759abe94e0159c4c5f8540f15,5b31a137b4907e20a198e09a,5b31a79bb4907e20a198e199,5b72489fb4907e7ec3ab5f56,f2b79f855cf34c84015d11ad483c660e,f2b79f855cf34c84015d122cf6061361,f2b7c0b75d311c7b015d34a390544e7c,f2b79f855b9f6f140"
		"15ba38541f20e94,f2b7c0b75bec2e2f015bf0e66d142965,f2b79f855c291f3a015c3475214e49a9,f2b7c0b75c2919ce015c62bd8c1a48f9,f2b7c0b75c2919ce015c62c1285c4904,4af4e88a49b29f390149bc26d7cc24cc,4af4e88a49b29f390149bc22246e2428,4af4e88a49b29f390149bc3de35534a9,4af4e88a49b29f390149bc40b6c836c5,4af4e88a49b29f390149bc44e269388d,4af4e88a49b29f390149bc46d7823b26,4af4e88949b299300149c2139bfc77ab,4af4e88949b299300149c21427f07856,4af4e88949b299300149c215612c794e,4af4e88949b299300149c2163a367aad,4af4e88949b299300149c216d6387b65,4af4e88949b299300149c217a81e7c45,4af4e88a49cce9d70149d15f9c010062,4af4e88a49e654b50149ea0682b424aa,4af4e88949b299300149c214a9e278cb,4af4e88a4a8b0d11014a9e6be6770dd8,4af4e88a4e099c66014e242402306473,4af4e88a4e3881ce014e70c4c52624d8,2c908c4f49a328560149a3288d6b0003,2c908c4f49a328560149a3288da90004,2c908c4f49a328560149a3288ca00001,2c908c4f49a328560149a3288cee0002,2c908c4f49a328560149a3288de80005,2c908c4f49a328560149a3288eb20008,2c908c4f49a328560149a3288f000009,2c908c4f49a328560149a3288f5e000a,2c908c4f49a32856"
		"0149a3288f9c000b,2c908c4f49a328560149a3288fdb000c,2c908c4f49a328560149a3289077000d,2c908c4f49a328560149a32890e5000e,2c908c4f49a328560149a3289191000f,2c908c4f49a328560149a32891cf0010,2c908c4f49a328560149a328922d0011,2c908c4f49a328560149a328927b0012,2c908c4f49a328560149a32892e80013,2c908c4f49a328560149a32894010014,2c908c4f49a328560149a328943f0015,2c908c4f49a328560149a32894ac0016,2c908c4f49a328560149a32894fb0017,2c908c4f49a328560149a32895490018,2c908c4f49a328560149a32895c60019,2c908c4f49a328560149a3289633001a,2c908c4f49a328560149a32896b0001b,2c908c4f49a328560149a328970e001c,2c908c4f49a328560149a328975c001d,2c908c4f49a328560149a32897b9001e,2c908c4f49a328560149a3289807001f,2c908c4f49a328560149a3288e260006,2c908c4f49a328560149a3288e640007,2c908c4f49a328560149a32899020022,2c908c4f49a328560149a32899400023,2c908c4f49a328560149a328998e0024,2c908c4f49a328560149a32899cd0025,2c908c4f49a328560149a3289a1b0026,2c908c4f49a328560149a3289a690027,2c908c4f49a328560149a32898650020,2c908c4f49a328560149a32898b30021,2c908c4f49a3285"
		"60149a3289af50028,2c908c4f49a328560149a3289b330029,2c908c4f49a328560149a3289ba1002a,2c908c4f49a328560149a3289bef002b,2c908c4f49a328560149a3289c3d002c,2c908c4f49a328560149a3289c8b002d,2c908c4f49a328560149a3289cc9002e,2c908c4f49a328560149a3289d37002f,2c908c4f49a328560149a3289d850030,2c908c4f49a328560149a3289dd30031,4028908a4a8b1223014a9af40e152f5c,4028908a4a84361e014a84e752fa100c,4028908a4dac7199014dadfe308c7353,4af4e8894ea91afc014eae8970e52373,4af4e88a54a499340154a95ac8e44ce6,4af4e88a50ebd0060150f5bb14df3194,4af4e88a5398e7dc01539da626047750,4af4e88a4f34c2b8014f3ec8ca8736d3,4af4e88a5398e7dc01539da591f1774e,f2b79f8557b85c100157c259a2b31525,f2b79f855cee4572015cf182b6aa3cb5,f2b7c0b75b42bc3a015b89defe7b73a6,f2b7c0b75b42bc3a015b89e0333373c2,f2b7c0b75b42bc3a015b89e0ae1f73d3,f2b7c0b75bf6fbbb015c09d2239f6001,f2b79f855cbf5f49015ccec2bae66863", ENDITEM,
		"Name=id", "Value={id}", ENDITEM,
		"Name=userName", "Value={login_user}", ENDITEM,
		LAST);

	lr_end_transaction("操作仪器",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("病理医生");

	web_custom_request("selectUserDetail.action_7",
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id={id}&level=1&time=1541740453837",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/user.action",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"EncType=",
		LAST);

	web_url("userPathology.action",
		"URL=http://202.116.104.161/NIP/ref/userPathology.action?userId={id}&userName={login_user}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/home.action",
		"Snapshot=t34.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=userLaboratoryPathologyList.action?id={id}", "Referer=http://202.116.104.161/NIP/ref/userPathology.action?userId={id}&userName={login_user}", ENDITEM,
		LAST);

	lr_think_time(5);

	web_submit_data("updateUserPathology.action",
		"Action=http://202.116.104.161/NIP/ref/updateUserPathology.action",
		"Method=POST",
		"Referer=http://202.116.104.161/NIP/ref/userPathology.action?userId={id}&userName={login_user}",
		"Snapshot=t35.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=labs", "Value=[{\"laboratory\":\"40281281401ec28f01401ec53f690003\",\"isFirstvisit\":1,\"isReturnvisit\":1},{\"laboratory\":\"4af4e889494653120149502ecab87add\",\"isFirstvisit\":1,\"isReturnvisit\":1}]", ENDITEM,
		"Name=id", "Value={id}", ENDITEM,
		"Name=userName", "Value={login_user}", ENDITEM,
		LAST);

	lr_end_transaction("病理医生",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("操作病理类型");

	web_custom_request("selectUserDetail.action_8",
		"URL=http://202.116.104.161/NIP/ref/selectUserDetail.action?id={id}&level=1&time=1541740476092",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/user.action",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"EncType=",
		LAST);

	web_url("userPathologyTypePage.action",
		"URL=http://202.116.104.161/NIP/ref/userPathologyTypePage.action?userId={id}&userName={login_user}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/home.action",
		"Snapshot=t37.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=userPathologyTypeList.action?status=unselect&id={id}&laboratotyId=40281281401ec28f01401ec53f690003", "Referer=http://202.116.104.161/NIP/ref/userPathologyTypePage.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=userPathologyTypeList.action?status=select&id={id}", "Referer=http://202.116.104.161/NIP/ref/userPathologyTypePage.action?userId={id}&userName={login_user}", ENDITEM,
		"URL=userPathologyTypeList.action?status=unselect&id={id}&laboratotyId=4af4e889494653120149502ecab87add", "Referer=http://202.116.104.161/NIP/ref/userPathologyTypePage.action?userId={id}&userName={login_user}", ENDITEM,
		LAST);

	web_submit_data("updateUserPathologyType.action",
		"Action=http://202.116.104.161/NIP/ref/updateUserPathologyType.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/userPathologyTypePage.action?userId={id}&userName={login_user}",
		"Snapshot=t38.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=pathologyTypeIdList", "Value=2", ENDITEM,
		"Name=pathologyTypeIdList", "Value=1", ENDITEM,
		"Name=pathologyTypeIdList", "Value=3", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4", ENDITEM,
		"Name=pathologyTypeIdList", "Value=5", ENDITEM,
		"Name=pathologyTypeIdList", "Value=7", ENDITEM,
		"Name=pathologyTypeIdList", "Value=9", ENDITEM,
		"Name=pathologyTypeIdList", "Value=20105", ENDITEM,
		"Name=pathologyTypeIdList", "Value=8", ENDITEM,
		"Name=pathologyTypeIdList", "Value=20102", ENDITEM,
		"Name=pathologyTypeIdList", "Value=20103", ENDITEM,
		"Name=pathologyTypeIdList", "Value=20104", ENDITEM,
		"Name=pathologyTypeIdList", "Value=20106", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b758375bc50158661f5d3f7649", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b758375bc50158662a0d737956", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b75af06ce2015b0ef194032363", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b75af06ce2015b0f0584812b8f", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b75af06cc0015b2205749861ac", ENDITEM,
		"Name=pathologyTypeIdList", "Value=5b10a3e9b4907e48f15b76ad", ENDITEM,
		"Name=pathologyTypeIdList", "Value=5b10a43db4907e48f15b76b1", ENDITEM,
		"Name=pathologyTypeIdList", "Value=5b22257db4907e109dfb1550", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4028908b49a737870149ad1af4477c3f", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4028908b49a737870149acfc92046e79", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4028908b49a737870149ad1a61cb7c14", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4af4e88a498362e60149a27b8a321fff", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4af4e88a498362e60149a27c591b2060", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4af4e88a498362e60149a27fdc1822c5", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4af4e88a498362e60149a278c8241ede", ENDITEM,
		"Name=pathologyTypeIdList", "Value=4028908b49a737870149aceddf816d14", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b75af06ce2015b0f164f9358cb", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b75af06ce2015b0f170d175bf3", ENDITEM,
		"Name=pathologyTypeIdList", "Value=f2b7c0b75af06ce2015b0f17e9db5fb4", ENDITEM,
		"Name=userId", "Value={id}", ENDITEM,
		LAST);

	lr_end_transaction("操作病理类型",LR_AUTO);

	lr_think_time(23);

	lr_start_transaction("重置密码");

	web_url("toModifyPwd.action",
		"URL=http://202.116.104.161/NIP/ref/toModifyPwd.action?time=1541740506311&userId={id}&modifyflog=1",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/home.action",
		"Snapshot=t39.inf",
		"Mode=HTML",
		LAST);

	lr_think_time(58);

	web_custom_request("resetUserPassword.action",
		"URL=http://202.116.104.161/NIP/ref/resetUserPassword.action?&pwd1=1234qwer&time=1541740565141&userId={id}&modifyType=1",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://202.116.104.161/NIP/ref/toModifyPwd.action?time=1541740506311&userId={id}&modifyflog=1",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"EncType=",
		LAST);

	lr_end_transaction("重置密码",LR_AUTO);

	lr_start_transaction("退出登录");

	web_url("logout.action", 
		"URL=http://202.116.104.161/NIP/logout.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("退出登录",LR_AUTO);

	lr_start_transaction("用新账号登录");

	web_submit_form("login.action_3", 
		"Snapshot=t42.inf", 
		ITEMDATA, 
		"Name=userName", "Value={login_user}", ENDITEM, 
		"Name=password", "Value=1234qwer", ENDITEM, 
		EXTRARES, 
		"Url=scripts/pdfobject.js?_=1541740614657", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541740614658", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/pdfobject.js?_=1541740614659", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery-1.8.2.min.js?_=1541740614660", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/jquery.blockUI.js?_=1541740614661", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/common.js?_=1541740614662", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		"Url=scripts/dhtmlxSuite/dhtmlx_std_full/dhtmlx.js?_=1541740614663", "Referer=http://202.116.104.161/NIP/home.action", ENDITEM, 
		LAST);

	web_url("top.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/common/top.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("left.jsp_2", 
		"URL=http://202.116.104.161/NIP/pages/common/left.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("searchdanger.action_2", 
		"URL=http://202.116.104.161/NIP/rpt/searchdanger.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("searchdelay.action_2", 
		"URL=http://202.116.104.161/NIP/rpt/searchdelay.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("noticeNewSearch.action_2", 
		"URL=http://202.116.104.161/NIP/ref/noticeNewSearch.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/pages/welcome.jsp", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("rateMatured.action_2", 
		"URL=http://202.116.104.161/NIP/ref/rateMatured.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("用新账号登录",LR_AUTO);

	return 0;
}