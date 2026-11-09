import numpy as np
import pandas as pd
import seaborn as sns
from sklearn.preprocessing import LabelEncoder, OrdinalEncoder, OneHotEncoder, TargetEncoder


dt = sns.load_dataset('titanic')
dt

dt.select_dtypes(include='object')

### encoder first type transform

D = {"Name":["Sonam","Komal","Piyush","Joy","Honey"],"City":["Bhopal","Delhi","Ujjain","Bilaspur","UK"],"Review":["Good","Poor","Avg","Good","Avg"]}
print(D)


ds = pd.DataFrame(D)
ds


Lb = LabelEncoder()
ds['Name'] = Lb.fit_transform(ds['Name'])
ds

ds['City'] = Lb.fit_transform(ds['City'])
ds


ds['Review'].unique()


Ord = OrdinalEncoder(categories=[['Poor','Avg','Good']])
ds['Review']=Ord.fit_transform(ds[['Review']])
ds

ds['Review']=Ord.fit_transform(ds[['Review']])
ds

K = {"Name":["sun","mon","tue"],"Review":["poor","avg","good"]}
K


dt1 = pd.DataFrame(K)
print(dt1)


od = OrdinalEncoder(categories =[['poor','avg','good']],dtype = int)


dt1['Review'] = od.fit_transform(dt1[['Review']])
dt1


D22 = {"Name":["sun","mon","tue"],"Review":["poor","avg","good"]}
D22

df = pd.DataFrame(D22)
df

m = {"poor":0,"avg":1,"good":2}
df['Review']=df['Review'].map(m)



from sklearn.preprocessing import OneHotEncoder

dt = {"Name":["Amir","Sumit","Jiya"],"Age":[21,20,19]}
dt

df = pd.DataFrame(dt)
df

oh = OneHotEncoder(drop="first",sparse_output=False,dtype=int)
dd = oh.fit_transform(df[['Name']])
k = np.hstack((dd,df[["Age"]]))
k
ddf=pd.DataFrame(k,columns=[['Name1','Name2','Age']])
print(ddf)

 