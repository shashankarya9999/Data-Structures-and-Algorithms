### Doubly-Linked List

1) Operations on doubly-linked list and their algorithms:

* PushBack(key):<br>
    
    ```
    node <- new node
    node.key <- key; node.next = nil
    if tail = nil:
        head <- tail <- node
        node.prev <- nil
    else:
        tail.next <- node
        node.prev <- tail
        tail <- node
    ```

* PopBack():<br>

    ```
    if head = nil; ERROR: empty list
    if head = tail:
        head <- tail <- nil
    else:
        tail <- tail.prev
        tail.next <- nil
    ```

* AddAfter(node,key):<br>

    ```
    node2 <- new node
    node2.key <- key
    node2.next <- node.next
    node2.prev <- node
    node.next <- node2
    if node2.next != nil:
        node2.next.prev <- node2
    if tail = node:
        tail <- node2
    ```

* AddBefore(node,key):<br>

    ```
    node2 <- new node
    node2.key <- key
    node2.next <- node
    node2.prev <- node.prev
    node.prev <- node2
    if node2.prev != nil:
        node2.prev.next <- node2
    if head = node:
        head <- node2
    
    ```

2) Operations on Singly-linked list and their Time-Complexities:

| Doubly-Linked List | No Tail | With Tail |
|:-------------------|:-------:|:---------:|
| PushFront(Key) | O(1) |
| TopFront() | O(1) |
| PopFront() | O(1) |
| PushBack(Key) | O(n) | O(1) |
| TopBack() | O(n) | O(1) |
| PopBack() | O(1) |
| Find(Key) | O(n) |
| Erase(Key) | O(n) |
| Empty() | O(1) |
| AddBefore(Node,Key) | O(1) |
| AddAfter(Node,Key) | O(1) |
