def insertion_sort(arr):
    l=len(arr)
    for i in range(1,l):
        k=arr[i]
        j=i-1
        while j>=0 and k<arr[j]:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=k    
    return arr
k=[4,8,9,2,1]
print(insertion_sort(k))






            
