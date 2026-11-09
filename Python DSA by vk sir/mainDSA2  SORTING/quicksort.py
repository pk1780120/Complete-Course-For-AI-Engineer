# tc=o(n^2)-worstcase
# tc=o(nlogn)-avg,bestcase

def partition(arr,low,high):
    pivot=arr[low]
    i=low+1
    j=high-1
    while True:
        while i<=j and arr[i]<=pivot:
            i=i+1
        while i<=j and arr[j]>=pivot:
            j=j-1
        if i<j:
            arr[i],arr[j]=arr[j],arr[i]
            break
        arr[low],arr[j]=arr[j],arr[low]
        return j
def quicksort(arr,low,high):
    if low<high:
        pv=partition(arr,low,high)
        quicksort(arr,low,pv-1)
        quicksort(arr,pv+1,high)
arr=[2,1,4,3,5]
# arr=[9,6,5,4,3]
quicksort(arr,0,len(arr)-1)
print(arr)
