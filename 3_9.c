/*3.9.Можно ли написать фрагмент программы на Си, эквивалентный
данному, используя один оператор цикла for с пустым оператором в качестве
тела цикла? 
i = 0; c = getchar(); 
while (c != ’ ’ && c != ’\n’ && c !=’ \t’ && c != EOF) 
 { i++; c = getchar(); }*/
//Ответ: можно
#include <stdio.h>
int main()
{
int c,i=0;
c=getchar();
for (c; c != EOF && c!= ' ' && c!= '\n' && c !='\t';c=getchar(),i++)
{
}
printf("%d\n",i);
return 0;
} 
