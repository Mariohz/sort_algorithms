import random
n=10000

def insertSort(arr):
    iteraciones=0
    operaciones=0
    arr2=[]
    arr2=arr[:]
    for i in range(1,n):
        iteraciones=iteraciones+1
        flag=0
        for j in range(0,i):
            if arr[i] < arr2[j]:
                for k in range(i,j,-1):
                    arr2[k]=arr2[k-1]
                    operaciones=operaciones+1
                arr2[j]=arr[i]
                operaciones=operaciones+1
                flag=1
                break
        if flag==0:
            arr2[i]=arr[i]
            operaciones=operaciones+1
   
    print("iteraciones", iteraciones)
    print("operaciones", operaciones)
   # print(arr2)

arr=[]
for i in range(n):
    v=random.randint(0,n)
    arr.append(v)
#print(arr)
insertSort(arr)

