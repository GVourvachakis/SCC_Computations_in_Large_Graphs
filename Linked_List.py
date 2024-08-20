class Node:
    """
    A class to represent a single node in a linked list.

    Attributes:
    ----------
    data : int | None
        The value stored in the node.
    nextNode : Node | None
        The reference to the next node in the linked list.
    """
    def __init__(self, data = None, nextNode = None) -> None:
        """
        Initializes a new node with optional data and next node reference.
        """
        self.data: int | None = data
        self.nextNode: Node | None = nextNode

class BaseLinkedList:
    """
    Inludes attributes that are being used by both classes (LinkedList and DoubleLinkedList) 
    """
    def __init__(self) -> None:
        """Initializes an empty (double or regular) linked list."""
        self.head = None

    def __iter__(self):
        """Iterator for the linked list."""
        current = self.head
        while current:
            yield current.data
            current = current.nextNode

    def get_length(self) -> int:
        """Returns the length of the linked list."""
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.nextNode
        return count

    def check_index(self, idx: int) -> None:
        """
        Validates the given index for operations like insert and remove.

        Parameters:
        ----------
        idx : int
            The index to be validated.

        Raises:
        ------
        Exception
            If the index is out of the valid range.
        """
        if idx < 0 or idx >= self.get_length():
            raise Exception('Invalid index')

class LinkedList(BaseLinkedList):
    """
    A class to represent a singly linked list.

    Methods:
    -------
    insert_at_beginning(data):
        Inserts a new node with the given data at the beginning of the list.
    insert_at_end(data):
        Inserts a new node with the given data at the end of the list.
    insert_values(data_list):
        Inserts multiple values from a list into the linked list.
    get_length() -> int:
        Returns the length of the linked list.
    remove_at(index):
        Removes the node at the specified index.
    insert_at(index, data):
        Inserts a new node with the given data at the specified index.
    insert_after_value(data_after, data_to_insert):
        Inserts a new node with the given data after the first occurrence of another value.
    remove_by_value(data):
        Removes the first node that contains the specified data.
    print():
        Prints the linked list in a readable format.
    """

    def insert_at_beginning(self, data) -> None:
        """
        Inserts a new node with the given data at the beginning of the list.

        Parameters:
        ----------
        data : int
            The value to be stored in the node.
        """
        node = Node(data, self.head)
        self.head = node

    def insert_at_end(self, data) -> None:
        """
        Inserts a new node with the given data at the end of the list.

        Parameters:
        ----------
        data : int
            The value to be stored in the node.
        """
        if not self.head:  # Empty linked list
            self.head = Node(data)
            return

        currentNode = self.head
        while currentNode.nextNode:  # Traverse to find the tail node
            currentNode = currentNode.nextNode

        currentNode.nextNode = Node(data)

    def insert_values(self, data_list) -> None:
        """
        Inserts multiple values from a list into the linked list.

        Parameters:
        ----------
        data_list : list of int
            A list containing the values to be added to the linked list.
        """
        for data in data_list:
            self.insert_at_end(data)

    def remove_at(self, index) -> None:
        """
        Removes the node at the specified index.

        Parameters:
        ----------
        index : int
            The index of the node to be removed.
        """
        self.check_index(index)

        if index == 0:
            self.head = self.head.nextNode
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                itr.nextNode = itr.nextNode.nextNode
                break
            itr = itr.nextNode
            count += 1

    def insert_at(self, index, data) -> None:
        """
        Inserts a new node with the given data at the specified index.

        Parameters:
        ----------
        index : int
            The position where the new node should be inserted.
        data : int
            The value to be stored in the new node.
        """
        self.check_index(index)

        if index == 0:
            self.insert_at_beginning(data)
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                node = Node(data, itr.nextNode)
                itr.nextNode = node
                break
            itr = itr.nextNode
            count += 1

    def insert_after_value(self, data_after, data_to_insert) -> None:
        """
        Inserts a new node with the given data after the first occurrence of another value.

        Parameters:
        ----------
        data_after : int
            The value after which the new data should be inserted.
        data_to_insert : int
            The value to be stored in the new node.
        """
        itr = self.head
        while itr:
            if itr.data == data_after:
                node = Node(data_to_insert, itr.nextNode)
                itr.nextNode = node
                return
            itr = itr.nextNode
        raise ValueError(f"Value {data_after} not found in the list.")

    def remove_by_value(self, data) -> None:
        """
        Removes the first node that contains the specified data.

        Parameters:
        ----------
        data : int
            The value to be removed from the linked list.
        """
        if not self.head:
            return

        if self.head.data == data:
            self.head = self.head.nextNode
            return

        itr = self.head
        while itr.nextNode:
            if itr.nextNode.data == data:
                itr.nextNode = itr.nextNode.nextNode
                return
            itr = itr.nextNode
        raise ValueError(f"Value {data} not found in the list.")

    def print(self) -> None:
        """
        Prints the linked list in a readable format.
        """
        if not self.head:
            print("Linked list is empty")
            return

        itr = self.head
        llstr = ''
        while itr:
            llstr += str(itr.data) + ' --> '
            itr = itr.nextNode
        print(llstr[:-5])  # Remove the last arrow
            

