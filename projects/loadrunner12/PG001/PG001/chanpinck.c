chanpinck()
{

	lr_think_time(43);

	lr_start_transaction("打开产品出库页面");

	web_url("productsOutbound.action", 
		"URL=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/home.action", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("productsOutboundInfo.action", 
		"URL=http://192.168.14.35/PG/spe/productsOutboundInfo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_url("productsOutboundLeft.action", 
		"URL=http://192.168.14.35/PG/spe/productsOutboundLeft.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("productsOutboundPlansCombo.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("打开产品出库页面",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("出库申请");

	web_url("productsOutboundPlansCombo.action_2", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_data("productsOutboundSalesOrderChange.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSalesOrderChange.action?time=1542010466941", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	web_submit_data("productsOutboundPlansCombo.action_3", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	lr_think_time(37);

	web_submit_data("productsOutboundPlansComJson.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansId", "Value=ff8080815d7e6a77015da74e239e0059", ENDITEM, 
		"Name=orderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		"Name=type", "Value=edit", ENDITEM, 
		"Name=time", "Value=1542010505039", ENDITEM, 
		LAST);

	web_custom_request("productsOutboundStateCheck.action", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundStateCheck.action?id=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("productsOutboundApplyStore.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundApplyStore.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dto.id", "Value=", ENDITEM, 
		"Name=dto.barCode", "Value=201811125200", ENDITEM, 
		"Name=dto.salesOrderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		"Name=salesOrderId", "Value=", ENDITEM, 
		"Name=dto.salesOrderName", "Value=201811125300", ENDITEM, 
		"Name=dto.applicant", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		"Name=dto.applicantName", "Value=信息部专用", ENDITEM, 
		"Name=dto.signUserName", "Value=说到底", ENDITEM, 
		"Name=dto.customerId", "Value=4028908b4b1fa6eb014b29d6fb3900ae", ENDITEM, 
		"Name=dto.customerName", "Value=杭州蓝胜健康咨询有限公司", ENDITEM, 
		"Name=dto.agency", "Value=", ENDITEM, 
		"Name=dto.businessArea", "Value=", ENDITEM, 
		"Name=dto.whereaboutsAreaId", "Value=4028908b53a3282d0153ac85930f364f", ENDITEM, 
		"Name=dto.whereaboutsAreaName", "Value=亮剑", ENDITEM, 
		"Name=dto.warehouse", "Value=4028908b4b1fa6eb014b2a83437e00e2", ENDITEM, 
		"Name=dto.warehouseName", "Value=南仓", ENDITEM, 
		"Name=dto.signUserPhone", "Value=13556453456", ENDITEM, 
		"Name=dto.expressNum", "Value=22233444", ENDITEM, 
		"Name=dto.sendExpressCompany", "Value=尔尔v让他", ENDITEM, 
		"Name=dto.sendBackExpressNum", "Value=", ENDITEM, 
		"Name=dto.returnExpressCompany", "Value=", ENDITEM, 
		"Name=dto.productId", "Value=ff8080815d7e6a77015da74e239e0059", ENDITEM, 
		"Name=dto.productName", "Value=PZ", ENDITEM, 
		"Name=dto.seriesId", "Value=ff8080815d7e6a77015da74ea631005b", ENDITEM, 
		"Name=dto.seriesName", "Value=PAC系列", ENDITEM, 
		"Name=dto.materielCode", "Value=", ENDITEM, 
		"Name=dto.systemOrder", "Value=", ENDITEM, 
		"Name=dto.receiveAddress", "Value=ddddee是是是", ENDITEM, 
		LAST);

	lr_end_transaction("出库申请",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("查询条码");

	web_submit_data("productsOutboundList.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundList.action?row=12", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=applyTime_start", "Value=2018-11-12 00:00:00", ENDITEM, 
		"Name=applyTime_end", "Value=2018-11-12 23:59:59", ENDITEM, 
		"Name=searchDto.applicant", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		"Name=searchDto.salesOrderId", "Value=", ENDITEM, 
		"Name=searchDto.warehouse", "Value=", ENDITEM, 
		"Name=searchDto.status", "Value=", ENDITEM, 
		"Name=searchDto.productId", "Value=", ENDITEM, 
		"Name=searchDto.expressNum", "Value=", ENDITEM, 
		"Name=searchDto.barCode", "Value=201811125200", ENDITEM, 
		"Name=searchDto.customerId", "Value=", ENDITEM, 
		"Name=page.pageNo", "Value=1", ENDITEM, 
		LAST);

	web_url("productsOutboundPlansCombo.action_4", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("productsOutboundDataLoad.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundDataLoad.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=ff80808166ce6340016706ff58900358", ENDITEM, 
		LAST);

	web_url("productsOutboundPlansCombo.action_5", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("productsOutboundPlansComJson.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansId", "Value=ff8080815d7e6a77015da74e239e0059", ENDITEM, 
		"Name=orderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		"Name=type", "Value=load", ENDITEM, 
		"Name=time", "Value=1542010536373", ENDITEM, 
		LAST);

	web_submit_data("productsOutboundSalesOrderChange.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSalesOrderChange.action?time=1542010536442", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	web_submit_data("productsOutboundPlansCombo.action_6", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		LAST);

	lr_end_transaction("查询条码",LR_AUTO);

	lr_think_time(19);

	lr_start_transaction("确认出库");

	web_submit_data("productsOutboundSure.action", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSure.action?OutboundType=1&time=1542010556277", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=arrayIds", "Value=ff80808166ce6340016706ff58900358", ENDITEM, 
		LAST);

	web_submit_data("productsOutboundList.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundList.action?row=12", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=applyTime_start", "Value=2018-11-12 00:00:00", ENDITEM, 
		"Name=applyTime_end", "Value=2018-11-12 23:59:59", ENDITEM, 
		"Name=searchDto.applicant", "Value=4af4e88a53df21e50153e509d7c6117c", ENDITEM, 
		"Name=searchDto.salesOrderId", "Value=", ENDITEM, 
		"Name=searchDto.warehouse", "Value=", ENDITEM, 
		"Name=searchDto.status", "Value=", ENDITEM, 
		"Name=searchDto.productId", "Value=", ENDITEM, 
		"Name=searchDto.expressNum", "Value=", ENDITEM, 
		"Name=searchDto.barCode", "Value=201811125200", ENDITEM, 
		"Name=searchDto.customerId", "Value=", ENDITEM, 
		"Name=checkbutton", "Value=on", ENDITEM, 
		"Name=page.pageNo", "Value=1", ENDITEM, 
		LAST);

	web_url("productsOutboundPlansCombo.action_7", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("productsOutboundDataLoad.action_2", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundDataLoad.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=ff80808166ce6340016706ff58900358", ENDITEM, 
		LAST);

	web_url("productsOutboundPlansCombo.action_8", 
		"URL=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("productsOutboundPlansComJson.action_3", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansComJson.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plansId", "Value=ff8080815d7e6a77015da74e239e0059", ENDITEM, 
		"Name=orderId", "Value=ff80808166ce6340016706fd050d0354", ENDITEM, 
		"Name=type", "Value=load", ENDITEM, 
		"Name=time", "Value=1542010557483", ENDITEM, 
		LAST);

	web_submit_data("productsOutboundSalesOrderChange.action_3", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundSalesOrderChange.action?time=1542010557536", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=", ENDITEM, 
		LAST);

	web_submit_data("productsOutboundPlansCombo.action_9", 
		"Action=http://192.168.14.35/PG/spe/$%7Bctx%7D/spe/productsOutboundPlansCombo.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.14.35/PG/spe/productsOutbound.action", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=salesOrderId", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("确认出库",LR_AUTO);

	return 0;
}
