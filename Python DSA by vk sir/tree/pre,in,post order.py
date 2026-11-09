class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
def preorder(root):
    if root is None:
        return
    print(root.data,end=" ")
    preorder(root.left)
    preorder(root.right)
def inorder(root):
    if root is None:
        return
    inorder(root.left)
    print(root.data,end=" ")
    inorder(root.right)
def postorder(root):
    if root is None:
        return
    postorder(root.left)
    postorder(root.right)
    print(root.data,end=" ")

##creating a binary 
root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.right=Node(4)
root.left.right=Node(5)

print("preorder traversal:")
preorder(root)
print("\ninorder traversal:")
inorder(root)
print("\npostorder traversal:") 
postorder(root)
    