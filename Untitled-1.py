class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    # Function to add a node at the beginning
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    # Function to add a node at the end
    def append(self, new_data):
        new_node = Node(new_data)
        if self.head is None:
            self.head = new_node
            return

        last = self.head
        while last.next:
            last = last.next

        last.next = new_node

    # Function to print the linked list
    def print_list(self):
        temp = self.head
        while temp:
            print(f"{temp.data} -> ", end="")
            temp = temp.next
        print("None")

# Driver code to test the above functions
if __name__ == "__main__":
    llist = LinkedList()

    # Add nodes to the linked list
    llist.append(6)
    llist.push(7)
    llist.push(1)
    llist.append(4)

    # Print the linked list
    llist.print_list()
