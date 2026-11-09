import numpy as np
import pandas as pd
import seaborn as sns

import matplotlib.pyplot as plt

# D={"name":["A","B","C","D","E"],"age":[21,20,None,19,18]}
# print(D)
# df=pd.DataFrame(D)
# print(df)
# print(df['age'].fillna(value=df['age'].mean()))

# print(df['age'].fillna(value=df['age'].mode()[0]))
# print(df['age'].ffill())
# print(df['age'].bfill())

# print(df.drop(columns="age"))


D={"name":["A","B","C","D","E","f","g","h"],"age":[21,20,34,35,6,3,19,18]}
print(D)
df=pd.DataFrame(D)

print(df['age'].apply(lambda x:x-2))

def ctgry(n):
    if n>=18 and n<=20:
        return "junior"

    else:
        return "senior"

df['group']=df['age'].apply(ctgry)
print(df) 
df['age'].isin([23,20,79])
df[df['age'].isin([23,20,79])] 
print(df)

print(df[~df['age'].isin([23,14,78,25,21])])