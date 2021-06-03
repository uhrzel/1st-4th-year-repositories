/*
create a program that will print the length of the word "the end"
if the input of two numbers is above square root of 7.all input must be a positive
else print try again*/

#include<stdio.h>
#include<string.h>
#include<math.h>
 
int main()
{
    int num1,num2;
    
    printf("Enter first number: ",num1);
    scanf("%d",&num1);
    printf("Enter second number: ",num2);
    scanf("%d",&num2);
     
    if(num1 > sqrt(7) && num2 > sqrt(7))
    {   
     printf("length of the end: %d",strlen("The end"));
    }
    else if(num1 < 0 && num2 < 0)
    { 
    printf("try again");
    }
    return 0;
}
