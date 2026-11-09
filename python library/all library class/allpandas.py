import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

#DataFrame by List
# L =[10,20,30,44,57,90]
# dt = pd.DataFrame(L,columns=['Age'])
# print(dt)

# #DataFrame by Tuple
# T =(10,20,30,44,57,90)
# dt = pd.DataFrame(T,columns=['Age'])
# print(dt)


#DataFrame by Dictionary
# D = {"Name":["Anuj","Ravi","Som"],"Age":[20,19,21],"City":["Bhopal","Indore","Ujjain"]}
# dt = pd.DataFrame(D)
# print(dt)


# Data = pd.read_csv("car_type.csv")
# print(Data)
# dt =pd.DataFrame(Data)
# print(dt)
# print(dt.columns)
# print(dt.shape)
# print(dt.dtypes)
# print(dt.describe())
# print(dt.info())

#How to upload data from seaborn

data=sns.get_dataset_names
print(data)

dt = sns.load_dataset('tips')
# print(dt)

# Isnull and Isnull.sum
dt = sns.load_dataset('tips')
# print(dt.isnull()) #It returns true and false
# print(dt.isnull().sum()) #It returns scaler value(single value) for each column.


d = {"Name":["a","b","b",None,"d"],"Age":[21,None,None,20,19]}
df = pd.DataFrame(d)
# print(df)
# print(df.isnull())
# print(df.isnull().sum())
# print(df.duplicated())
# print(df.duplicated().sum())


# df = df.rename(columns={"Name":"Sname"})
# # print(df)
# df.rename(columns={"Age":"Ages"},inplace=True)#inplace = true for permanent change
# # print(df)
# df.rename(columns={"Sname":"Name"})
# print(df)
            
df["City"]=["bpl","jbl","indr","ujjn","delhi"]
# print(df)

tit = sns.load_dataset('titanic')
# print(tit.shape)
# print(tit.columns)
# print(tit['age'].min())
# print(tit['age'].max())
# print(tit['age'].unique())


# #Binning and feature extraction
# slab = [0,15,25,35,45,55,85] #Binning
# lb = ["Kids","Teenager","Young","Mid","Senior","Old"]
# tit['Age_group']=pd.cut(tit["age"],bins=slab,labels=lb)  #Feature extraction
# # print(tit.head())
# tit['age'].value_counts().plot(kind="pie")


d = {"Name":["Som","Piyush","Ravi","Mohit","Raj"],"Age":[20,19,20,18,17],
         "City":["Bhopal","Ujjain","Indore","Delhi","Jabalpur"]}
#Astype
# df = pd.DataFrame(d)
# print(df)
# print(df["Name"].dtype)
# print(df["Age"].dtype)
# df["Age"].astype(float) #Converts datatype(It is a function of DataFrame Pandas)
# df["Age"] =df["Age"].astype(float)#For permanent change
# print(df)





# #Function
# k = df["Age"].between(15,18)
# print(df[k])
# print(df["Age"][k])


#Drop Duplicates
d = {"Name":["Som","Piyush","Mohit","Piyush","Raj"],"Age":[20,19,18,19,17],
         "City":["Bhopal","Ujjain","Delhi","Ujjain","Jabalpur"]}
df1 = pd.DataFrame(d)
print(df1)
print(df1.duplicated())
# df1.drop_duplicates(keep=False)#All records will be deleted include unique
# df1.drop_duplicates(keep="First")#By Default holds first record
# df1.drop_duplicates(keep="Last")#Holds Last Records 


# #DropNa
# d = {"Name":["Som","Piyush","Mohit",None,"Raj"],"Age":[20,19,None,19,17],
#          "City":["Bhopal","Ujjain","Delhi","Ujjain",None]}
# df1=pd.DataFrame(d)
# print(df1)
# df1.dropna()



# #How attribute in Dropna
# d = {"Name":[None,"Piyush","Mohit",None,"Raj"],"Age":[None,19,None,19,17],
#          "City":[None,"Ujjain","Delhi","Ujjain",None]}
# df1=pd.DataFrame(d)
# print(df1)
# df1.dropna(how = "all")


