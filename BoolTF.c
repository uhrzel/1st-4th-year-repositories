/*Arzel John R. Zolina BSIT SET E*/
#include<stdio.h>
#include<stdbool.h>
bool testNum(int a, int b, int c){
int counter=1;
int testA = a % 10;
int testB = b % 10;
int testC = c % 10;

if(testA==testB)
counter++;
if(testA==testC)
counter++;
if(testB==testC)
counter++;
if(counter>=2)
return true;

else{
return false;
}
}
int main() {
int a = 13;
int b = 23;
int c = 23;
int comp;
comp = testNum(a, b, c) ;
printf("%d",comp);
return 0;
}