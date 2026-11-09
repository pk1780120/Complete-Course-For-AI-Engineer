# types of sorting(most imp at least)
# bubble sort
# selection sort
# insertion sort
# quick sort
# mergesort 

##print index(0-4) 
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(i)       
    
# k=[5,2,1,9,4]
# bubble(k)

##print all number (k)
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(n[i])         
# k=[5,2,1,9,4]
# bubble(k)

##print n values each iteration 5 times:
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(n)         
# k=[5,2,1,9,4]
# bubble(k)

##print k values each iteration 5 times:
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(k)         
# k=[5,2,1,9,4]
# bubble(k)


##print karega list ke total length ko 5-times(o/p-5,5,5,5,5)
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(l)       
    
# k=[5,2,1,9,4]
# bubble(k)


##length me 1 plus ho jayega(o/p-6times:6)
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(l+1)       
    
# k=[5,2,1,9,4]
# bubble(k)

##error dega object is not subscript
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(l[i])       
    
# k=[5,2,1,9,4]
# bubble(k)


# TypeError: can only concatenate list (not "int") to list
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(n+1)       
    
# k=[5,2,1,9,4]
# bubble(k)


# TypeError: can only concatenate list (not "int") to list
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(i+1)       
    
# k=[5,2,1,9,4]
# bubble(k+1)


# SyntaxError: cannot assign to expression

# def bubble(n):
#     l=len(n)
#     for i+2 in range(l):
#         print(i)         
# k=[5,2,1,9,4]
# bubble(k)



# TypeError: 'list' object cannot be interpreted as an integer
# def bubble(n):
#     l=len(n)
#     for i in range(n):
#         print(i)           
# k=[5,2,1,9,4]
# bubble(k)


##print st=1 and end last=5(indx=0-4 chalega)
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(i+1)           
# k=[5,2,1,9,4]
# bubble(k)


##print st=1 and end last=5(indx=0-4 chalega)
# def bubble(n):
#     l=len(n)
#     for i in range(l):
#         print(i+1)       
    
# k=[5,2,1,9,4]
# bubble(k) 



class solution:
    def bubble_sort(self,nums:List[int])->List[int]:
        l=len(nums)
        for i in range(l):
            swapped=False
            for j in range(l-i-1):
                if nums[j]>nums[j+1]:
                    nums[j],nums[j+1]=nums[j+1],nums[j]
                    swapped=True
            if swapped==False:
                    break
        return nums






