# STL (Standard Template Library)

    STL is a collection of pre-built classes and functions used for efficient data
handling. It provied ready to use data-structure and algorithm. It provides four 
components called algorithms, containers, functions, and iterators.

## Containers
    
    Containers are class template in the STL library, that store and manage a collection
of elements efficiently. Containers are class template which gives them a great 
flexibility in the types supported as elements. 

#### Common Operations on STL Containers

Most STL containers support a common set of operations for managing and accessing elements.

```text
Operation	Description
insert()	Adds an element to the container
erase()	    Removes an element from the container
size()	    Returns the number of elements in the container
empty()	    Checks whether the container is empty
clear()	    Removes all elements from the container
begin()	    Returns an iterator to the first element
end()	    Returns an iterator to the position after the last element
```

##### 1. Sequence Containers

    Sequence Containers implement linear data structure in which the elements can be 
accessed sequentially (one after another in a specific, logical, or chronological 
order). 

```text
Container Name          Description
Array(c++11)            Container that wraps over fixed size static array.
Vector                  Automatically resizeable dynamic array
Deque                   Dynamic array of fixed-size arrays that allows fast insertions
                        and deletions at both ends.
List                    Implementation of Doubly Linked List data structure.
Forward List(c++11)     Implementation of Singly Linked List data structure.
```

#### 2. Associative Containers

    Associative containers store data in some sorted order. It provides fast search,in
sert and delete in O(log n) time by using balanced trees like Red Black Trees.


