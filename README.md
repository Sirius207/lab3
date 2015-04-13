# lab3

g++ -o A A.cpp
--------------------------------------------------------------
B

if size=10000

sort(): 0
seconds
v1 and v2 are
different.
insertion_sort():
1.27 seconds
v1 and v2 are
the same.        

n=10000   n^2=100000000  1.27second
-------------------------------------
if size=100000

sort(): 0.04
seconds
v1 and v2 are
different.
insertion_sort():
128.04 seconds
v1 and v2 are
the same.

n=100000 
n^2 = 10000000000  128.04 second   128.04/1.27 =  10000000000/100000000 = 100    *right

n log n =500000 0.04second
---------------------------------------
if size=1000000

sort(): 0.52
seconds
v1 and v2 are
different.
insertion_sort():
XXXXX seconds   //too  long
v1 and v2 are
the same.

n=1000000  n log n =  6000000 0.52 second      6000000/500000 = 0.52/0.04 = 12    *right    
----------------------------

the result second ratio  is equate the ratio of nlog(n) &  n^2  
