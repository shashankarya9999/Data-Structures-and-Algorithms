## $money$ Change Problem

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/8tfUU_sPQd6X1FP7D1HeWQ_2cc131dd8e8442f689399d9af2b784e1_2022-03-18_23-40-23.png?expiry=1718841600000&hmac=U6PYvFkpvl8fiEDOsbOAIO46jS3fyYR5ic5E9tjjV-E)

**Solution**: Use the Largest Denomination First

Here is the idea: while $money$ > 0, keep taking a coin with the largest denomination that does not exceed $money$, subtracting its value from $money$, and adding 1 to the count of the number of coins:

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/E_rl_ZzHSem65f2cx8nprA_36658b3b2961443580e79bd56142d4e1_2022-03-18_23-43-22.png?expiry=1718841600000&hmac=Uzm_FfLEeD-pSlFnVsVy2IZ44aWfLlyY2RasimROWU4)

There is also a one-liner for solving this problem:

![](https://d3c33hcgiwev3.cloudfront.net/imageAssetProxy.v1/ShrK0GH8SSKaytBh_AkiKA_17fa79ecbc5c4b1694864d34d3400ae1_2022-03-18_23-44-18.png?expiry=1718841600000&hmac=ZyO16_4odrVnzH9B1qFtBthX9nz75xrrL656EWecGT8)

## Proving Correctness

Designing greedy algorithms is easy, but proving that they work is often non-trivial! You are probably wondering why we should waste time proving the correctness of the obvious Change algorithm. Just wait until we setup an algorithmic trap to convince you that the proof below is not a waste of time!  					

To prove that this greedy algorithms is correct, we show that taking a coin with the largest denomination is consistent with some optimal solution. I.e., we need to prove that for any positive integer $money$ there exists an optimal way of changing $money$ that uses at least one coin with the denomination 𝐷,where 𝐷 is the largest number among 1,5,10 that does not exceed $money$. We prove this by considering a few cases. In each of the cases, we take some solution (i.e., a particular change for $money$) and transform it so that the number of coins does not increase and it contains at least one coin with denomination 𝐷. In particular, if we start from an optimal way to change $money$, what we get is also an optimal way of changing $money$ that contains a coin 𝐷.

1) $1 \le money < 5$. In this case $D$ = 1 and the only way to change $money$ is to use $money$ coins of denomination 1.

2) $5 \le money < 10$. In this case $D$ = 5. Clearly, any change of $money$ uses only coins with denominations 1 and 5. If it does not use a coin with denomination 5, then it uses at least five coins of denomination 1 (since $money$ $\ge 5$). By replacing them with one coin of denomination 5 we improve this solution.

3) $10 \le money$. In this case $D$ = 10. Consider a way of changing $money$ and assume that it does not use a coin 10. A simple, but crucial observation is that some subset of the used coins sums up to 10. This can be shown by considering the number of coins of denomination 5 in this solution: if there are no 5's, then there are at least ten 1's and we replace them with a single 10; if there is exactly one 5, then there are at least five 1's and we replace them with a single 10 again; if there are at least two 5's, they can be again replaced. 	

Although this proof is long and rather boring, you need a proof each time you come up with a greedy algorithm! The next Exercise Break hints a more compact way of proving the correctness of the algorithm above.			 				 					

**Exercise Break**: Show that 𝑚𝑜𝑛𝑒𝑦 mod 5 coins of denomination 1 are needed in any solution and that the rest should be changed with coins of denomination 10 and at most one coin of denomination 5. 

**Running time**: The running time of the Change algorithm is 
𝑂(𝑚), while its single line version requires only a few arithmetic operations. 