#include <stdio.h>


int main()
{
float a,b,d;
int c,k=1;
while (k == 1)
{
printf ("Введите два числа для математической операции (через пробел):");
scanf ("%f%f", &a,&b);
printf ("1 - СЛОЖЕНИЕ\n2 - ВЫЧИТАНИЕ\n3 - УМНОЖЕНИЕ\n4 - ДЕЛЕНИЕ\nВыберите операцию:"); 
scanf ("%d", &c);
if (c == 1)
{d=a+b;}
if (c == 2)
{d=a-b;} 
if (c == 3)
{d=a*b;}
if (c == 4)
{d=a/b;}
printf ("Результат = %f", d);
printf ("\nПосчитать еще что-либо? (Да=1, Нет=0):");
scanf ("%d", &k); 
} 
return 0;
}
