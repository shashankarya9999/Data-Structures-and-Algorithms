### Linked List

1) Operations on Linked-List:

| Operation | Description |
|:----------|:------------|
| PushFront(Key) | add to front |
| Key TopFront() | return front item |
| PopFront() | remove front item |
| PushBack(Key) | add to back |
| Key TopBack() | return back item |
| PopBack() | remove back item |
| Boolean Find(Key) | is key in list? |
| Erase(Key) | remove key from list |
| Boolean Empty() | empty list? |
| AddBefore(Node,Key) | adds key before node |
| AddAfter(Node,Key) | adds key after node |

2) Operations on Singly-linked list and their Time-Complexities:

| Singly-Linked List | No Tail | With Tail |
|:-------------------|:-------:|:---------:|
| PushFront(Key) | O(1) |
| TopFront() | O(1) |
| PopFront() | O(1) |
| PushBack(Key) | O(n) | O(1) |
| TopBack() | O(n) | O(1) |
| PopBack() | O(n) |
| Find(Key) | O(n) |
| Erase(Key) | O(n) |
| Empty() | O(1) |
| AddBefore(Node,Key) | O(n) |
| AddAfter(Node,Key) | O(1) |
