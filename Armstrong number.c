
#include<stdio.h>
int main()
{
int n,d,s=0,t;
printf("Eneter the number");
scanf("%d",&n);
t=n;
while(n>0)
{
d=n%10;
s=s+d*d*d;
n=n/10;
}
if(s==t)
printf("Number is Armstrong Number");
else
printf("Number is not Armstrong Number");
return 0;
}
