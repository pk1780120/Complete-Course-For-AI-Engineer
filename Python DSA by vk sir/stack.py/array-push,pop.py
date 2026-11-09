class Stack:
    def __init__(self):
        self.st = []

    def push(self, data):
        self.st.append(data)

    def pop(self):
        if len(self.st) == 0:
            return "Underflow"

        a = self.st[-1]
        self.st.pop()
        return a

    def top(self):
        if len(self.st) == 0:
            return "Empty"

        return self.st[-1]

    def size(self):
        return len(self.st)


m=Stack()


# First insert elements
# m.push(50)
# m.push(8)
# m.push(18)
# print("Stack:",m.st)
# print("Top:", m.top())
# print("Size:", m.size())


# remove the elements
# m.pop()
# print("Top:", m.top())