import random
n=10000

def insertSort(arr):
    arr2=[]
    arr2.append(arr[0])
    for i in range(1,len(arr)):
        flag=0
        for j in range(0,i):
            if arr[i] < arr2[j]:
                arr2.insert(j,arr[i])
                flag=1
                break
        if flag==0:
            arr2.insert(len(arr2),arr[i])
   #print arr2

arr=[]
for i in range(n):
    v=random.randint(0,n)
    arr.append(v)
#print(arr)
insertSort(arr)

