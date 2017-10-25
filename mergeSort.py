import random
n=10000

def sort(arr,l,m,tamSubListas,tamSubListas2):
    arr3=[]
    arr3=arr[:]
    ln=l
    m0=m
    l0=l

    for i in range(0,(m-l)*2):
        if arr3[l]<=arr3[m]:
            arr[ln]=arr3[l]
            ln=ln+1
            if l+1<m0:
                l=l+1
            else:
                for j in range(m,m0+tamSubListas2):#faltan 2do lado de la lista#*******
                    arr[ln]=arr3[m]
                    m=m+1
                    ln=ln+1   
                return arr 
        else:
            arr[ln]=arr3[m]
            ln=ln+1
            if m+1< m0+tamSubListas2:
                m=m+1
            else:
                for j in range(l,l0+tamSubListas):
                    arr[ln]=arr3[l]
                    l=l+1
                    ln=ln+1
                return arr
    return arr

def mergeSort(arr):
    i=0
    j=0
    k=0
    it=0
    entero=0
    residuo=0
    arr2=[]
    #arr2.append(arr[0])
    arr2=arr[:]
#####
    #if n==1:break
    while 2**i<n:
        i=i+1#numero de veces que ejecuta el ciclo principal
    for j in range(0,i):
        k=2**j#tamano de sub listas
        entero=n//k #numero de sub listas
        residuo=n%k# tamano de lista residuo
        l=0
        for j in range(0, entero/2):
            print(l) 
            arr2=sort(arr2,l,l+k,k,k) 
            l=l+2*k 
           # print("arreglo", arr2)###hasta aqui hace para potencias de 2
    print("residuo", residuo)
    if residuo>0:
        arr2=sort(arr2,0,k,k,residuo)
    print(arr2) 
#####
arr=[]
for i in range(n):
    v=random.randint(0,n)
    arr.append(v)
print(arr)    
mergeSort(arr)
