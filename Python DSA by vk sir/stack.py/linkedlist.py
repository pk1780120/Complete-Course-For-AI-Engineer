# class node:
#     def __init__(self,data):
#         self.data=data 
#         self.next=None 
# class mystack: 
#     def __init__(self):
#         self.top=None 
#         self.length=0 
#     def push(self,data):
#         self.length+=1
#         newnode=node(data)
#         if self.top is None:
#             self.top=newnode
#             return 
#         else:
#             newnode.next=next.top
#             self.top=newnode 
#     def pop(self):
#         if self.top is None:
#             return "stack is empty"
#         x=self.top.data
#         self.length-=1
#         self.top=self.top.next 
#         return x
#     def size(self):
#         return self.length 
#     def top(self):
#         if self.top is None:
#             return "stack is empty"
#         else:
#             return self.top.data



class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class MyStack:
    def __init__(self):
        self.top = None
        self.length = 0

    # Add data
    def push(self, data):
        newnode = Node(data)

        newnode.next = self.top
        self.top = newnode

        self.length += 1

    # Remove top data
    def pop(self):
        if self.top is None:
            return "Stack is empty"

        x = self.top.data
        self.top = self.top.next
        self.length -= 1

        return x

    # Top data
    def peek(self):
        if self.top is None:
            return "Stack is empty"

        return self.top.data

    # Stack size
    def size(self):
        return self.length


# Create stack
s = MyStack()

# Add data
s.push(10)
s.push(20)
s.push(30)
s.push(40)

print("Top data:", s.peek())
print("Stack size:", s.size())

# Pop
print("Popped:", s.pop())
print("Popped:", s.pop())

print("Top data:", s.peek())
print("Stack size:", s.size())
    