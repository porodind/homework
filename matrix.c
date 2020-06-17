#include <stdio.h>
#include <math.h>
#define N 2

int main()
{

//Задание 1

int a[N][N],i,j,k;
printf ("Задание 1\nМатрица:\n");
k=0;
for (i=0; i!=N; i++)
 {
  for (j=0; j!=N; j++)
   {
    k=k+1;
    a[i][j]=k;
    printf ("%d ", a[i][j]);
   }
  printf ("\n");
 }

//Задание 2
int b[i];
k=0;
printf ("\nЗадание 2\nМатрица исходная:\n");
for (i=0; i!=N; i++)
 {
  k=k+1;
  b[i]=k;
  printf ("%d ", b[i]);
 }
printf ("\n");
printf ("Матрица обратаная:\n");
for (i=N-1; i!=-1; i--)
 {
 printf ("%d ", b[i]);
 }
printf ("\n");

//Задание 3
printf ("\nЗадание 3\nМатрица исходная:\n");
for (i=0; i!=N; i++)
 {
  for (j=0; j!=N; j++)
   {
    printf ("%d ", a[i][j]);
   }
  printf ("\n");
 }
printf ("Матрица треугольная:\n");
k=0;
for (i=0; i!=N; i++)
 {
  for (j=0; j!=N; j++)
   {
    if (j<=i)
    {
    a[i][j]=0;
    }
    else 
    {
    a[i][j]=1;
    }
    printf ("%d ", a[i][j]);//Мб конечно в нужен был треугольки как в примере, но я сделал по заданию (треугольник матрицы в другую сторону).
   }
  printf ("\n");
 }

// Задание 4
int q;
q = pow(N,2);
int t[q][q];
printf ("\nЗадание 4\nИсходная матрица (N^2):\n");
k=0;
for (i=0; i!=q; i++)
 {
  for (j=0; j!=q; j++)
   {
    
    t[i][j]=0;
    printf ("%d ", t[i][j]);
   }
  printf ("\n");
 }
////Змейка цикл
k=0;
int r=0;
int o=0;
int p=q;
int g=1;
i=0;
j=0;
for (j=o; j!=(p-g); j++) ///враво
{
k=k+1;
t[i][j]=k;
}
for (i=o; i!=(p-g); i++)//вниз
{
k=k+1;
t[i][j]=k;
}
for (j=(q-g); j!=o; j--)///влево
{
k=k+1;
t[i][j]=k;
}
for (i=(q-g); i!=o; i--)//вниз
{
k=k+1;
t[i][j]=k;
}
o=o+1;
i=i+1;
j=j-1;
for (j=o; j!=(p-g); j++) ///враво
{
k=k+1;
t[i][j]=k;
}
o=o+1;
i=i+1;
j=j-1;
for (i=o; i!=(p-g); i++)//вниз
{
k=k+1;
t[i][j]=k;
}
for (j=(q-g); j!=o; j--)///влево
{
k=k+1;
t[i][j]=k;
}

printf ("Змейка: \n");

//Вывод змейки
for (i=0; i!=q; i++)
 {
  for (j=0; j!=q; j++)
   {
    printf ("%d ", t[i][j]);
   }
  printf ("\n");
 }

return 0;
}
