# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 17:17
# @Author   : Philly
# @Site     : 
# @File     : MresultDetail.py
# @Software : PyCharm Community Edition
from schematics.models import Model
from schematics.types import StringType


class resultInfo(Model):
    t_id = StringType()
    t_name = StringType()
    t_url = StringType()
    t_param = StringType()
    t_actual = StringType()
    t_hope = StringType()
    t_result = StringType()
    t_method = StringType()







