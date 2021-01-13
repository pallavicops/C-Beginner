#include<stdio.h>
int sum(int firstN, int secondN);
void main(){

    int total, a, b;
    scanf("%d %d",&a,&b);
    total = sum(a,b);
    printf("%d",total);
}

int sum(int firstN, int secondN){

    return (firstN+secondN);
}