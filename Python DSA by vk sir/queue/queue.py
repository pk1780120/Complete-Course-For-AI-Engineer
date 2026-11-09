##array:two pointer=rear(back position)
# front(pahla element)
#it is a type of datastructure which is implement by array to stack,queue,lenkedlist
# it is used fifo data structure


class myqueue:
    def __init__(self):
        self.q=[]
        self.front=-1
    def push(self,x):
        if self.front==-1:
            self.front=0
        self.q.append(x)
    def top(self):
        if len(self.q)==0:
            return "queue is empty"
        return self.q[self.front]
    def size(self):
        if self.front==-1:
            return 0
        return len(self.q)
    def pop(self):
        if len(self.q)==0:
            return -1
        x=self.q[self.front]
        self.front+=1
        if self.front==len(self.q):
            self.front=-1
            self.q=[]
        return x
m=myqueue()
m.push(29)
m.push(18)
m.push(56)
m.top()
m.pop()
m.top() 
 

