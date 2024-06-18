## Maximizing the Value of the Loot Problem

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/DIn3fZt1SA2J932bdegNFw_40cd05e50323493f99d52608970e73e1_2022-03-19_11-46-35.png?expiry=1718841600000&hmac=zvcrEECHF1Sw9-HNOYlCnFyD16HHemypvqzVMZuo0jU)

A thief breaks into a spice shop and finds four pounds of saffron, three pounds of vanilla, and five pounds of cinnamon. His backpack fits at most nine pounds, therefore, he cannot take everything. Assuming that the prices of saffron, vanilla, and cinnamon are $5000, $200, and $10, respectively, what is the most valuable loot in this case? If the thief takes $u_1$ pounds of saffron, $u_2$ pounds of vanilla, and $u_3$ pounds of cinnamon, the total value of the loot is : $5000\cdot\frac{u_1}{4} + 200\cdot\frac{u_2}{3} + 10\cdot\frac{u_3}{5}$. 

The thief would like to maximize the value of this expression subject to the following constraints: $u_1 \le 4, u_2 \le 3, u_3 \le 5, u_1 + u_2 + u_3 \le 9$

**Solution**: Take as Much of the Most Expensive Compound as You can

Let's define the price of a compound $i$ as $\frac{c_i}{w_i}$. A natural strategy for the thief is to keep taking as much of the priciest (most expensive) compound as possible. To prove that this strategy leads to an optimal solution, let's consider the most expensive compound 𝑚. What is the maximum amount 𝑎 of the 𝑚-th compound that the thief can take into his backpack? First, it should fit into the backpack: $a \le W$. Second, it should not exceed the available amount of the $m$-th compound: $a \le w_m$. Hence, $a = min{w_m, W}$. We claim that there is an optimum solution containing 𝑎 pounds of the 𝑚-th compound.

To prove it, consider an optimum solution $u_1,...,u_n$ that maximizes the amount $u_m$ of the most expensive $m$-th compound among all optimum solutions ($𝑢_i$ stands for the amount of the $i$-th compound). If $u_m = a$, the there is nothing to prove. Otherwise, $u_m < a$. Hence, $u_m < w_m$ and $u_m < W$. Consider two cases:

1) The backpack is not fully packed with the current solution: $u_1 + u_2 + \cdot\cdot\cdot + u_n < W$. Since $u_m < w_m$, one can take a little bit more of the 𝑚-th compound: this way, we get a new solution that is better than the current one, contradicting the optimality of the current one.

2) The backpack is fully packed: $u_1 + u_2 + \cdot\cdot\cdot + u_n = W$. Since $u_m < W$, there must be some $i \neq m$ such that $u_i > 0$. Then, instead of some small amount of the 𝑖-th compound, one can take the same small amount of the  𝑚-th compound. This way, we preserve the total weight, but increase the total value and the amount of the most expensive 
𝑚-th compound in the backpack. This contradicts the fact that the initial solution had the maximum amount of the 𝑚-th compound.

Having proved that we can take as much of the most expensive compound as we can, we can now design a greedy algorithm: take the maximum possible amount of the most expensive compound and iterate. We stop when either there are no more compounds left or when the backpack is fully packed. In the pseudocode below, *Weight* and *Cost* are arrays that contain all weights and costs. 

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/6-rHd3GWR9aTeEGFeGF0Cg_77c103bcac4c4239a40cc6c291d61de1_2024-02-18_12-00-59.png?expiry=1718841600000&hmac=aMgtaeocIyiMpUtmcrna5y6IFYW7jra9gBDQq2RhBBI)

The running time of this algorithm is $𝑂(𝑛^2)$: at every iteration, we scan the list of compounds to find the most expensive one and there are at most 𝑛 iterations as every iteration reduces the number of compounds to consider.
