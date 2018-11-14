# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 14:33
# @Author   : Philly
# @Site     : 
# @File     : Bhttpbase.py
# @Software : PyCharm Community Edition
from auto_http.DAL import Dhttpbase


class ConfigHttp():

    def __init__(self, mhttpbase):
        self.mhttpbase = mhttpbase
        self.mh = Dhttpbase.ConfigHttp(self.mhttpbase)

    def get(self, url, params={}):
        return self.mh.get(url, params)

    def post(self, url, files=None, params=None):
        return self.mh.post(url, files, params)





