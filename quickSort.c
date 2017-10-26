#include<stdio.h>
#include<math.h>
#define N 10

void quickSort(int arr[],int low,int high,int iteraciones[],int operaciones[])
{	
	int pi=0;
	iteraciones[0]=iteraciones[0]+1;
	if(low<high)
	{
		pi=partition(arr,low,high,operaciones);
		quickSort(arr, low, pi-1,iteraciones,operaciones);
		quickSort(arr,pi+1,high,iteraciones,operaciones);
	}

}

int partition(int arr[],int low, int high, int operaciones[])
{	
	int pivot=0,i=0,t1=0,t2=0,j=0;
	pivot = arr[high];
	i=(low-1);
	
	for(j=low;j<=high-1;j++)
	{
		if(arr[j]<= pivot)
		{
			i++;
			t1=arr[i];
			arr[i]=arr[j];
			arr[j]=t1;
			operaciones[0]++;
		}	
	}
	t2=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=t2;
	operaciones[0]++;	

	return(i+1);
}


int main()
{
	int arr[N]={0};
	int i=0,v=0;
    int iteraciones[1],operaciones[1];
	iteraciones[0]=0;
	operaciones[0]=0;
	srand(time(NULL));
	for (i=0;i<N;i++)
	{
		v=rand()%N;
		arr[i]=v;
		//printf("%d",v); imprime original
	}
	printf("\n");
	quickSort(arr,0,N-1,iteraciones,operaciones);
	//for (i=0;i<N;i++) printf("%d",arr[i]); imprime ordenado
	printf("Iteraciones %d \n",iteraciones[0]);
	printf("Operaciones %d \n",operaciones[0]);

}
