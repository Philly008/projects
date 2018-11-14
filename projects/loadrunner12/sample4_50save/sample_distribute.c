sample_distribute()
{

	lr_think_time(17);

	web_url("specimenDispatch.action", 
		"URL=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/home.action", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003&dispatcherId=&queryBeginDate=1541383283401&queryEndDate=1541383283401&time=1541383426334", ENDITEM, 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=1541383283401&queryEndDate=1541383296000&time=1541383437597", ENDITEM, 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=1541383283401&queryEndDate=1541383296000&time=1541383446806", ENDITEM, 
		"Url=getDispatchedSpecimenByUser.action?dispatcherId=4af4e88a47617eea0147625b464a05d6&time=1541383446830", ENDITEM, 
		"Url=getSpecimenDetailsBylabDept.action?labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=1541383306061&queryEndDate=1541383306061&time=1541383447349", ENDITEM, 
		LAST);

	web_url("specimenDispatchInfo.action", 
		"URL=http://202.116.104.161/NIP/dis/specimenDispatchInfo.action?time=1541383424140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("dispatchSpecimenQuery.action", 
		"Action=http://202.116.104.161/NIP/dis/dispatchSpecimenQuery.action", 
		"Method=POST", 
		"RecContentType=application/xml", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userId", "Value=", ENDITEM, 
		"Name=linId", "Value=", ENDITEM, 
		"Name=currPage", "Value=", ENDITEM, 
		"Name=comboCurrPage", "Value=1", ENDITEM, 
		"Name=comboPageSize", "Value=30", ENDITEM, 
		LAST);

	web_custom_request("dispatchSpecimenQueryCounttNumber.action", 
		"URL=http://202.116.104.161/NIP/dis/dispatchSpecimenQueryCounttNumber.action?queryType=1&userId=4af4e88a47617eea0147625b464a05d6&linId=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_think_time(4);

	web_custom_request("dispatchSpecimen.action",
		"URL=http://202.116.104.161/NIP/dis/dispatchSpecimen.action?barCode={bar_code}&queryType=1&userId=4af4e88a47617eea0147625b464a05d6&tuberackTypeId=4&forcedDispatch=undefined&time=",	// 去掉时间的限制
		"Method=POST",
		"Resource=1",
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action",
		"Snapshot=t30.inf",
		"EncType=",
		LAST);

	lr_think_time(8);

	web_custom_request("receiveSpecimen.action", 
		"URL=http://202.116.104.161/NIP/dis/receiveSpecimen.action?userId=4af4e88a47617eea0147625b464a05d6&pwd=123@abc&labDeptId=40281281401ec28f01401ec53f690003,16&dispatcherId=4af4e88a47617eea0147625b464a05d6&queryBeginDate=&queryEndDate=&time=",	// 去掉时间的限制 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://202.116.104.161/NIP/dis/specimenDispatch.action", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	return 0;
}
