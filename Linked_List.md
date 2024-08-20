
### How to Use This Markdown

It serves as a comprehensive guide for anyone looking to understand or extend the code.

- **Documentation**: It serves as detailed documentation for the provided Python script, helping developers understand the code and how to use it effectively.
- **Introduction**: Provides a clear introduction to the concepts of single and double linked lists.
- **Examples**: Demonstrates practical use cases with code snippets.


# Linked List Implementation in Python

## Introduction

Linked lists are fundamental data structures that represent a sequence of elements. Unlike arrays, linked lists do not store elements in contiguous memory locations. Instead, each element, or "node," points to the next node in the sequence. This characteristic allows for efficient insertion and deletion operations but may lead to slower access times compared to arrays due to the need for traversal.

### Single Linked List

A **single linked list** is a linear data structure where each node contains a `data` element and a reference (`nextNode`) to the next node in the sequence. The first node is referred to as the "head," and the last node points to `None`, signifying the end of the list.

### Double Linked List

A **double linked list** extends the functionality of a single linked list by providing an additional reference (`prevNode`) in each node to the previous node. This bidirectional linkage allows traversal of the list in both forward and backward directions, enhancing flexibility in various operations.

## Python Implementation

The Python script provided includes classes for both single and double linked lists, each with a range of methods for inserting, removing, and printing elements. The code is designed to be both efficient and easy to understand, with careful attention to type annotations and error handling.

### `Node` Class

The `Node` class serves as the fundamental building block for the `LinkedList` class. It contains the following attributes:

- `data`: The value stored in the node.
- `nextNode`: A reference to the next node in the list.

### `LinkedList` Class

The `LinkedList` class provides the basic functionality of a single linked list, including methods for inserting, removing, and printing nodes. Key methods include:

- **`insert_at_beginning(data)`**: Inserts a node at the start of the list.
- **`insert_at_end(data)`**: Appends a node to the end of the list.
- **`insert_values(data_list)`**: Inserts multiple values sequentially at the end.
- **`get_length()`**: Returns the number of nodes in the list.
- **`remove_at(index)`**: Removes the node at the specified index.
- **`insert_at(index, data)`**: Inserts a node at the specified index.
- **`insert_after_value(data_after, data_to_insert)`**: Inserts a node after the first occurrence of a specified value.
- **`remove_by_value(data)`**: Removes the first node containing the specified value.
- **`print()`**: Prints the elements of the list in sequence.

### `DoubleNode` Class

The `DoubleNode` class is similar to the `Node` class but includes an additional attribute:

- `prevNode`: A reference to the previous node in the list.

### `DoubleLinkedList` Class

The `DoubleLinkedList` class extends the `LinkedList` class, adding methods for bidirectional traversal:

- **`insert_at_beginning(data)`**: Inserts a node at the start, updating both `nextNode` and `prevNode`.
- **`insert_at_end(data)`**: Appends a node to the end, with correct bidirectional links.
- **`remove_at(index)`**: Removes a node, updating both forward and backward links.
- **`insert_at(index, data)`**: Inserts a node at a specified index, handling both forward and backward references.
- **`print_forward()`**: Prints the elements of the list from the head to the tail.
- **`print_backward()`**: Prints the elements of the list from the tail to the head.

## Use Cases and Examples

### Single Linked List Operations

```python
ll = LinkedList()
ll.insert_at_beginning(5)
ll.insert_at_end(15)
ll.insert_values([20, 25, 30])
ll.print()
ll.remove_at(2)
ll.print()
ll.insert_at(2, 17)
ll.print()
ll.insert_after_value(20, 22)
ll.print()
ll.remove_by_value(22)
ll.print()

### Single Linked List Operations

'''python
dll = DoubleLinkedList()
dll.insert_at_beginning(5)
dll.insert_at_end(15)
dll.insert_at(2, 12)
dll.print_forward()
dll.print_backward()
dll.remove_at(1)
dll.print_forward()
dll.print_backward()


