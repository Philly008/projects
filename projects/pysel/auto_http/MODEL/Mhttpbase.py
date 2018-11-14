# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 13:08
# @Author   : Philly
# @Site     : 
# @File     : Mhttpbase.py
# @Software : PyCharm Community Edition
from schematics.models import Model
from schematics.types import StringType, URLType

class BaseHttp(Model):
    '''配置要测试接口服务器的IP、端口、域名等信息'''
    host = StringType()
    port = StringType()
    No = StringType()
    header = StringType()