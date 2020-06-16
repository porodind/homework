#include <stdio.h>

int main()
{
int a,k;
char i, b;
a = 0x589AF8DB;
k = 0;
b = 0;
printf ("Исходные байты: %x\n", a);
printf ("Вывод байтов:\n");
for (i=0; i!=32; i=i+8)

 {b = ((a >> i) & 0x000000FF);
  k=k+1;
  printf ("%d", k);
  printf (" байт = %x\n", b);
 }
a = ((a & 0x5800F8DB) | 0x58DDF8DB); 
printf ("Замена 3 байта:  %x\n", a);
return 0;
}