class DoubleNode:
    """
    A class to represent a single node in a double linked list.

    Attributes:
    ----------
    data : int | None
        The value stored in the node.
    nextNode : DoubleNode | None
        The reference to the next node in the linked list.
    prevNode : DoubleNode | None
        The reference to the previous node in the linked list.
    """
    def __init__(self, data=None, nextNode=None, prevNode=None) -> None:
        """
        Initializes a new node with optional data, next node reference, and previous node reference.

        Parameters:
        ----------
        data : int | None, optional
            The value to be stored in the node (default is None).
        nextNode : DoubleNode | None, optional
            The reference to the next node (default is None).
        prevNode : DoubleNode | None, optional
            The reference to the previous node (default is None).
        """
        self.data: int | None = data
        self.nextNode: DoubleNode | None = nextNode
        self.prevNode: DoubleNode | None = prevNode


class DoubleLinkedList(BaseLinkedList):
    """
    A class to represent a doubly linked list, allowing bidirectional traversal.

    Methods: (get_length(), and __init__ and __iter__ attributes are being inherited by BaseLinkedList parent class)
    -------
    insert_at_beginning(data):
        Inserts a new node with the given data at the beginning of the list.
    insert_at_end(data):
        Inserts a new node with the given data at the end of the list.
    get_length() -> int:
        Returns the length of the linked list.
    remove_at(index):
        Removes the node at the specified index.
    insert_at(index, data):
        Inserts a new node with the given data at the specified index.
    print_forward():
        Prints the linked list in forward direction.
    print_backward():
        Prints the linked list in backward direction.
    """

    def insert_at_beginning(self, data) -> None:
        """
        Inserts a new node with the given data at the beginning of the list.

        Parameters:
        ----------
        data : int
            The value to be stored in the node.
        """
        node = DoubleNode(data, self.head)
        if self.head:
            self.head.prevNode = node
        self.head = node

    def insert_at_end(self, data) -> None:
        """
        Inserts a new node with the given data at the end of the list.

        Parameters:
        ----------
        data : int
            The value to be stored in the node.
        """
        if not self.head:  # Empty linked list
            self.head = DoubleNode(data)
            return

        currentNode = self.head
        while currentNode.nextNode:  # Traverse to find the tail node
            currentNode = currentNode.nextNode

        new_node = DoubleNode(data, None, currentNode)
        currentNode.nextNode = new_node

    def remove_at(self, index) -> None:
        """
        Removes the node at the specified index.

        Parameters:
        ----------
        index : int
            The index of the node to be removed.
        """
        self.check_index(index)

        # If removing the head node
        if index == 0:
            self.head = self.head.nextNode
            if self.head:  # If there is a new head, update its prevNode
                self.head.prevNode = None
            return

        count = 0
        itr = self.head
        while itr:
            if count == index:  # Find the node to remove
                if itr.prevNode:  # Update the previous node's next pointer
                    itr.prevNode.nextNode = itr.nextNode
                if itr.nextNode:  # Update the next node's prev pointer
                    itr.nextNode.prevNode = itr.prevNode
                break
            itr = itr.nextNode
            count += 1

    def insert_at(self, index, data) -> None:
        """
        Inserts a new node with the given data at the specified index.

        Parameters:
        ----------
        index : int
            The position where the new node should be inserted.
        data : int
            The value to be stored in the new node.
        """
        self.check_index(index)

        if index == 0:
            self.insert_at_beginning(data)
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                new_node = DoubleNode(data, itr.nextNode, itr)
                if itr.nextNode:
                    itr.nextNode.prevNode = new_node
                itr.nextNode = new_node
                break
            itr = itr.nextNode
            count += 1

    def print_forward(self) -> None:
        """
        Prints the doubly linked list in forward direction.
        """
        if not self.head:
            print("Double linked list is empty")
            return

        itr = self.head
        while itr.nextNode:
            itr = itr.nextNode

        dll_str = ''
        while itr:
            dll_str += str(itr.data) + ' <--> '
            itr = itr.prevNode

        print(dll_str[:-5]) # Remove the last arrow

    def print_backward(self) -> None:
        """
        Prints the doubly linked list in backward direction.
        """
        if not self.head:
            print("Double linked list is empty")
            return
        
        # Traverse to the tail node
        itr = self.head
        while itr.prevNode:  
            itr = itr.prevNode

        # Now itr is at the tail, print backward
        dll_str = ''
        while itr:
            dll_str += str(itr.data) + ' <--> '
            itr = itr.nextNode

        print(dll_str[:-5])  # Remove the last arrow

