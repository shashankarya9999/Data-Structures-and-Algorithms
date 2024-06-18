## Largest Concatenate

A greedy algorithm builds a solution piece by piece and at each step, chooses the most profitable piece. This is best illustrated with examples. 

Our first example is the Largest Concatenate Problem: given a sequence of single-digit numbers, find the largest number that can be obtained by concatenating these numbers. For example, for the input sequence (2,3,9,2,2), the output is the number 
93222. It is easy to come up with an algorithm for this problem. Clearly, the largest single-digit number should be selected as the first digit of the concatenate. Afterward, we face essentially the same problem: concatenate the remaining numbers to get as large number as possible. 

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/kfXoE1aPTw-16BNWj48P0g_daf6474063664b688fa41923a996fee1_2022-03-17_21-12-43.png?expiry=1718841600000&hmac=PjWUsvrYvbnegFQ_Lk8nQAhad0LS81KF0fjS2Kuj6lk)

Our second example is the Money Change Problem: given a non-negative integer 𝑚𝑜𝑛𝑒𝑦, find the minimum number of coins with denominations 1, 5, and 10 that changes money. For example, the minimum number of coins needed to change money=28 is 6: 28=10+10+5+1+1+1. This representation of 28 already suggests an algorithm. We take a coin c with the largest denomination that does not exceed money. Afterward, we face essentially the same problem: change (money−c) with the minimum number of coins. 

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/KKHJKXHZTi6hySlx2R4uIA_8837e33122034b1e9291e507105599e1_2022-03-17_21-16-02.png?expiry=1718841600000&hmac=wqPj3S-3rSx2QSa7JoJGgUhZc4fxl3QEP9TE-ZEhAlc)

### Local vs Global Optimum

If you use the same greedy strategy, then LargestConcatenate([2, 21]) returns 212 and Change(8, [1, 4, 6]) returns 3 because 8 = 6 + 1 + 1. But this strategy fails because the correct solutions are 221 (concatenating 2 with 21) and 2 because 8 = 4 + 4! 

Thus, in rare cases when a greedy strategy works, one should be able to prove its correctness: A priori, there should be no reason why a sequence of locally optimal moves leads to a global optimum! 

### Proving Correctness of Greedy Algorithms

At each step, a greedy algorithm restricts the search space by selecting a most “profitable” piece of a solution. For example, instead of considering all possible concatenations, the LargestConcatenate algorithm only considers concatenations starting from the largest digit. Instead of all possible ways of changing money, the Change algorithm considers only the ones that include a coin with the largest denomination (that does not exceed money). What one needs to prove is that this restricted search space still contains at least one optimal solution. This is usually done as follows.

*Consider an arbitrary optimal solution. If it belongs to the restricted search space, then we are done. If it does not belong to the restricted search space, tweak it so that it is still optimum and belongs to the restricted search space.*

Here, we will prove the correctness of LargestConcatenate for single digit numbers (the correctness of Change for denominations 1, 5, and 10 will be given later). Let 
𝑁 be the largest number that can be obtained by concatenating digits $𝑑_1,...,d_n$ in some order and let $d_m$ be the largest digit. Then, 𝑁 starts with $d_m$. Indeed, assume that 𝑁 starts with some other digit $d_i < d_m$. Then 𝑁 has the form $d_i\alpha d_m \beta$ where $\alpha,\beta$ are the (possibly empty) sequences of digits. But if we swap $d_i$ and $d_m$, we get a larger number!

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/wxE-VJh2S2yRPlSYdktsTQ_7da48c2665584c7abfed144bb37adae1_2022-03-18_23-30-31.png?expiry=1718841600000&hmac=hGExjNgsMotAFlk_YRTedn42HzpBOTRZcnF5XfQFqzc)

Question: What part of this proof breaks for multi-digit numbers?

### Implementation

A greedy solution chooses the most profitable move and then continues to solve the remaining problem that usually has the same type as the initial one. There are two natural implementations of this strategy: either iterative with a while loop or recursive. Iterative solutions for the Largest Concatenate and Money Change problems are given above. Below are their recursive variants. 

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/HAi6H3OYRKiUQZRPj_cl5w_5700c9c2f0544f8c99f5d28f1b32e2e1_2024-02-18_12-20-40.png?expiry=1718841600000&hmac=lrQodNei-Xl4wKVjax_TUTnIQU-Z4O0-lC1UzX1V_tc)
