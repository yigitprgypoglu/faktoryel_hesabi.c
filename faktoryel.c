#include <stdio.h>
#include  <stdlib.h>
int main()
{

//faktoryel hesabi
int i,sayi;
int faktoryel=1;

printf("faktoriyeli alinacak sayi:");
scanf("%d",&sayi);
for(i=1;1<=sayi;i++)
{
    faktoryel=faktoryel*i;
}
printf("sonucunuz:%d");
return 0;
}
