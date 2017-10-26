import random
n=10


def quickSort(arr, low, high,iteraciones,operaciones):
    pi=0
    iteraciones[0]=iteraciones[0]+1
    if low<high:
        pi=partition(arr,low,high,operaciones)
        quickSort(arr,low,pi-1,iteraciones,operaciones)
        quickSort(arr,pi+1,high,iteraciones,operaciones)

def partition(arr,low,high, operaciones):
    pivot=arr[high]
    i=(low-1)

    for j in range(low,high):
        if arr[j]<=pivot:
            i=i+1
            t1=arr[i]
            arr[i]=arr[j]
            arr[j]=t1
            operaciones[0]=operaciones[0]+1
    t2=arr[i+1]
    arr[i+1]=arr[high]
    arr[high]=t2
    operaciones[0]=operaciones[0]+1
    return (i+1)


arr=[]
iteraciones=[0]
operaciones=[0]
for i in range(n):
    v=random.randint(0,n)
    arr.append(v)
print(arr)
quickSort(arr,0,n-1,iteraciones,operaciones)
print(arr)
print("Iteraciones", iteraciones[0])
print("Operaciones", operaciones[0])
