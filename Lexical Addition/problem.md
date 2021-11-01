# Lexical Addition

Michael is a kid who loves calculators. He is really obsessed with anything about digits and integers. He is also really curious about operations, such as addition, subtraction, division, and multiplication. Every day, he plays with a calculator, enters some numbers, performs some operations, and then the calculator gives the result. He repeats this pattern multiple times until he is bored.

One day, Michael discovers something interesting about the sum of integers. He notices that different pairs of numbers can be added together to give the same result. Pairs such as 5+7 and 8+4, which both are equal to 12. To further deepen this serendipitous discovery, he notices that this interesting property applies to groups of numbers greater than two, such as 4+6+6  and 5+8+3, which both are equal to 16. He wonders if such bizarre behavior can be observed to groups of four or five integers and, to his astoundment, he keeps increasing the size of the sequences and this property is always present!

He wonders if there is a way to reverse the whole process. He proposes the existence of an integer N, and guesses the sequence of integers that, when added, results in N. He found that for some integer N, his thought experiment could have multiple solution.

For example, 16 can be expressed from the sum of these sequences:

    [1,15]
    [1,1,14]
    [5,5,6]
    [4,6,6]
    [5,8,3]
    and so on..... 

Because the number of different configurations is so large, Michael wants to constraint the elements used in the sequences. He chooses another 2 integers A and B, so that every element of the sequence is an integer greater than or equal to A and also less than or equal to B. More formally, for every element XXX in the sequence, A≤X≤BA. The element does not have to be unique.

Considering this constraint, if N=16,A=4,B=6N = 16, A = 4, B = 6N=16,A=4,B=6 some of the valid sequences with the sum N are:

    [4,4,4,4]
    [4,6,6]
    [6,4,6]
    [6,6,4]
    [5,5,6]
    and so on...

For some three integers N, A, and B, he wonders, can N always be expressed as the sum of a valid sequence of integers that fulfilled all the constraints above? If there are multiple sequences, he wants the shortest sequence. If there are multiple sequences with the shortest length, he wants the lexicographically smallest sequence.

So for:

    N=4,A=2,B=3, it is possible to find a sequence: 4=2+2;
    N=10,A=6,B=9, it is impossible find a sequence;
    N=251,A=40,B=51, there are multiple sequences, but from all the shortest ones the lexicographically smallest one is 251=47+51+51+51+51
## Standard input

There are three integers N, A, and B on a single line, separated by single spaces.
## Standard output

If it is impossible, output a single line NO. Otherwise, output YES on the first line. Then output the sequence of integers on the second line, separated by single spaces.
##  Constraints and notes
*       0 ≤ N ≤ 10^15 
*       0 ≤ A ≤ B ≤ 10^15
*       It is guaranteed that if a sequence exists, it does not contain more than 10^5 elements. 

| input  | output   | explanation   |
|-------------- | -------------- | -------------- |
| 4 2 3    | YES 2 2 | There is only one solution: 2 2     |
| 59 8 10    | YES 9 10 10 10 10 10     | There are several possible sequences    |
| 10 6 9    | NO   | No sequence exists for this input.     |