# #Thresh attribute in Dropna
# d = {"Name":[None,"Piyush","Mohit",None,"Raj"],"Age":[None,19,None,19,17],
#          "City":["Bhopal","Ujjain","Delhi","Ujjain",None]}
# df1=pd.DataFrame(d)
# print(df1)
# df1.dropna(thresh = 2) #It compares non-zero value and delete
# df1.dropna(thresh = 3)


# #Fillna
# d = {"Name":[None,"Piyush","Mohit",None,"Raj"],"Age":[None,19,None,19,17],
#          "City":["Bhopal","Ujjain","Delhi","Ujjain",None]}
# df1=pd.DataFrame(d)
# print(df1)
# df1["Age"].fillna(value=29)#None replaced with constant value


# D = {"Name":["A","B","C","D","E"], "Age":[21,20,None,19,18]}
# print(D)


# df = pd.DataFrame(D)
# print(df)

# #Fillna with constant value
# df["Age"].fillna(value=20)


# #Fillna with mean()
# df["Age"].fillna(value=df["Age"].mean())


# #Fillna with mode()
# df["Age"].fillna(value=df["Age"].mode()[0]) #If all value uniques then it
#                                             #replace from the minimum value of the column 


# #Fillna by method = bfill
# df["Age"].fillna(method="bfill") #Fills same value below None


# #Fillna by method = ffill
# df["Age"].fillna(method="ffill") #Fills same value above None 

# #Drop Column
# df.drop(columns="Age")


# C = {"Name":["A","B","C","D","E","F","G","H"], "Age":[21,23,19,18,21,24,32,25]}
# print(C)


# df = pd.DataFrame(C)
# print(df)


# #Apply
# df['Age'].apply(lambda x:x-2)


# def ctgry(n):
#     if n>=18 and n<=20:
#         return "junior"
#     else:
#         return "senior"



# #Apply function
# df["Group"]=df["Age"].apply(ctgry)
# print(df)


# #IsIN Function
# df[df["Age"].isin([23,20,78])]


# #IsIN Function
# ~df["Age"].isin([23,20,78]) #For direct search 
# df[~df["Age"].isin([23,20,78])] #For value search



# df = pd.read_csv("myrgroup.csv")
# df

# #Grouping
# j =df.groupby(df['city'])


# for i,v in j:
#     print(i)
#     print(v) #Herei represents index and v represents value or data


# #For specific city or column
# j.get_group('bhopal')


# #Aggregate function
# j.max()
# j.sum()
# j.min()
# j.value_counts()


# #Aggregate function
# j.agg({
#     "temp":"sum",
#     "windspeed":"min"})



# #Concatenation (Column and column size of both array must not same ) It can vary but in same array it must same.
# df1 = pd.DataFrame({'A':[10,20],'B':[30,40]})
# df2 = pd.DataFrame({'A':[50,60],'B':[70,80]})
# d1 = pd.DataFrame([100,200,300,400])
# d2 = pd.DataFrame([500,600,700,800])
# d3 = pd.concat([d1,d2])#1D
# print(d3)
# df3 = pd.concat([df1,df2],ignore_index = True) #Row-wise
# print(df3)
# df4 = pd.concat([df1,df2],axis =1)
# print(df4)
# df5 = pd.concat([df1,df2],keys=(['school1','school2'])) #It works as group by make a specific column.
# print(df5)



# #For three rows (It do not do concatenation on any base)
# df1 = pd.DataFrame({'A':[10,20],'B':[30,40]})
# df2 = pd.DataFrame({'A':[50,60],'B':[70,80]})
# df2 = pd.DataFrame({'A':[90,100],'B':[110,120]})
# d = pd.concat([df1,df2,df3],keys=(['school1','school2','school3'])) #It works as group by make a specific column.
# print(d)


