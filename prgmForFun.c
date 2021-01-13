#include<stdio.h>

void main(){

int categoryChoice,firstN,secondN;
printf("Welcome To My Calculator\n");
printf("Please select the Operation....\n");
printf("1.Add   2.Subtract  3.Multiply  4.Divide\n");
scanf("%d",&categoryChoice);
switch(categoryChoice)
{
    case 1:
    printf("Enter two numbers\n");
    scanf("%d",&firstN);
    scanf("%d",&secondN);
    printf("Sum of %d and %d is %d\n",firstN,secondN,(firstN+secondN));
    break;
    case 2:
    printf("Enter two numbers\n");
    scanf("%d",&firstN);
    scanf("%d",&secondN);
    printf("Subtract of %d and %d is %d\n",firstN,secondN,(firstN-secondN));    
    break;
    case 3:
    printf("Enter two numbers\n");
    scanf("%d",&firstN);
    scanf("%d",&secondN);
    printf("Multiplication of %d and %d is %d\n",firstN,secondN,(firstN*secondN));    
    break;
    case 4:
    printf("Enter two numbers\n");
    scanf("%d",&firstN);
    scanf("%d",&secondN);
    printf("Division of %d and %d is %d\n",firstN,secondN,(firstN/secondN));    
    break;
    
    default:
    printf("Wrong Input\n");
}
}