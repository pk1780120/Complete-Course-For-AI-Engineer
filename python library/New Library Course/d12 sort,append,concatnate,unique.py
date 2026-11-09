import numpy as np 
    
      ###sort(np.sort)
# retrun a sorted copy in a array .
a=np.random.randint(1,100,15)
# # print(a)

b=np.random.randint(1,100,24).reshape(6,4)
# # print(b)
# t=np.sort(a) #assending order
# # print(t)
# p=np.sort(a)[::-1] #desending order
# # print(p)

# w=np.sort(b,axis=0)#sort  clmn wise
# # print(w)


 ###append(np.append)
# the numpy.append() appends the values along the mentioned axis at the end of the array.

l=np.append(a,200)
# print(l)

# in  2-d array add new clmn
# r=np.append(b,np.ones((b.shape[0],1)),axis=1)
# print(r)
# r=np.append(b,np.random.random((b.shape[0],1)),axis=1)
# print(r)


             ###concatenate(2-d array in table data)
# the function concatenate a sequence of arrays along an  existing axis.
# combine kar dena data ko (use tuple)
c=np.arange(6).reshape(2,3)
d=np.arange(6,12).reshape(2,3)
# r=np.concatenate((c,d),axis=0)#row wise concatenate
r=np.concatenate((c,d),axis=1)#clmn wise concatenate
# print(r)


     ###unique(np.unique)
# with the help of np.unique(),we can get  the unique values from an array given as parameter in np.unique() method.

# code
e=np.array([1,1,2,2,3,3,4,4,5,5,6,6])
f=np.array([[1,2,3,4],[1,2,3,2]])
p=np.unique(e)
# print(p)
u=np.unique(f)
# print(u)

       ###expand_dimensions(np.expand_dims)
# we can et the expanded dimensions of an array.
#create row and column this method
# print(np.expand_dims(a,axis=0))
# print(np.expand_dims(a,axis=1))

       ###where(np.where)
# in this functions returns the indices of elements in an input array where the  given condition is satisfied.
#find all indices with value greater than 50
# print(a)
# print(np.where(a>50))

# replace all values >50 with 0
# print(np.where(conditions,true,false))
# print(np.where(a>50,0,a))

#replace all values which is even number 
# print(np.where(a%2==0,0,a))


  ###argument max(np.argmax)
# the functions returns indices of the max elementsof the array in a particular axis

# print(np.argmax(a))
# print(np.argmin(a))

    ###cumsum(np.cumsum())
# the function when we want to compute the comulative sum of the array elements over agiven axis.
# print(np.cumsum(a)) #by default rows ,ya set axis=0
# print(np.cumsum(b,axis=1)) #clmn

    ###cumprod(np.cumprod):provide product given array
# print(np.cumprod(a)) #by default rows ,ya set axis=0
# print(np.cumprod(b,axis=1)) #clmn


    ### percentile(np.percentile)
# this function used to compute the nth percentile of the given data(array elements) along the specified axis. 

# print(np.percentile(a,100))#max
# print(np.percentile(a,0)) #min
# print(np.percentile(a,50))#median-aadhe aage and adhe piche
# # or
# print(np.median(a))

###histogram(np.histogram)
#its represent the frequency of data ditribution in the graphical form
# print(np.histogram(a,bins=[0,10,20,30,40,50,60,70,80,90,100])) 


###corelation coefficient(np.corrcoef)
# range-{-1,1}
# return person product-moment corelation coefficient.

salary=np.array([20000,40000,25000,35000,60000])
exprience=np.array([1,3,2,4,2])
# print(np.corrcoef(salary,exprience))


##isin(np.isin)
# with check multiple items  search
# one array having values are checked in a different numpy array having different elements with different sizes. 
# print(a)
items=[10,20,30,40,50,60,70,80,90,100]
t=a[np.isin(a,items)]
# print(t)


#  flip(np.flip()) :flip the item in 1-d,2-d:row,clmn
# axis=0 for row,axis=1 clmn change
# print(np.flip(a))
# print(np.flip(b))


### put(np.put):permanently change karta hai isliye ouput nhi dikhayega
# this function replaces specific elements of an array with given values of p_array. array indexed works on flattened array. 

# change 1st vlues =110,2nd values=530
# print(np.put(a,[0,1],[110,530]))
# print(a)

### delete(np.delete):by delte through index
# print(np.delete(a,[0,2,4]))



###set functions
#np. union1d
# np.intersec1d
#np. setdiff1d
#np. setxor1d
#np. in1d

m=np.array([1,2,3,4,5])
n=np.array([3,4,5,6,7])
# print(np.union1d(m,n))
# print(np.intersect1d(m,n))
# print(np.setdiff1d(m,n))
# print(np.setxor1d(m,n))
# print(np.in1d(m,1))#isme check karte hia ki given set me koi item jo paas kiya hu hai ki nhi


###clip(np.clip)
# it is used to clip(limit)the values in an array.
print(np.clip(a,a_min=25,a_max=75))

# 17. np.swapaxes

# 18. np.uniform
# 19. np.count_nonzero
# 21. np.tile
# https://www.kaggle.com/code/abhayparashar31/best-numpy-functions-for-data-science-50?scriptVersionId=98816580
# 22. np.repeat
# https://towardsdatascience.com/10-numpy-functions-you-should-know-1dc4863764c5
# 25. np.allclose and equals
