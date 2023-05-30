from sys import stdin
from math import gcd

T = int(stdin.readline())

for t in range(T):
    N, a, b = [int(i) for i in stdin.readline().strip().split(' ')]

    if a == 0 or b == 0:
        print(2)
    elif N == a + b:
        print(3)
    else:
        print(N//gcd(N, gcd(a, b)))
