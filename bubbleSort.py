import random
n=10000
var=0

def bubbleSort(arr):
    for i in range(0,n):
        for j in range(0,n-i-1):
            num=arr[j]
            if arr[j+1]<arr[j]:
                arr[j]=arr[j+1]
                arr[j+1]=num

arr=[]
for i in range(n):
    v=random.randint(0,n)
    arr.append(v)
#print(arr)
bubbleSort(arr)
#print(arr)
