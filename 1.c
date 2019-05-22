#include<stdio.h>
int main()
{
int N,K,i,res=1;
scanf("%d%d",&N,&K);
for(i=1;i<=K;i++)
{
res=res*N;

}
printf("%d",res);
return 0;
}
