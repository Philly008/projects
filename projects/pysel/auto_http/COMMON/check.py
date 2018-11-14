# -*- coding: utf-8 -*-
# @Time     : 2018/11/13 16:08
# @Author   : Philly
# @Site     : 
# @File     : check.py
# @Software : PyCharm Community Edition
def compare(exJson, factJson, isList=0):
    isFlag = True
    if exJson.get("appStatus") == factJson.get("appStatus"):
        if isList == False: # 如果没有嵌套层
            return isFlag
        data2 = exJson.get("content")
        data3 = factJson.get("content")
        for item2 in data2:
            for item3 in data3:
                keys2 = item2.keys()
                keys3 = item3.keys()
                if keys2 == keys3:    # 如果嵌套层的key 完全相等
                    for key in keys2:
                        value2 = item2.get(key)
                        value3 = item3.get(key)
                        if type(value3) == type(value2):
                            pass
                        else:
                            isFlag = False
                            break
                else:
                    isFlag = False
                    break
    else:
        isFlag = False
    print(isFlag)
    return isFlag