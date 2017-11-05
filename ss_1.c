#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j;
FILE *fp = fopen("ss.txt","w");
for(i=1;i<=100000;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
break;
}
}
if(j==i)
{
fprintf(fp," %d",i);
}
}
printf("\n");
system("pause");
return 0;
} 
