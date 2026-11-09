###tc=0(n^2)
# by default bubble sort,insertionsort,selectionsort
# def selectionsort(arr):
#     l=len(arr)
#     for i in range(l):
#         chhotu=i
#         for j in range(i+1,l):
#             if arr[j]<arr[chhotu]:   
#                 chhotu=j
#         arr[i],arr[chhotu]=arr[chhotu],arr[i]
#     return arr
# k=[5,8,3,6,9]
# print(selectionsort(k))


# def selection_sort(arr):
#     L=len(arr)
#     for i in range(L):
#         chhotu=i
#         for j in range(i+1,L):
#             if arr[j]<arr[chhotu]:
#                 chhotu=j
#         arr[i],arr[chhotu]=arr[chhotu],arr[i]
#     return arr
# k=[2,3,8,1,9]
# print(selection_sort(k))

# def insertion_sort(arr):
#     l=len(arr)
#     for i in range(1,l):
#         k=arr[i] 
#         j=i-1
#         while j>=0 and k<arr[j]:
#             arr[j+1]=arr[j]
#             j=j-1
#         arr[j+1]=k
#     return arr
# k=[8,4,2,1,3]
# print(insertion_sort(k))

def bubble_sort(arr):
    l=len(arr)
    swap_count=0
    for i in range(l):
        swapped=False
        for j in range(l-i-1):
            if arr[j]>arr[j+1]:
                swap_count+=1
                arr[j],arr[j+1]=arr[j+1],arr[j]
                swapped=True
        if swapped==False:
            break
    print("total no of swap:",swap_count)            
    return arr
k=[4,2,6,1,8]
print(bubble_sort(k))
