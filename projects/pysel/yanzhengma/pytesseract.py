# -*- coding: utf-8 -*-
# @Time     : 2018/10/29 13:55
# @Author   : Philly
# @Site     : 
# @File     : pytesseract.py
# @Software : PyCharm Community Edition
import pytesseract
from PIL import Image
image = Image.open('result.png')
code = pytesseract.image_to_string(image)
print(code)
