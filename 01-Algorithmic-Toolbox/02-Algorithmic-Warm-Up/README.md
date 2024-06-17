### Overview

In week 2 of the course, 

- First, I designed a naive simple algorithm, using recursion, to compute ```Fibonacci numbers```. But as I analyzed the algorithm, it turned out to be very slow. The reason being the numerous function calls that were being computed for the same number even though it had already been calculated before. So there was a need for a more efficient algorithm. An iterative approach stood out as a better algorithm.

- Second, I implemented a relatively simple naive algorithm to compute GCD of two positive numbers. But it also turned out to be very slow, especially for 20 digit numbers. For a better approach, I was taught about ```Euclidean algorithm```. It proved to be very efficient algorithm.
    <!-- - Each step reduces the size of number by a factor of 2
    - Takes about log(ab) steps
    - GCDs of 100 digit numbers takes about 600 steps
    - Each step is a single division -->

- I was made aware of the need for computing runtimes of programs. For this very purpose, I was introduced to the ```Big-O notation``` alongside Big-Omega, Big-Theta and Small-o notations. I learned about common rules to compute runtime using Big-O notation on the iterative Fibonacci algorithm. Then, I came to know about advantages and disadvantages of Big-O notation. 

- Some important points to keep in mind:
    - Algorithm problems are so varied that there's no unified technique that will allow you to solve all of them
    - Sometimes, in order to find a good algorithm, it requires that you have a good insight. Let's say you are working on a problem that no one's ever looked at before. In order to find a good algorithm for it, you need to come up with some clever idea that no one else has ever come up with before.
    - There are three major things that can be learned in algorithms:
        - Practice designing algorithms
        - Common tools used in algorithm design
        - Three of the most common algorithmic design techniques:
            - Greedy Algorithms
            - Divide and Conquer
            - Dynamic Programming
    - Levels of Design:
        - **Naive Algorithm**: Definition to algorithm. Slow
        - **Algorithm by way of standard tools**: Standard techniques
        - **Optimized Algorithm**: Improve existing algorithm
        - **Magic Algotithm**: Unique insight