# #Merge : Primarily join on Column Basis (Bydefault works with inner join)
# #By default merge follows inner join
# dt1= pd.read_csv("STUDENT.csv")
# dt2 = pd.read_csv("COURSE.csv")
# print(dt1)
# print(dt2)
# dt1.merge(dt2)
# dt1.merge(dt2, how = "inner")
# dt1.merge(dt2,how = "left")
# dt1.merge(dt2,how = "right")
# dt1.merge(dt2,how = "cross")


# #Merge on different column names with left_on and right_on
# dg1 = pd.DataFrame({"Id":[1,2,3,4],"Score":[89,56,66,58]})
# dg2 = pd.DataFrame({"Aadhar":[1,2,30,40],"Score":[94,67,83,55]})
# pd.merge(dg1,dg2,left_on="Id",right_on="Aadhar", how = "inner")
# pd.merge(dg1,dg2,left_on="Id",right_on="Aadhar", how = "left")
# pd.merge(dg1,dg2,left_on="Id",right_on="Aadhar", how = "right")



# df1 = pd.DataFrame({"A":[1,2,3,4],"B":[5,6,7,8]})
# df2 = pd.DataFrame({"C":[10,20,30,40],"D":[50,60,70,80]})


# #Join with different name rows
# df1.join(df2)

# df1 = pd.DataFrame({"A":[1,2,3,4],"B":[5,6,7,8]})
# df2 = pd.DataFrame({"A":[10,20,30,40],"D":[50,60,70,80]})


# #Join with suffix (Joins must not have same column name so to differentiate the column 
#                    # name we use suffix
# df1.join(df2, lsuffix = "left", rsuffix = "right") #Suffix use to differentiate the column name


# #Joins perform joining based on index
# df1 = pd.DataFrame({"A":[1,2,3,4],"B":[5,6,7,8]})
# df2 = pd.DataFrame({"C":[10,20],"D":[50,60]})
# print(df2.join(df1))#By default it supports left join
# print(df2.join(df1, how = "right")) #Right join
# print(df2.join(df1, how = "left")) #Left join
# print(df2.join(df1, how = "inner")) #Inner join 
# print()
# print(df1.join(df2)) #If columns elements are not equal it fills NAN value


# #Index based Join with same index
# df1 = pd.DataFrame({"A":[1,2,3,4],"B":[5,6,7,8]},index =["a","b","c","d"])
# df2 = pd.DataFrame({"C":[10,20],"D":[50,60]},index = ["a","b"])
# df1
# df2
# df1.join(df2)


# df1 = pd.DataFrame({"A":[1,2,3,4],"B":[5,6,7,8]},index =["a","b","c","d"])
# df2 = pd.DataFrame({"C":[10,20],"D":[50,60]},index = ["c","d"])
# df1.join(df2)


# #Index based with different index
# df1 = pd.DataFrame({"A":[1,2,3,4],"B":[5,6,7,8]},index =["a","b","c","d"])
# df2 = pd.DataFrame({"C":[10,20],"D":[50,60]},index = ["c1","d1"])
# df1.join(df2)


# #Indexing
# A = [10,3,45,6,56,6,89]
# s = pd.Series(A)
# print(s)
# #s[-2] Negative index do not work in series. It only works in List, Tuple
# s[5]=70
# s[2:5]=100 #Normal indexing by slicing 
# print(s)
# s[[0,1,5]]=1000 #It is called fancy indexing[]. It is used for random data index
# print(s)
# print(s[0:7:2]) #Index based 
# B = s[s%2==0] #Value based
# print(B)


# A = [10,3,45,6,56,7,89]
# s = pd.Series(A)
# print(s)
# C = (s[s%2==0].sum())
# print(C)

# C = sum(s[s%2==0])


# #Null Variation
# A = [10,3,None,45,6,56,None,7,89]
# s = pd.Series(A)
# print(s)
# print(s.isnull()) #Returns true if found null else false
# print(s.hasnans)  #Returns single boolean value(either true or false)
# print(s.notnull()) #Opposite of isnull()
# print(s.isnull().sum()) #Returns total count


