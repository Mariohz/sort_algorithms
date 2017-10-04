n=10000

def bubbleSort(arr):

    operaciones=0
    iteraciones=0
    flag=0
    for j in range(0,n):
        flag=operaciones
        for i in range(0,n-j-1):
            iteraciones=iteraciones+1   
            if(arr[i] > arr[i+1]):
                a=arr[i]
                arr[i]=arr[i+1]
                arr[i+1]=a
                operaciones=operaciones+1
        if operaciones-flag==0: break
        
        flag=operaciones        
        for k in range(i,j+1,-1):
            iteraciones=iteraciones+1
            if(arr[k] < arr[k-1]):
                a=arr[k]
                arr[k]=arr[k-1]
                arr[k-1]=a
                operaciones=operaciones+1
        if operaciones-flag==0:break 

    print "operaciones"
    print operaciones
    print "iteraciones"
    print iteraciones

archivo= open("rw.txt","r")
contenido= archivo.read()

#print contenido
arr=contenido.split('\n')
arr.pop(n)
#print arr

bubbleSort(arr)
#print arr
