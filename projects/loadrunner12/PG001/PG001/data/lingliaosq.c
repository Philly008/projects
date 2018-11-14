lingliaosq()
{

	lr_think_time(5);

	lr_start_transaction("打开领料申请页面");

	web_url("salesorder.action", 
		"URL=http://192.168.14.35/PG/spe/salesorder.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../scripts/datepicker/skin/WdatePicker.css", ENDITEM, 
		"Url=../images/div_bg.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=../images/busy.gif", ENDITEM, 
		"Url=../pages/test/images/loading.gif", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", ENDITEM, 
		"Url=../pages/test/images/clear-basic.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", ENDITEM, 
		"Url=../pages/test/images/select-basic.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", ENDITEM, 
		"Url=../pages/spe/salesorder/scripts/plansEdit.js?_=1542010310039", ENDITEM, 
		"Url=../pages/test/images/ico_01.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/style.css", ENDITEM, 
		"Url=../pages/test/images/select-hover.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", ENDITEM, 
		"Url=../pages/test/images/select-click.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", ENDITEM, 
		"Url=../pages/test/images/clear-hover.jpg", "Referer=http://192.168.14.35/PG/pages/test/css/text_grid.css", ENDITEM, 
		"Url=../images/dd.jpg", ENDITEM, 
		LAST);

	web_url("outBoundDetail.action", 
		"URL=http://192.168.14.35/PG/spe/outBoundDetail.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_url("salesorderList.action", 
		"URL=http://192.168.14.35/PG/spe/salesorderList.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../images/group_2.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=../images/group_1.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		LAST);

	web_url("salesorderInfo.action", 
		"URL=http://192.168.14.35/PG/spe/salesorderInfo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../images/group_5.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=../images/group_3.png", "Referer=http://192.168.14.35/PG/css/master.css", ENDITEM, 
		"Url=../scripts/datepicker/skin/datePicker.gif", "Referer=http://192.168.14.35/PG/scripts/datepicker/skin/WdatePicker.css", ENDITEM, 
		LAST);

	web_url("findSalesOrderByConditions.action", 
		"URL=http://192.168.14.35/PG/spe/findSalesOrderByConditions.action?applyTime_start=2018-11-12+00%3A00%3A00&applyTime_end=2018-11-12+23%3A59%3A59&searchdto.applyUserid=&searchdto.areaid=&detaildto.productId=&page.pageNo=1&searchdto.name=&searchdto.state=&row=13", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("打开领料申请页面",LR_AUTO);

	lr_think_time(15);

	lr_start_transaction("新增");

	web_custom_request("getApplyNumber.action", 
		"URL=http://192.168.14.35/PG/spe/getApplyNumber.action", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("PlansComJson.action", 
		"Action=http://192.168.14.35/PG/spe/PlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=productId", "Value=ff8080815d7e6a77015da74e239e0059", ENDITEM, 
		"Name=time", "Value=1542010352942", ENDITEM, 
		LAST);

	web_submit_data("saveSalesOrder.action", 
		"Action=http://192.168.14.35/PG/spe/saveSalesOrder.action?dto.id=&plansInfo=ff8080815d7e6a77015da74e239e0059:2&time=1542010356325", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dto.name", "Value=201811125300", ENDITEM, 
		"Name=dto.areaid", "Value=4028908b53a3282d0153ac85930f364f", ENDITEM, 
		"Name=dto.applyUserid", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		"Name=dto.estimateArrivalTime", "Value=", ENDITEM, 
		"Name=dto.customersOrderid", "Value=4028908b4b1fa6eb014b29d6fb3900ae", ENDITEM, 
		"Name=dto.agency", "Value=", ENDITEM, 
		"Name=dto.businessArea", "Value=", ENDITEM, 
		"Name=dto.productId", "Value=", ENDITEM, 
		"Name=dto.signUserName", "Value=说到底", ENDITEM, 
		"Name=dto.signUserPhone", "Value=13556453456", ENDITEM, 
		"Name=dto.receiveAddress", "Value=ddddee是是是", ENDITEM, 
		"Name=dto.applyNumber", "Value=201811120005", ENDITEM, 
		"Name=dto.remark", "Value=", ENDITEM, 
		LAST);

	web_url("findSalesOrderByConditions.action_2", 
		"URL=http://192.168.14.35/PG/spe/findSalesOrderByConditions.action?applyTime_start=2018-11-12+00%3A00%3A00&applyTime_end=2018-11-12+23%3A59%3A59&searchdto.applyUserid=&searchdto.areaid=&detaildto.productId=&status=310&status=310&status=320&page.pageNo=1&searchdto.name=&searchdto.state=&row=13", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("新增",LR_AUTO);

	lr_think_time(29);

	lr_start_transaction("财务审核");

	web_submit_data("findOrderStatusByIds.action", 
		"Action=http://192.168.14.35/PG/spe/findOrderStatusByIds.action?flag=audit&time=1542010385583", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=arrayIds", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	web_submit_data("FinancialAudit.action", 
		"Action=http://192.168.14.35/PG/spe/FinancialAudit.action?time=1542010387157", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=arrayIds", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	web_url("findSalesOrderByConditions.action_3", 
		"URL=http://192.168.14.35/PG/spe/findSalesOrderByConditions.action?applyTime_start=2018-11-12+00%3A00%3A00&applyTime_end=2018-11-12+23%3A59%3A59&searchdto.applyUserid=&searchdto.areaid=&detaildto.productId=&checkbutton=on&status=300&status=310&status=310&status=320&page.pageNo=1&searchdto.name=&searchdto.state=&row=13", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_data("findSetmealDetailbyId.action", 
		"Action=http://192.168.14.35/PG/spe/findSetmealDetailbyId.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=orderid", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	web_url("findOutBoundDetail.action", 
		"URL=http://192.168.14.35/PG/spe/findOutBoundDetail.action?page.pageNo=1&orderId=ff80808166ce6340016706fd050d0354&row=20", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("loadSalesOrderMessage.action", 
		"Action=http://192.168.14.35/PG/spe/loadSalesOrderMessage.action", 
		"Method=POST", 
		"RecContentType=text/json", 
		"Referer=http://192.168.14.35/PG/spe/salesorder.action", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	lr_end_transaction("财务审核",LR_AUTO);

	return 0;
}
