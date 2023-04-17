#include<stdio.h>
int main()
{
int no, i;
i=1000;

printf("enter the four digit number\n");
scanf("%d",&no);

while(no!=0)
{
printf("%d\t",no/i);
no=no%i;
i=i/10;

}
return 0;
}
