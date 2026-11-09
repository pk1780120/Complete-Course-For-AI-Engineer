import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np

import pandas as pd

sns.get_dataset_names()

dt = sns.load_dataset('tips')
dt


#By Matplotlib
#Scatter plot : It is used for anonmous data. It is used to analyze relationship between 
                 # two columns. It is multivariant
plt.figure(figsize=[3,2])
plt.scatter(dt['total_bill'],dt['tip'])

#By Seaborn
# Hue only contains categorical data ( Gender, Blood group, Review, Qualification)
sns.scatterplot(dt,x='total_bill',y='tip', hue='sex',style='smoker',size='size')