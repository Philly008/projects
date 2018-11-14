# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 16:58
# @Author   : Philly
# @Site     : 
# @File     : Mresult.py
# @Software : PyCharm Community Edition
from schematics.models import Model
from schematics.types import StringType, IntType

class result(Model):
    test_date = StringType()
    test_sum = IntType()
    test_failed = IntType()
    test_version = StringType()
    test_p1 = StringType()
    test_net = StringType()
    test_name = StringType()
    test_success = StringType()











