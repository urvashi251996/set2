#include<stdio.h> 

int main(){

           int i1,i2,rem,i;
           scanf("%d",&i1);
           scanf("%d",&i2);
           printf("\n The Even numbers between %d and %d are ",i1,i2); 

           for(i=i1+1; i<i2; i++){

               rem = i % 2;

               if(rem == 0)

               printf("\n%d",i);

           }

    return 0; 

    } 