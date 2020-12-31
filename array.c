#include<stdio.h>

void main()
{
    int array1[10];
    int sum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&array1[i]);
    }
   for(int i=0;i<10;i++){
       sum = sum + array1[i];
        
    }

    printf("%d",sum);
}