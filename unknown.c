#include<stdio.h>
#include<stdbool.h>

bool Fnum(int num); //Definition 

int main() {
printf("%d", Fnum(1) );   // print true if your number input is 0,1,2,8,9 
}

bool Fnum(int num)
{
if(num % 10 <= 2 || num % 10 >= 8)
return true; // return type for true
else
return false; //return type for false
} 
