import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

! pip install matplotlib/seaborn
pip = Performance improvement package.
#To install matplotlib or any library
# 1) Open IDLE from taskbar 
# 2) Go to file menu ------> Select Open Option
# 3) Select the path of your (python folder) from the drop down list and copy it
#                     Now close the current window.
# 4) Now open command prompt by using cmd command from taskbar
# 5)Now type cd and get paste the path of the file by using 
#                         double inverted comma and press enter key
# 6)Now type : pip install matplotlib and then enter.


#There are threee types of analysis possible using graph:
# 1) Univariant Analysis
# 2) Bivariant Analysis
# 3) Multivariant Analysis




# 2D PLOT : It is used for Bivariant analysis and use in time-series analysis. 
#(It is also known as Line Plot)
price = [50000,57000,49000,47000,51000]
production_year = [2015,2016,2017,2018,2019]
plt.figure(figsize = [4,2]) #(Width, height)
plt.plot(production_year,price)
plt.xlabel("YEAR")
plt.ylabel("PRICE")
plt.title("YEAR VS PRICE")
plt.savefig("1st graph.jpg")
plt.show()


#Example-2:
crc = pd.read_csv("cricket.csv")
crc


plt.figure(figsize = [4,2])
plt.plot(crc["Year"],crc["Rohit"],color = "Black",label="Rohit")
plt.plot(crc["Year"],crc["Virat"],color = "Red",label="Virat")
plt.plot(crc["Year"],crc["Dhoni"],color = "Blue",label="Dhoni")
plt.legend()
plt.show()


plt.plot(crc["Year"],crc["Rohit"],color = "red",linestyle = "solid",linewidth = "2",marker ="D",markersize="10",label="Rohit")
plt.plot(crc["Year"],crc["Virat"],color = "#D9F10F",linestyle = "dashed",linewidth = "3",marker ="o",markersize="5",label="Virat")
plt.plot(crc["Year"],crc["Dhoni"],color = "green",linestyle = "dotted",linewidth = "4",marker ="+",markersize="10",label="Dhoni")
plt.title("Scoring Comparison")
plt.xlabel("Season")
plt.ylabel("Scoring")
plt.legend(loc="upper right")#default = best
plt.grid()
plt.show()


#Scatter plot : It is used for anonmous data. It is used to analyze relationship between 
                 # two columns , It is multivariant 
plt.figure(figsize=[3,2])
plt.scatter(dt['total_bill'],dt['tip'])


#Bar Chart : It is a bivariant 
Subject = ["C","Java","DS","Sql"]
Marks = [76, 89, 74,66]
c = ["red","green","blue","yellow"]
f = plt.bar(Subject,Marks,color=c,edgecolor="black",width=0.2,align="edge")
plt.bar_label(f)
plt.xlabel("Subject")
plt.ylabel("Marks")
plt.title("Subject vs Marks")
plt.show()