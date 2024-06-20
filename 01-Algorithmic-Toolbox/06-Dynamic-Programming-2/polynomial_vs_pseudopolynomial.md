### Polynomial vs Pseudopolynomial

Many of you are surprised to learn that the running time $O(nW)$ for the knapsack algorithm is called pseudo polynomial, but not just polynomial. The catch is that the input size is proportional to $logW$, rather than $W$. To further illustrate this, consider the following two scenarios:<br>

1) The input consists of $m$ object(say, integers)
2) The input is an integer $m$

They look similar, but there is a dramatic difference. Assume that we have an algorithm that loops for 𝑚 iterations. Then, in the first case it is a polynomial time algorithm (in fact, even linear time), whereas in the second case it is an exponential time algorithm. This is because we always measure the running time in terms of the input size. In the first case the input size is proportional to $m$, but in the second case it is proportional to $logm$. Indeed, a file containing just a number “100000” occupies about 7 bytes on your disc while a file containing a sequence of 100000 zeroes (separated by spaces) occupies about 200000 bytes (or 200 KB). Hence, in the first case the running time of the algorithm is 
𝑂(size), whereas in the second case the running time is $O(2^{size})$.

Let's also consider the same issue from a slightly different angle. Assume that we have a file containing a single integer 74145970345617824751. If we treat it as a sequence of 𝑚=20 digits, then an algorithm working in time 𝑂(𝑚) will be extremely fast in practice. If, on the other hand, we treat it as an integer 𝑚=74145970345617824751, then an algorithm making 
𝑚 iterations will work for

$$\frac{74145970345617824751}{10^9\cdot60\cdot60\cdot24\cdot365} \approx 2351$$

years, assuming that the underlying machine performs $10^9$ operations per second.

**Further reading**: [**Link**](https://stackoverflow.com/questions/4538581/why-is-the-knapsack-problem-pseudo-polynomial#answer-4538668)

