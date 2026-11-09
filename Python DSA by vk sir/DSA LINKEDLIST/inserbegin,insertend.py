class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class linkedlist:
    def __init__(self):
        self.head=None
    def insert_begin(self,data):
        newnode=node(data)
        if self.head is None:
            self.head=newnode
            return
        newnode.next=self.head
        self.head=newnode
    def traverse(self):
        if self.head is None:
            print("linkedlist is empty:")
            return
        cur=self.head 
        while cur:
            print(cur.data,end="->")
            cur=cur.next 
        print("None")
l1=linkedlist()
print(l1.insert_begin(200))
print(l1.insert_begin(400))
print(l1.insert_begin(20))
print(traverse.data)
