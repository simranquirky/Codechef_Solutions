###  PROBLEM STATEMENT 1

There are three people, and each of them has an unbiased 6-sided die. The result of rolling a die will be a number between 1 and 6 (inclusive) with equal probability.
The three people throw their dice simultaneously. In this game, the third person wins only if his number is strictly greater than the sum of the other two numbers. Given that the first person rolls the value X and the second person rolls the value Y, what is the probability the third person will win?
#### Input Format
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains two integers X and Y.
#### Output Format
For each test case, output the probability that the third person wins.
Your answer will be considered correct if its absolute error doesn't exceed 10−6.
##### Constraints
1≤T≤36

1≤X,Y≤6

#### Sample Input 1 
3  
1 3  
2 4  
2 3
#### Sample Output 1 
0.333333  
0  
0.166666  
Explanation  
In the first test case, out of the six outcomes of a die, the third person wins if the result is either 5 or 6. So the probability of winning is 26≈0.333333.  
In the second test case, the third person only wins if the result is greater than 6, which is impossible. So the probability of winning is 0. 

### SOLUTION : [check here](https://github.com/simranquirky/Codechef_Solutions/new/main/2021/Starters/Three_Dices.c)

###  PROBLEM STATEMENT 2

A great deal of energy is lost as metabolic heat when the organisms from one trophic level are consumed by the next level.
Suppose in Chefland the energy reduces by a factor of K, i.e, if initially, the energy is X, then the transfer of energy to the next tropic level is ⌊XK⌋. This limits the length of foodchain which is defined to be the highest level receiving non-zero energy.
E is the energy at the lowest tropic level. Given E and K for an ecosystem, find the maximum length of foodchain.  
Note: ⌊x⌋ denoted the floor function, and it returns the greatest integer that is less than or equal to x (i.e rounds down to the nearest integer). For example, ⌊1.4⌋=1, ⌊5⌋=5, ⌊−1.5⌋=−2, ⌊−3⌋=−3 , ⌊0⌋=0.
#### Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, two integers E,K.
#### Output Format
For each testcase, output in a single line answer to the problem.
Constraints  
1≤T≤104  
1≤E≤109  
2≤K≤109
#### Sample Input 1   
3  
5 3  
6 7  
10 2
#### Sample Output 1   
2  
1  
4  
Explanation
TestCase 1: The energy at first level is 5 units. For the second level energy becomes ⌊53⌋=1 units. So the length of foodchain is 2 since from the next level onwards 0 units of energy will be received.

TestCase 3: The energy at different levels is:

Level 1- 10 units  
Level 2- ⌊102⌋=5 units  
Level 3- ⌊52⌋=2 units  
Level 4- ⌊22⌋=1 units  
Level 5- ⌊12⌋=0 units  
So the answer is 4, since it is the last level to receive non-zero energy. 

### SOLUTION : [check here](https://github.com/simranquirky/Codechef_Solutions/edit/main/2021/Starters/Food_Chain.c)
