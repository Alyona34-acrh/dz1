
#include <stdio.h>
#include <stdlib.h>//поменять знак у отрицательных элементов массива
int main ()
{
	int N;//разменость массива
	int i;
	printf ("Введите длину массива\n");
	scanf("%d",&N);
	 int* Array=(int*)malloc(N);//создаю указатель на массив(указатель на первый элемент)
	 //определяем размерность
	 for ( i=0;i<N;i++)
		 {
		     scanf ("%d",&Array[i]);
		     if (Array[i]<0) Array[i]=-Array[i];
		 }
		 printf ("Result:\n");
		 for ( i=0;i<N;i++)
		 printf ("%d\t",Array[i]);	
	return 0;
	
}
