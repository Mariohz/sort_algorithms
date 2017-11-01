#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define N 10000

void insertSort(int a[N])
{
	int i=0,j=0,k=0,flag=0;
	int iteraciones=0,operaciones=0;
	int b[N];
	for(i=0;i<N;i++){
	b[i]=a[i];}

	for(i=1;i<N;i++)
	{
	iteraciones++;
		flag=0;
		for(j=0;j<i;j++)
		{		
			if(a[i]<b[j])
			{	
				for(k=i;j<k;k--)
				{	
					b[k]=b[k-1];
					operaciones++;
				}
				b[j]=a[i];
				operaciones++;
				flag=1;
				break;
			}			
		}	
		if(flag==0)
		{
			b[i]=a[i];
			operaciones++;
		}
	}
	//for(i=0;i<N;i++)printf("%d ",b[i]);
	printf("\n iteraciones %d \n", iteraciones);
	printf("operaciones %d \n", operaciones);
}

int main()
{
	int arr[N]={0};
	int i=0,v=0;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		v=rand()%N;
		arr[i]=v;
		//printf("%d ",v);
	
	}
	printf("\n");
	insertSort(arr);
}
