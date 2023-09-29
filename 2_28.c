#include <math.h>
#include <ctype.h>
int main ()//СДВИГ ВПРАВО
{
int a[32];
int i,k1,k,q,n,j;
int c;
n=0;
printf("ввести целое число\n");
c=getchar();
	while (isdigit(c))//Ввод числа 
    {
        a[n]=c-48;
        //printf("a[%d]=%d\n",n,a[n]);
		n++;
        c=getchar();
    }
   // printf("n=%d\n",n);
    printf("Введите количество смещений\n");
scanf("%d",&k1);
printf("k mod n=%d\n",k1 % n);
k= k1 % n;
//Анализ сдвигов.перемещение.
if (k!=0)
{
	for  (i=0;i<=k-1;i++)
    { 
        c=a[n-1];
        for (j=n-1;j>=1;j--)
        {
            a[j]=a[j+1];
            
        }
    a[0]=c;
 }
}
for (i=0;i<=n-1;i++)
{
    printf("%d",a[i]);
}
return 0;
}