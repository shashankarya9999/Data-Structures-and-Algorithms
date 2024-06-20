## Algorithmic Toolbox: *The first course of the specialization*

### Additional Resources:

1) **Visualizations**:
- [**Computing Fibonacci Numbers**](https://www.cs.usfca.edu/~galles/visualization/DPFib.html): To better appreciate the difference between polynomial time and exponential time algorithms, try computing F<sub>20</sub> using this visualization. For this, enter "20" into the field and press "Fibonacci Recursive". This calls a recursive algorithm that makes an endless number of recursive calls. This call will never end even if you increase the visualization speed to maximum. Stop this call by pressing "Skip Forward" and press "Fibonacci Table". This will call an iterative algorithm that uses an array to compute Fibonacci numbers efficiently. The third button calls a recursive algorithm with memorization. We will cover such algorithms in the Dynamic Programming module. (Note that the visualization uses a slightly different definition of Fibonacci numbers: there, F<sub>0</sub> = F<sub>1</sub> = 1, and in the lecture, F<sub>0</sub> = 0, F<sub>1</sub> = 1. This, of course, has no influence on the running time.)
- [**Comparison based sorting algorithms**](http://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html) by David Galles 
- [**sorting-algorithms.com**](http://www.sorting-algorithms.com/)
- [**Making change**](http://www.cs.usfca.edu/~galles/visualization/DPChange.html) by David Galles
- [**Edit distance calculator**](http://www.let.rug.nl/kleiweg/lev/) by Peter Kleiweg
- [**Longest common subsequence**](http://www.cs.usfca.edu/~galles/visualization/DPLCS.html) by David Galles (note the longest common subsequence problem is a special case of the edit distance problem where we allow insertions and deletions only)

2) **Readings & Lectures**: 
- Computing Fibonacci numbers: Section 0.2 of [DPV08<sup>1</sup>]
- Properties of Fibonacci numbers: Exercises 0.2-0.4 in [DPV08]
- [**An elementary introduction to greatest common divisor**](https://www.khanacademy.org/math/pre-algebra/factors-multiples/greatest_common_divisor/v/greatest-common-divisor-factor-exercise) at Khan Academy
- Greatest common divisor: Section 1.2.3 of [DPV08], Section 31.2 of [CLRS<sup>2</sup>]
- Big-𝑂 notation and growth rate: Section 0.3 of [DPV08]
- [**Big-𝑂 notation**](https://www.khanacademy.org/computing/computer-science/algorithms/asymptotic-notation/a/asymptotic-notation) at Khan Academy
- [**An elementary introduction to binary search**](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search) at Khan Academy
- Polynomial multiplication: Section 2.1 of [DPV08]
- Master Theorem: Section 2.2 of [DPV08]
- Merge sort and lower bound for comparison based sorting: Section 2.3 of [DPV08]
- Quick sort: Chapter 7 of [CLRS]
- [**An elementary introduction to quick sort**](https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/overview-of-quicksort) at Khan Academy
- Change problem: Section "An Introduction to Dynamic Programming: The Change Problem" of [CP<sup>3</sup>]
- Edit distance: Section 6.3 of [DPV08]
- Chapter 5 "How Do We Compare Biological Sequences" of [CP]
- [**Advanced dynamic programming lecture notes**](https://jeffe.cs.illinois.edu/teaching/algorithms/notes/D-faster-dynprog.pdf) by Jeff Erickson
- Knapsack: Section 6.4 of [DPV08]

3) **Note**:
- Although the numbers in an array may be bounded by a number, Count Sort is not applicable to an array of real numbers, because it can only be applied to integer numbers: real numbers cannot play the role of indices of an array.

- What is the amount of additional memory that regular Quick Sort uses (besides the array being sorted) in the worst case? <br>

    In the worst case, the array is always divided into a part of size 1 and a part with all the other elements, and the recursion depth in this case will be 𝑂(𝑛). Recursion needs 𝑂(1) additional memory for each call, so in the worst case Quick Sort will use 𝑂(𝑛) additional memory. However, by using tail recursion elimination we can make Quick Sort use no more than 𝑂(log𝑛) additional memory.

- What is the running time of the dynamic programming algorithm to change 
𝑚 using 𝑛 different coin denominations? <br>

    For each value up to $m$, we need to try to start changingit with each of $n$ coin denominations, thus the running time is $O(nm)$

- Hirschber's algorithm allows to compute an optimal alignment (but not just its score!) of two strings of length 𝑛 and 𝑚 in quadratic time 𝑂(𝑛𝑚) and a linear space 𝑂(𝑚+𝑛) only.

<sup>1</sup> [DPV] Sanjoy Dasgupta, Christos Papadimitriou, and Umesh Vazirani. Algorithms (1st Edition). McGraw-Hill Higher Education. 2008.

<sup>2</sup> [CLRS] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein. Introduction to Algorithms (3rd Edition). MIT Press and McGraw-Hill. 2009.

<sup>3</sup> [CP] Phillip Compeau, Pavel Pevzner. Bioinformatics Algorithms: An Active Learning Approach. Active Learning Publishers. 2014.