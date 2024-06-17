### Big-O notation

1) $log_2n = O(n^2)$ : ```True``` <br>
A logarithmic function grows slower than a polynomial function

2) $nlog_2n = O(n)$ : ```False```<br>
To compare these two functions, one first cancels n. What is left is $log_2n$ versus 1. Clearly, $log_2n$ grows faster than 1<br>

3) $n^2 = O(n^3)$ : ```True```<br>
$n^a$ grows slower than $n^b$ for constants a < b 

4) $n = O(n^{1/2})$ : ```False```<br>
$n^{1/2}$ grows slower than n = $n^1$ as 1/2 < 1

5) $5^{log_2n} = O(n^2)$ : ```False```<br>
Recall that $a^{log_bc} = c^{log_ba}$ so $5^{log_2n} = n^{log_25}$. This grows faster than $n^2$ since $log_25$ = 2.321... > 2

6) $n^5 = O(2^{3log_2n})$ : ```False```<br>
$2^{3log_2n}$ = $(2^{log_2n})^3 = n^3$ and $n^3$ grows slower than $n^5$

7) $2^n = O(2^{n+1})$ : ```True```<br>
$2^{n+1} = 2.2^n$, o that is, $2^n$ and $2^{n+1}$ have the same growth rate and hence $2^n = \Theta(2^{n+1})$ 

8) **Remember:** $$ log_n < \sqrt{n} < n < nlogn < n^2 < 2^n$$

