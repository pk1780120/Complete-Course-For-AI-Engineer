class node:
    def __init__(self,data):
        self.data=data
        self.nxt=None
n1=node(2)
# print(n1.data)
n2=node(5)
# print(n2.data)
n3=node(12)
# print(n3.data)

n1.next=n2
print(n1.data)
print(n1.next.data)
n2.next=n3 
print(n1.next.next.data)

