import math
a,b = map(int,input().split())

print(math.factorial(a-1)//(math.factorial(b-1)*math.factorial(a-b)))
