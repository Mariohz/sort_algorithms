import random
n=20
var=0

arr=[]
for i in range(n):
    v=random.randint(0,99)
    arr.append(v)
print(arr)
arr.sort()
print(arr)
