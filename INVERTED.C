#include<stdio.h>
#include<conio.h>

int main()
{clrscr();
int n;
printf("ENter the value of rows:\n");
scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {   for(int k=1;k<=i-1;k++)
 {printf(" ");}
   for(int j=1;j<=2*n-(2*i-1);j++)
   {
    printf("*");
     }


 printf("\n");
 }
 getch();
 return 0;
}
