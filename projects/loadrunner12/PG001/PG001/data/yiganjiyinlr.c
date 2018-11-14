yiganjiyinlr()
{

	lr_think_time(26);

	lr_start_transaction("打开易感基因录入页面");

	web_url("speInputMain.action", 
		"URL=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../scripts/tree/jquery.ztree.core-3.5.js?_=1542010590915", ENDITEM, 
		"Url=../scripts/tree/jquery.ztree.excheck-3.5.js?_=1542010590916", ENDITEM, 
		"Url=../scripts/datepicker/lang/zh-cn.js", ENDITEM, 
		"Url=../scripts/datepicker/skin/default/datepicker.css", ENDITEM, 
		"Url=../scripts/datepicker/calendar.js", ENDITEM, 
		LAST);

	web_url("speInputList.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputList.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("speInputInfo.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputInfo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("打开易感基因录入页面",LR_AUTO);

	lr_think_time(67);

	lr_start_transaction("新增易感基因");

	web_submit_data("speSendoutCustomersCombo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speSendoutCustomersCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sourceOrg", "Value=local", ENDITEM, 
		LAST);

	web_custom_request("update2", 
		"URL=http://update.googleapis.com/service/update2?cup2key=8:3023100404&cup2hreq=5c1b182689fd948da09483c08fa45017bf2a165a6457e9317f4f3aa5ddfb1d05", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{3aa44128-7679-4d1a-88ad-7afb453b9dac}\" requestid=\"{902729f0-cfc8-41a1-afb4-a5faefba0d3c}\" updater=\"chrome\" updaterversion=\"68.0.3440.106\" prodversion=\"68.0.3440.106\" lang=\"zh-CN\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\""
		"10.0.17134.228\"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"408\" laststarted=\"408\" name=\"Omaha\" updatepolicy=\"-1\" version=\"1.3.33.17\"/><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"31.0.0.122\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{9e34c27f-c73c-4fb7-bf55-311d13461676}\"/><packages><package fp=\""
		"1.3a7ce0ba53183c7bf53a06df4d5c9158e8ee521d8d82d80fa5943eff2b160c05\"/></packages></app><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1146.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{62fc4a84-47c5-4483-948f-90f538f54208}\"/></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{133d59c5-b9cb-4ecf-88f8-ecfb2e1b6813}\"/><packages><package fp=\""
		"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.0\" brand=\"GGLS\" cohort=\"1:bm1:pxf@0.1\" cohortname=\"M54ToM70\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{1e82c944-2277-46b5-86dd-eac95e2399ba}\"/><packages><package fp=\"1.e75ebe461cdf7b3b2347c538adf621f7f6c3de6f4ab9dfa2b6b2a72774229852\"/></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4813\" brand="
		"\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{9b17889b-eab8-4a9f-92ac-6087fb4a31e3}\"/><packages><package fp=\"1.c77b10e749e9cee41b551a43673185db9880d959252c72b9f73ba51898d0f8e8\"/></packages></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"934\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{02f5334d-10dd-4ee6-b3c7-66ac27844058}\"/><packages><package "
		"fp=\"1.ed36b76c2421a3dce0cb6f4f47f5132aa0ab598f0a501e50ef96966563160de7\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{b75fbb5d-4f2c-4df9-9c0d-3eedb35a41f4}\"/></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"21\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{363768e6-ad67-4eac-81cf-4048f19b24b5"
		"}\"/><packages><package fp=\"1.d14e4e9ea653227bcd79027da2a426c9a1beb507bedd219593febac2b97799cb\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"4\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{9952e9cf-f998-4e7a-ad1f-4da5d3a2abe0}\"/><packages><package fp=\"1.3e0bc577e6a70f1ee3aea6e88b1d6e9390695692881a998f4c0e3c6d7cab7ad5\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version"
		"=\"1.0.3.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{1e552523-71bb-45d0-bd21-b4e2b283f077}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"35.179.201\" brand=\"GGLS\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{c370dcb6-1c39-4845-b355-0a35d438c698}\"/><packages><package fp=\"1.f0bfae041419e9b216fd8944b14eef5e87805bee40aec4d670c48a4ed54deb60\"/></packages></"
		"app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{5df14eaf-129a-4dfe-8202-5395a44a83a3}\"/></app></request>", 
		LAST);

	lr_think_time(20);

	web_submit_data("speInputLoadSpecimenInfo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputLoadSpecimenInfo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=barCode", "Value=201811125200", ENDITEM, 
		LAST);

	web_submit_data("getPlansInfo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getPlansInfo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", ENDITEM, 
		LAST);

	web_submit_data("getCityByProvince.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getCityByProvince.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=province", "Value=", ENDITEM, 
		LAST);

	web_submit_data("getTestItem.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", ENDITEM, 
		LAST);

	web_submit_data("plansdeatil.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/plansdeatil.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", ENDITEM, 
		LAST);

	web_submit_data("getCityByProvince.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getCityByProvince.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=province", "Value=", ENDITEM, 
		LAST);

	web_submit_data("getTestItem.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansid", "Value=ff8080815d7e6a77015da755cc5e0060", ENDITEM, 
		LAST);

	web_submit_data("getRegionByCity.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getRegionByCity.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=city", "Value=", ENDITEM, 
		"Name=province", "Value=", ENDITEM, 
		LAST);

	web_submit_data("getBarCodeState.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getBarCodeState.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=searchBarCode", "Value=201811125200", ENDITEM, 
		LAST);

	web_submit_data("getRegionByCity.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/getRegionByCity.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=city", "Value=", ENDITEM, 
		"Name=province", "Value=", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_submit_data("speInputSexLinkagePlans.action", 
		"Action=http://192.168.14.35/PG/spe/speInputSexLinkagePlans.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dto.barCode", "Value=201811125200", ENDITEM, 
		"Name=dto.sex", "Value=male", ENDITEM, 
		LAST);

	web_submit_data("getTestItem.action_3", 
		"Action=http://192.168.14.35/PG/spe/getTestItem.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansid", "Value=ff8080815f4c6938015f4d417db402ca", ENDITEM, 
		LAST);

	web_submit_data("plansdeatil.action_2", 
		"Action=http://192.168.14.35/PG/spe/plansdeatil.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansid", "Value=ff8080815f4c6938015f4d417db402ca", ENDITEM, 
		EXTRARES, 
		"Url=../scripts/datepicker/skin/default/img.gif", "Referer=http://192.168.14.35/PG/scripts/datepicker/skin/default/datepicker.css", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_submit_data("getCityByProvince.action_3", 
		"Action=http://192.168.14.35/PG/spe/getCityByProvince.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=province", "Value=黑龙江省", ENDITEM, 
		LAST);

	web_submit_data("getRegionByCity.action_3", 
		"Action=http://192.168.14.35/PG/spe/getRegionByCity.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=city", "Value=哈尔滨市", ENDITEM, 
		"Name=province", "Value=黑龙江省", ENDITEM, 
		LAST);

	lr_think_time(17);

	web_custom_request("checkTestItemSex.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/checkTestItemSex.action?ids=ff8080815d7e6a77015da76d0f690094,ff8080815d7e6a77015dac601524016e,ff8080815f48dc1e015f4c20dd73003d,ff8080815f48dc1e015f4c2df394005d,ff8080815f48dc1e015f4c319c640067,ff8080815f48dc1e015f4c38983c0079,ff8080815f4c6938015f4d2ead85027c&planId=ff8080815f4c6938015f4d417db402ca&patientSex=male", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("saveSpeInputSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/saveSpeInputSpecimen.action?ids=ff8080815d7e6a77015da76d0f690094,ff8080815d7e6a77015dac601524016e,ff8080815f48dc1e015f4c20dd73003d,ff8080815f48dc1e015f4c2df394005d,ff8080815f48dc1e015f4c319c640067,ff8080815f48dc1e015f4c38983c0079,ff8080815f4c6938015f4d2ead85027c&isDefault=y&customerName=%E6%9D%AD%E5%B7%9E%E8%93%9D%E8%83%9C%E5%81%A5%E5%BA%B7%E5%92%A8%E8%AF%A2%E6%9C%89%E9%99%90%E5%85%AC%E5%8F%B8", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dto.status", "Value=100", ENDITEM, 
		"Name=dto.taiKangId", "Value=", ENDITEM, 
		"Name=dto.id", "Value=ff80808166ce6340016706ff58900359", ENDITEM, 
		"Name=dto.barCode", "Value=201811125200", ENDITEM, 
		"Name=dto.expressNum", "Value=22233444", ENDITEM, 
		"Name=dto.patientName", "Value=0511", ENDITEM, 
		"Name=dto.province", "Value=黑龙江省", ENDITEM, 
		"Name=dto.sex", "Value=male", ENDITEM, 
		"Name=dto.city", "Value=哈尔滨市", ENDITEM, 
		"Name=dto.familyHistory", "Value=", ENDITEM, 
		"Name=dto.birthday", "Value=2013-11-05", ENDITEM, 
		"Name=dto.region", "Value=道里区", ENDITEM, 
		"Name=dto.customerAddress", "Value=", ENDITEM, 
		"Name=dto.age", "Value=", ENDITEM, 
		"Name=dto.reportAddress", "Value=黑龙江省哈尔滨市道里区", ENDITEM, 
		"Name=dto.receiveDate", "Value=2018-11-12 16:20:00", ENDITEM, 
		"Name=dto.mobileNumber", "Value=", ENDITEM, 
		"Name=dto.reportReceiveBy", "Value=www2", ENDITEM, 
		"Name=dto.mobilePhone", "Value=13554453456", ENDITEM, 
		"Name=dto.reportReceivePhone", "Value=13456787656", ENDITEM, 
		"Name=dto.remark", "Value=套餐共有：7个项目。\r\n具体项目为：PAC胃癌3、PAC前列腺癌2、PAC肝癌3、PAC结直肠癌4、PAC食管癌3、PAC胰腺癌3、PAC肺癌4\r\n", ENDITEM, 
		"Name=dto.plans", "Value=ff8080815f4c6938015f4d417db402ca", ENDITEM, 
		"Name=dto.sendBackDate", "Value=2018-10-29", ENDITEM, 
		"Name=dto.insuranceUser", "Value=", ENDITEM, 
		"Name=dto.customer", "Value=4028908b4b1fa6eb014b29d6fb3900ae", ENDITEM, 
		"Name=dto.idCardNum", "Value=", ENDITEM, 
		"Name=dto.agency", "Value=", ENDITEM, 
		"Name=dto.appendRemark", "Value=", ENDITEM, 
		"Name=dto.businessArea", "Value=", ENDITEM, 
		"Name=kscode", "Value=", ENDITEM, 
		"Name=dto.reportSource", "Value=pg", ENDITEM, 
		LAST);

	web_url("speInputPlansCombo.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("speSendoutCustomersCombo.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speSendoutCustomersCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sourceOrg", "Value=local", ENDITEM, 
		LAST);

	lr_end_transaction("新增易感基因",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("内勤接收");

	web_submit_data("speInputAuditSpecimen.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/speInputAuditSpecimen.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/speInputMain.action", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=currentID", "Value=ff80808166ce6340016706ff58900359", ENDITEM, 
		LAST);

	lr_end_transaction("内勤接收",LR_AUTO);

	return 0;
}
