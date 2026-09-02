##armstrong
# n=int(input("enter the number :")) 
# arm=0
# digit=0
# k=n
# while (n!=0):
#     digit+=1     
#     n=n//10
 
# m=k 
# while(k!=0):     
#     r=k%10     
#     arm=arm+r**digit    
#     k=k//10 
# if(arm==m):     
#     print("armstrong")
# else:    
#     print("not armstrong")

    #right angle triangle
# n = int(input("enter the number:"))

# for i in range(1, n+1): 
#     for j in range(1, i+1):
#         print("*", end=" ")
#     print()   

# sum 
x = int(input("Enter value of x: "))
n = int(input("Enter value of n: "))
sum = 0
for i in range(0, n+1):
    sum = sum + (x ** i)
print("Sum of series =", sum)