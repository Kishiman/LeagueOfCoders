# Lexical Addition

Dr. Fibonacci is modeling the bacteria population growth using a famous sequence. Initially, a bacterium is placed inside a test tube. There will be 111 bacterium in the first minute, 222 bacteria in the second minute, 333 in the third minute, 555 in the fourth minute and so on. At the end of the minute nnn, the number of bacteria will be equal to the number of bacteria in minute n−2 plus the number of bacteria in minute n−1.

Dr. Xtreme wants Dr. Fibonacci to use the same model with an enhancement to model the human population growth. Dr. Xtreme wants to enhance the model by including a disaster scenario where most humans are destroyed. If there is a disaster in generation mmm, then only the number of humans in that generation modulo 101010 will survive. You goal is develop the model with the disaster scenario, so that we can compute how many humans will survive after the disaster occurs. 
## Standard input

Input begins with a single number ttt (1≤t≤1001 \leq t \leq 1001≤t≤100), which denotes the number of test cases.

On the following ttt lines there will be a single integer mmm (1≤m≤1091 \leq m \leq 10^91≤m≤109) which indicates the generation where the disaster occurs for the specific test case.

Please note that there will be only one disaster per test case.
## Standard output

Input begins with a single number ttt (1≤t≤1001 \leq t \leq 1001≤t≤100), which denotes the number of test cases.

On the following ttt lines there will be a single integer mmm (1≤m≤1091 \leq m \leq 10^91≤m≤109) which indicates the generation where the disaster occurs for the specific test case.

Please note that there will be only one disaster per test case. 
##  Constraints and notes
*       1 ≤ t ≤ 100
*       1 ≤ m ≤ 10^9 

##  Examples

###  Input

3
2
4
10

###  Output

2
5
9


