#include <stdio.h>
int main()
{
   int i, num, p = 0;
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Yes");
   }
   else
   {
      printf("No");
   }
}