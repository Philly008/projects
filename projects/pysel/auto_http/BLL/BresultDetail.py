# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 17:04
# @Author   : Philly
# @Site     : 
# @File     : BresultDetail.py
# @Software : PyCharm Community Edition
from auto_http.DAL import DresultDetail

def resultInfo(mresultinfo, **kwargs):
    return DresultDetail.resultInfo(mresultinfo, **kwargs)