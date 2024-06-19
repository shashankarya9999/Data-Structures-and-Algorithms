### Examples

1) If $T(n) = 8T(\frac{n}{2}) + O(n^2)$ then $T(n) = O(n^4)$  

    Yes, $T(n) = O(n^4)$: from the Master theorem, we know that $T(n)$ grows no faster than $n^{log_28} = n^3$. At the same time, $n^3$ grows no slower than $n^4$ and hence $T(n) = O(n^4)$

2) if $T(n) = T(\frac{n}{2}) + O(1)$ then $T(n) = O(nlogn)$

    Yes, $T(n) = O(logn)$: this is the running time of the binary search algorithm and a recurrence relation it satisfies.