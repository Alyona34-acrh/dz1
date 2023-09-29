/*3.12. Что напечатает следующая программа? */
# include <stdio.h> 
main() 
{ 
int x, y, z; 
x = y = 0; 
while ( y < 10 ) ++y; x += y; 
printf ("x = %d y = %d\n", x, y); 
x = y = 0; 
while ( y < 10 ) x += ++ y; 
printf (" x= %d y = %d\n", x, y); 
y = 1; 
while ( y < 10 ) { x = y ++; z = ++y;} 
printf ("x = %d y = %d z = %d\n", x, y, z); 
for ( y =1; y < 10; y++ ) x = y; 
printf (" x= %d y = %d\n", x, y); 
for ( y = 1; ( x = y ) < 10; y++ ); 
printf ("x = %d y = %d\n", x, y); 
for ( x = 0, y = 1000; y > 1; x++, y /= 10 ) 
printf ("x = %d y = %d\n", x, y); 
}
Ответ:
x=10 y=10
x=0 y=1000
x=1 y=100
x=2 y=10