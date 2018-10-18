```

***PART 1***
PROVE:
-THE SQUARE ROOT OF 2 IS IRRATIONAL:

by contradition:

assume sqrt(2) IS rational. 
sqrt(2) = a/b //thus we can write it as a ratio of two IRREDUCIBLE integers
2 = (a^2)/(b^2)
2b^2 = a^2
if b is an integer, b^2 is an integer. and any integer times 2 is an even number
thus, a^2 is an even number.  a^2 can't be even if a is odd. So a is even.
a = 2n
so 2b^2 = (2n)^2
2b^2 = 4n^2
b^2 = 2n^2  // any number, n^2, multiplied by 2 is even.  so b^2 is even, and by extention, b itself.
if both a and b are even, then the original equation is false because a/b IS reducible.  
sqrt(2) MUST be irrational, because otherwise it will lead to a contradition.  
*done*


-IF N=25, 100, OR 169, THEN N IS A PERFECT SQUARE AND IS THE SUM OF TWO PERFECT SQUARES:

N = 5.
5*5 = 25
25 = 9 + 16 //3^2 and 4^2

n = 100
10*10 = 100
36 + 64 = 100 //6^2 and 8^2

n = 169
13*13 = 169
144 + 25 = 169  //12^2 and 5^2
*done*

-THE SUM OF TWO ODD INTEGERS IS EVEN:

(2n + 1) + (2n + 1) = (2x)
4n + 2 = 2x
4n is any even number, and adding 2 to any even number gives an even number. 
*done*

-THE SUM OF AN EVEN INTEGER AND IT'S SQUARE IS EVEN:

2n + (2n)^2 //even number plus even number squared
2n + 4n^2   
n(4n + 2)   //factor
4n + 2 is any even number //because 2n is an even number, adding any even to it is still even. 
n(2x)
any number, n, multiplied by an even number, 2x, is an even number.
*done*

-IF N SQUARED IS ODD, N IS ODD:

n^2 = (2x + 1)
if 2x is any even number, then i can multiply it by any even number and it will still be even.
n^2 = (2x*2x + 1) 
n^2 = (4x^2 + 1)  //square root
n = (2x + 1)
*done*

***PART 2***
PROVE BY INDUCTION THAT 1 + 5 + 9 + ... + (4n-3) = n(2n-1)

base case: 
(4(1)-3) = (1)(2(1)-1)
1 = 1

if:
1 + 5 + 9 + ... + (4n-3) = n(2n-1)

then:
[1 + 5 + 9 + (4n-3)] + (4(n+1)-3) = (n+1)(2(n+1)-1) 
n(2n-1) + (4(n+1)-3) = (n+1)(2n+1)    //where [1 + 5 + 9 + (4n-3)] is n(2n-1)
2n^2 - n + 4n + 1 = (2n^2 + 3n + 1)
2n^2 +3n + 1 = 2n^2 +3n + 1
*done*

PROVE THAT FOR ANY POSITIVE INTEGER NUMBER N, N^3 + 2N IS DIVISIBLE BY 3

by induction:

base case: 
(1)^3 + 2(1) = 3
3 / 3 divides evenly

if:
n^3 + 2n = 3m    //because if it divides by 3 evenly, some integer m, can be multiplied by 3 to get to it as well

then: 
((n+1)^3 + 2(n+1))
(n+1)(n+1)(n+1) + 2n + 2
(n^2 + 2n +1) (n +1) + 2n +2
n^3 + 2n^2 + n + n^2 + 2n +1 2n + 2
(n^3 + 2n) + 3n^2 + 3n + 3  //moved around so I can use my base case with it
3m + 3n^2 + 3n + 3
3(m + n^2 + n + 1)  //(m + n^2 + n + 1) all equal some integer. 
so 3(t)
thus
(n+1)^3 + 2(n+1) = 3t, where t is some integer.  
*done*

PROVE THAT FOR N >= 1, 9^N -1 IS DIVISIBLE BY 8 FOR ALL NON-NEGATIVE INTEGERS

by induction:

base case: 
(9^(1) - 1) / 8 = 1, or is evenly divisible.  

if:
9^n - 1 = 8m  //because if 9^n -1 is divisible by 8, some integer multiplied by 8 will equal it.  

then:
9^(n+1) - 1 = 8m
9^(n+1) = 8m + 1
9^n * 9 = 8m + 1
9^n * 9 - 1 = 8m
(9^n - 1)9 + 9 - 1  //threw a bunch of numbers in there to get (9^n -1). I THINK I did it right. 
8m(9) + 9 - 1 = 8m


```
