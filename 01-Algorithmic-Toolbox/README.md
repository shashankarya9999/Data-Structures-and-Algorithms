## Algorithmic Toolbox: *The first course of the specialization*

### Additional Resources:

1) **Visualizations**:
- [**Computing Fibonacci Numbers**](https://www.cs.usfca.edu/~galles/visualization/DPFib.html): To better appreciate the difference between polynomial time and exponential time algorithms, try computing F<sub>20</sub> using this visualization. For this, enter "20" into the field and press "Fibonacci Recursive". This calls a recursive algorithm that makes an endless number of recursive calls. This call will never end even if you increase the visualization speed to maximum. Stop this call by pressing "Skip Forward" and press "Fibonacci Table". This will call an iterative algorithm that uses an array to compute Fibonacci numbers efficiently. The third button calls a recursive algorithm with memorization. We will cover such algorithms in the Dynamic Programming module. (Note that the visualization uses a slightly different definition of Fibonacci numbers: there, F<sub>0</sub> = F<sub>1</sub> = 1, and in the lecture, F<sub>0</sub> = 0, F<sub>1</sub> = 1. This, of course, has no influence on the running time.)
- [**Comparison based sorting algorithms**](http://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html) by David Galles 
- [**sorting-algorithms.com**](http://www.sorting-algorithms.com/)


2) **Readings**: 
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

3) **Note**:
- Although the numbers in an array may be bounded by a number, Count Sort is not applicable to an array of real numbers, because it can only be applied to integer numbers: real numbers cannot play the role of indices of an array.

<sup>1</sup> [DPV] Sanjoy Dasgupta, Christos Papadimitriou, and Umesh Vazirani. Algorithms (1st Edition). McGraw-Hill Higher Education. 2008.

<sup>2</sup> [CLRS] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein. Introduction to Algorithms (3rd Edition). MIT Press and McGraw-Hill. 2009.