# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 17:06
# @Author   : Philly
# @Site     : 
# @File     : DresultDetail.py
# @Software : PyCharm Community Edition
def resultInfo(mresultinfo, **kwargs):
    mresultinfo.t_id = kwargs["t_id"]
    mresultinfo.t_name = kwargs["t_name"]
    mresultinfo.t_url = kwargs["t_url"]
    mresultinfo.t_param = kwargs["t_param"]
    mresultinfo.t_actual = kwargs["t_actual"]
    mresultinfo.t_hope = kwargs["t_hope"]
    mresultinfo.t_result = kwargs["t_result"]
    mresultinfo.t_method = kwargs["t_method"]
    return mresultinfo