if __name__ == "__main__":
    # Example for LinkedList
    print("Single Linked List Example:")
    
    ll = LinkedList()
    ll.insert_at_beginning(5)
    ll.insert_at_beginning(10)
    ll.insert_at_end(15)
    ll.insert_values([20, 25, 30])
    
    print("Linked list after multiple insertions:", end = '\t')
    ll.print()

    ll.remove_at(2)  # Remove the third element (index 2)
    print("Linked list after removing element at index 2:", end = '\t')
    ll.print()

    ll.insert_at(2, 17)  # Insert 17 at index 2
    print("Linked list after inserting 17 at index 2:", end = '\t')
    ll.print()

    ll.insert_after_value(20, 22)  # Insert 22 after the first occurrence of 20
    print("Linked list after inserting 22 after value 20:", end = '\t')
    ll.print()

    ll.remove_by_value(22)  # Remove the node with value 22
    print("Linked list after removing the node with value 22:", end = '\t')
    ll.print()

    # Insert multiple values at once
    ll.insert_values([10, 15, 20, 25])
    print("After inserting [10, 15, 20, 25] at the end:", end = '\t')
    ll.print()

    
    #ll_test = LinkedList()
    #ll_test.insert_values(list(range(1,6)))
    #print(f'iterator constructor testing: on linked list: {list(range(1,6))}')
    #for value in ll_test:
    #    print(value)



    print("\nDouble Linked List Example:")

    # Example for DoubleLinkedList
    dll = DoubleLinkedList()
    for item in range(0,21,5):
        dll.insert_at_beginning(item)
    
    #dll.insert_at(1, 12)  # Insert 12 at index 2

    print("Double linked list printed forward:")
    dll.print_forward()

    print("Double linked list printed backward:")
    dll.print_backward()

    dll.remove_at(0)  # Remove the second element (index 1)
    print("Double linked list after removing element at index 1:")
    dll.print_forward()
    dll.print_backward()

    #dll_test = DoubleLinkedList()
    #for item in range(1,11):
    #    dll_test.insert_at_end(item)
    
    #print(f'iterator constructor testing: on linked list: {list(range(1,11))}')
    # for value in dll_test:
    #     print(value)
    