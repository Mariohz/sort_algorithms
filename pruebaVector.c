#include<stdio.h>
#include<stdlib.h>

int* vect(int A[])
{
	int M[2];
	M[0]=A[1];
	M[1]=A[0];
	return M;	
}


int main()
{

	int* B[2];
	B[0]=0;
	B[1]=1;
	*B=vect(B);
	printf("%d",&B);

return 0;
}

