#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 10000

int potenciaEnteros(int base, int exponente)
{
	if(exponente==0)return 1;
	int resultado=1,i=0;
	for(i=0;i<exponente;i++)resultado*=base;
	return resultado;
}

int sort(int arr[N],int l,int m, int tamSubListas, int tamSubListas2,int operaciones[])
{	
	int m0=0,l0=0,ln=0,i=0,j=0,c=0;
	ln=l;
    m0=m;
	l0=l;
	int arr3[N];

	for(c=0;c<N;c++)arr3[c]=arr[c];
	

	for(i=0;i<(m-l)*2;i++)
	{
		if(arr3[l]<=arr3[m])
		{
			arr[ln]=arr3[l];
			operaciones[0]++;
			ln++;
			if(l+1<m0)
			{
				l++;
			}
			else
			{
				for(j=m;j<m0+tamSubListas2;j++)
				{
					operaciones[0]++;
					arr[ln]=arr3[m];
					ln++;
					m++;
				}
			return 0;
			}
		}
		else
		{//#
			arr[ln]=arr3[m];
			ln++;
			operaciones[0]++;
			if(m+1<m0+tamSubListas2)
			{
				m++;
			}
			else
			{
				for(j=l;j<l0+tamSubListas;j++)
				{
					operaciones[0]++;
					arr[ln]=arr3[l];
					l++;
					ln++;
				}
				return 0;
			}
		}//#
	}
	return 0;
}

void mergeSort(int arr[N],int iteraciones[], int operaciones[])
{	
	int i=0,j=0,j1=0,k=0,c=0,l=0,z=0;
  	int entero=0,residuo=0;
	int arr2[N];
	for (c=0;c<N;c++)
	{
		arr2[c]=arr[c];
		//printf("%d",arr2[c]);
	}
    
	
	while(potenciaEnteros(2,i)<N)
	{
		i++;//numero de veces que ejecuta el ciclo principal
	}
	
	for(j=0;j<i;j++)
	{
		k=potenciaEnteros(2,j);
		entero=N/k;
		residuo=N%k;
		l=0;
		for(j1=0;j1<entero/2;j1++)
		{
        	//printf("%d",l);
			iteraciones[0]++;
			sort(arr,l,l+k,k,k,operaciones);
			l=l+2*k;
        	//for(z=0;z<N;z++)printf("%d",arr[z]);//potencias de dos
            //printf("\n");
		}
	}
	
	if(residuo>0)
	{	
		iteraciones[0]++;
	 	sort(arr,0,k,k,residuo,operaciones);
	}

//printf("Ordenado");
//for(i=0;i<N;i++)printf("%d ",arr[i]);      
}

int main()
{   
	int arr[N]={0};
	int i=0,v=0;
	int iteraciones[1];
    int operaciones[1];
    iteraciones[0]=0;
	operaciones[0]=0;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		v=rand()%N;
		arr[i]=v;
		//printf("%d ",v);
	}
    printf("\n");
    mergeSort(arr,iteraciones,operaciones);	
	printf("iteraciones %d",iteraciones[0]);
	printf("operaciones %d",operaciones[0]);
}
