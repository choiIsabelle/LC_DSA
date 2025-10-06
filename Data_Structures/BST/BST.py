# Unbalanced BST Implementation
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.key = key

class BST:
    def __init__(self):
        self.root = None
    
    def insert(self, key) -> bool:
        new_node = Node(key)
        if self.root == None:
            self.root = new_node
            return True
        current = self.root
        while True: 
            if key < current.key:
                if current.left:
                    current = current.left
                else:
                    current.left = new_node
                    return True
            elif key > current.key:
                if current.right:
                    current = current.right
                else:
                    current.right = new_node
                    return True
            else:
                # In the case of a duplicate value, skip addition
                print(f"Cannot add duplicate value {key} to the tree.")
                return False
            