# #Unique and nunique
# A = [10,3,None,45,6,56,None,7,89,10,3]
# s = pd.Series(A)
# print(s.unique()) #Returns unique value
# print(s.nunique())#It do not count the Null values


# #Python Functionalities
# A = [10,3,45,6,56,7,89,10,3]
# s = pd.Series(A)
# print(s)
# print(len(s))
# print(type(s))
# print(max(s))
# print(min(s))
# print(sorted(s))
# print(sorted(s)[::-1])
# print(dir(s))


# #Type conversion
# A = [10,3,45,6,56,7,89,10,3]
# s = pd.Series(A)
# print(type(s))
# B = [2,3,4,6,7]
# print(type(B))
# C = (3,4,5,6,7)
# print(type(C))


# #Membership Operator
# J = [20,30,45,60,12]
# d = pd.Series(J)
# print(d)
# print(30 in d) #For index based
# print(30 in d.values) #For value based



# #Loc (Label-based indexing)
# df = pd.DataFrame({"Name":["Alice","Bob","Charlie"],
#                    "Age":[25,30,35],
#                    "City":["NY","LA","Chicago"]
#                   },index = ["a","b","c"])


# print(df)


# #loc (Label-based indexing)
# #Select using index labels and column names 
# df.loc["b"]
# df.loc["b":"c"]



# #Multiple indexing
# df.loc[["a","b"]]


# #Select rows and columns
# df.loc["a","Age"]


# #iloc (Integer position-based indexing)
# #Select using rows and column positions 
# df.iloc[0]


# #Selecting Rows and Columns 
# #Using loc:
# df.iloc[0:2,0:2]



# #Looping
# A = [10,3,2,4,56,7,8]
# s = pd.Series(A)
# print(s)
# for i in s:
#     print(i)
    
# for i in range(len(s)):
#     print("index=",i)

# for i in range(len(s)):
#     print("Values=",s[i])

# for i in range(len(s)):
#     print(i," ",s[i])


# #Task
# A = [10,3,2,4,56,7,8]
# s = pd.Series(A)
# print(s)
# for i in range(len(s)):
#     s[i]=s[i]+2
# print(s)


# #Arithmetic Operators
# A = [10,3,2,4,56,7,8]
# s1 = pd.Series(A)
# B = [2,4,7,6,8,6,5]
# s2 = pd.Series(B)
# print(s1+s2)#Broadcasting Arithmetic (Elementwise Addition)
# print(s1-s2)
# print(s1*s2)
# print(s1%s2)


# #Task
# A = [10,3,2,4,56,7,8]
# s1 = pd.Series(A)
# B = [2,4,7,6,8,6,5]
# s2 = pd.Series(B)
# C = [5]*7
# print(C)
# s3 = pd.Series(C)
# print(s2+s3)
# D = [5,2]*7
# print(D)
# E = [0]*4
# print(E)



# #Relational Operator
# A = [10,3,2,4,56,7,8]
# s1 = pd.Series(A)
# print(s1>5)
# print(s1[s1>5]) #For value by input mask
# print(s1[(s1>5) & (s1<40)])


# #Plotting
# A = [10,3,2,4,56,7,8]
# s1 = pd.Series(A)
# s1.plot(kind='pie')


# #Maths Function
# A=[10,30,24,50,60,7]
# s = pd.Series(A)
# print(s.count())
# print(s.sum())
# print(s.max())


# A = [10,30,24,50,60,7]
# s = pd.Series(A)
# # m = s.max()
# # j = (s[s<m])
# j = (s[s<s.max()])
# print(j)
# print(j.max())

# print((s[s<s.max()]).max())
# #built-in function
# print(s.nlargest(4).iloc[-1]) #When there is duplicate value
# print(s.drop_duplicates().nlargest(4).iloc[-1]) #It is used in duplicate situation


# A = [10,30,24,50,60,7]
# s = pd.Series(A)
# s.describe()  # It is called 5-values function(count,mean,std,max,min)