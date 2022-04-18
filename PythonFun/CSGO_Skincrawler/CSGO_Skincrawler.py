# -*- coding: utf-8 -*-
"""
Created on Sat Mar  7 16:48:15 2020

@author: sondr
"""
import requests
from bs4 import BeautifulSoup

f = open("Output.html", "a+")
ff = open("Log.txt", "a+")


    
ID = 7

URL = ("https://csgostash.com/skin/"+ str(ID) +"/")
page = requests.get(URL)
name = page.url.replace(URL,"")



soup = BeautifulSoup(page.text, "html.parser")
test1 = soup.find("table")


test2 = str(test1)
replacementHead = "<tr>\n<th>ID</th>\n<th>NAME</th>\n<th"
replacementData = "<tr>\n<td>" + str(ID) + "</td>\n<td>" + str(name) + "</td>\n<td"
test2 = test2.replace("<tr>\n<th", replacementHead)
test2 = test2.replace("<tr>\n<td", replacementData)
test2= test2.replace('<img alt="Steam icon" class="price-table-icon" src="https://csgostash.com/img/steam-icon.png"/>',"")
test2= test2.replace('<img alt="BitSkins icon" class="price-table-icon" src="https://csgostash.com/img/bitskins-icon.png"/>',"")

f.write(test2)

for ID in range(302,1270):
    print(ID)
    URL = ("https://csgostash.com/skin/"+ str(ID) +"/")
    page = requests.get(URL)
    name = page.url.replace(URL,"")
    
    
    
    soup = BeautifulSoup(page.text, "html.parser")
    test1 = soup.find("table")
    if test1 == None:
        print("ID:" + str(ID) +" does not have a table")
        ff.write("ID:" + str(ID) +" does not have a table\n")
        continue
    else:
        ff.write("ID:" + str(ID) +" succesfully extracted\n")
    
    
    test2 = str(test1)
    header = str(test1.find("thead"))
    test2 = test2.replace(header, "")
    
    replacementData = "<tr>\n<td>" + str(ID) + "</td>\n<td>" + str(name) + "</td>\n<td"
    test2 = test2.replace("<tr>\n<td", replacementData)
    test2= test2.replace('<img alt="Steam icon" class="price-table-icon" src="https://csgostash.com/img/steam-icon.png"/>',"")
    test2= test2.replace('<img alt="BitSkins icon" class="price-table-icon" src="https://csgostash.com/img/bitskins-icon.png"/>',"")
    try: 
        f.write(test2)
    except Exception as err:
        ff.write("ERROR; ID:" + str(ID) + str(err))

f.close
ff.close