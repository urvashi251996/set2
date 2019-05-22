#include<stdio.h>
int main()
{
int rem,d=0,n,num;
scanf("%d",&n);
num=n;
while(n!=0)
{
    rem=n%10;
    d=d*10+rem;
    n/=10;
    
}
if(num==d)
printf("Yes");
else
printf("No");
return 0;
}