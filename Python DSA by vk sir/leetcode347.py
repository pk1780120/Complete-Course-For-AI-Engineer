
# population=dict()
# population["bhopal"]=300000
# population["indore"]=600000
# population["Banarash"]=80000
# print(population)
# for key,value in population.items():
#     print(key,":",value)

# nums=[1,1,2,3,4,5,6,7,7,8]
# count=dict()
# for n in nums:
#     if not n in count:
#         count[n]=0
#         count[n]+=1
# print(count)

# from collections import defaultdict
# nums=[1,1,2,3,4,5,6,7,7,8]
# count=defaultdict(int)
# for n in nums:
#         count[n]+=1
# print(count)

from collections import Counter 
nums=[1,1,2,3,4,5,6,7,7,8]
count=Counter(nums)
print(count)


# leetcode 347 brute force solution
from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counts= Counter(nums)
        counts=sorted(counts.items(),key=lambda x:x[1],reverse=True)
        result=[]
        for val,freq in counts:
            if len(result)>=k:
                break
            result.append(val)
        return result

