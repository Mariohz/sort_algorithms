#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 10000

void bubbleSort(char s[N][256])
{
	int i=0,j=0,k=0,operaciones=0,iteraciones=0,flag=0;
	char a[256]={0};
	for(i=0;i<N;i++)
	{
		flag=operaciones;
		for(j=0;j<N-i-1;j++)
		{
			iteraciones++;
			if(strcmp(s[j],s[j+1])>0)
			{	
                strcpy(a,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],a);
				operaciones++;
			}
        }
		if(operaciones-flag==0)break;
		
		flag=operaciones;
		for(k=j;k>i+1;k--)
		{
			iteraciones++;
			if(strcmp(s[k],s[k-1])<0)
			{
				strcpy(a,s[k]);
				strcpy(s[k],s[k-1]);
				strcpy(s[k-1],a);
				operaciones++;
			}
		}
		if(operaciones-flag==0)break;
	
    }		
	printf("operaciones %d",operaciones);
	printf("iteraciones %d",iteraciones);

}

int main()
{
	char arr[N][256]={0};
	int i=0,v=0,j=0;
	char str[256];
	
	FILE *f=fopen("rw.txt","r");
	if(!f)
	{
		perror("Error al abrir el archivo");
	}
	
	while(fgets(str,256,f))
	{
		strcpy(arr[i],str);
		//printf("%s",arr[i]);
		i++;
	}
	fclose(f);

	bubbleSort(arr);

	//for(j=0;j<N;j++)
	//{
		//printf("%s",arr[j]);
	//}
	
	return 0;
}
