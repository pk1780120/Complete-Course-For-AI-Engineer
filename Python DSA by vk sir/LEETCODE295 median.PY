class MedianFinder:

    def __init__(self):
        self.stream=[]

    def addNum(self, num: int) -> None:
        self.stream.append(num)
        self.stream.sort()

    def findMedian(self) -> float:
        mid = len(self.stream)//2
        if len(self.stream)%2==0:
            return (self.stream[mid]+self.stream[mid-1])/2
        else:
            return self.stream[mid] 



#other method

# import heapq
# class MedianFinder:

#     def __init__(self):
#         self.small = []  
#         self.large = []   

#     def addNum(self, num):
#         heapq.heappush(self.small, -num)

#         if self.large and -self.small[0] > self.large[0]:
#             value = -heapq.heappop(self.small)
#             heapq.heappush(self.large, value)

#         if len(self.small) > len(self.large) + 1:
#             value = -heapq.heappop(self.small)
#             heapq.heappush(self.large, value)

#         elif len(self.large) > len(self.small):
#             value = heapq.heappop(self.large)
#             heapq.heappush(self.small, -value)

#     def findMedian(self):
#         if len(self.small) > len(self.large):
#             return -self.small[0]

#         return (-self.small[0] + self.large[0]) / 2



from heap import heapify,heappop,heappush
class MedianFinder:

    def __init__(self):
        self.left,self.right = [],[]

    def addNum(self, num: int) -> None:
        heappush(self.left,-num)
        heappush(self.right,-heappop(self.left))
        if len(self.right)>len(self.left):
            heappush(self.left,-heappop(self.right))

    def findMedian(self) -> float:
        if len(self.left)==len(self.right):
            return((-self.left[0])+self.right[0])/2
      

        return -self.left[0]