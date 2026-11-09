### recursiveBubbleSort

# Time Complexity: O(n^2)
# Space Complexity: O(n)
# def recursive_bubblesort(arr,n):
#     # Base case: if the array size is 1 or 0, it's already sorted
#     if n<=1:
#         return
#     # Single pass: bubble the largest element to the end of the current range
#     for j in range(n-1):
#         if arr[j]>arr[j+1]:
#             arr[j],arr[j+1]=arr[j+1],arr[j]     
#     # Tail-recursive call for the remaining n-1 elements
#     recursive_bubble_sort(arr,n-1)
# k=[5,2,1,9,4]
# recursive_bubblesort(k,len(k))
# print(k)

###iterative method not optmized code
#tc=n(n-1)/2=10(n=5)
#tc=0(n^2)-best and worst case
# sc=0(1)-no extra variable/list create (memory remain constant)
# def bubblesort(n):
#     l = len(n)
#     for i in range(l):
#         for j in range(l-i-1):   
#             if n[j]>n[j+1]:
#                 # Swapping elements
#                 n[j],n[j+1]=n[j+1],n[j]
#     return n
# k=[5,2,1,9,4]
# print(bubblesort(k))

##optimizing code bubble sort
# tc=bc:0(n)
# tc=worst,avg case:0(n^2)
#method-1 fro optimized
# def bubble(arr):
#     l=len(arr)
#     count=0
#     for i in range(l):
#         t=False
#         for j in range(l-i-1):
#             if arr[j]>arr[j+1]:
#                 count+=1
#                 arr[j],arr[j+1]=arr[j+1],arr[j]
#                 t=True
#         if t==False:
#             break
#     print("no of swap:",count)
#     return arr
# k=[5,2,1,9,4]
# # k=[6,4,5,3,1]
# # k=[5,4,3,2,1]#desending
# # k=[1,2,3,4,5]#assending
# print("sorting:",bubble(k))

##method-2 optimized
# def bubble_sort(arr):
#     l=len(arr)
#     swap_count=0
#     for i in range(l):
#         swapped=False
#         for j in range(l-i-1):
#             if arr[j]>arr[j+1]:
#                 swap_count+=1
#                 arr[j],arr[j+1]=arr[j+1],arr[j]
#                 swapped=True
#         if swapped==False:
#             break
#     print("total no of:",swap_count)
#     return arr
# k=[4,6,8,1,2]
# print("sorted element:",bubble_sort(k))


# def bubble_sort(arr):
#     l =len(arr)
#     swap_count=0
#     limit=l-1   
#     for i in range(l):
#         swapped = False
#         last_swap=0   
#         for j in range(limit):
#             if arr[j]>arr[j+1]:  
#                 swap_count+=1
#                 arr[j],arr[j+1] =arr[j+1],arr[j]
#                 swapped =True
#                 last_swap=j  # Ye update hona bohot zaroori hai!             
#         if not swapped:
#             break      
#         limit = last_swap      
#     print("total swap:",swap_count)
#     return arr
# k = [4,6,8,1,2]
# print("sorted element:",bubble_sort(k))







 

