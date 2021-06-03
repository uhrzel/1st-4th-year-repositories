/*Arzel John Zolina week 2 assignment Number 2 */
#include<stdio.h>
#include<stdlib.h>

int main() {
int num, n=1;

printf("-------MULTIPLICATION TABLE--------\n");
printf("Enter a number: ");
scanf("%d", &num);
printf("\n");
printf("*************************\n");
printf("MULTIPLICATION OF %d IS = \n", num);
printf("*************************\n");

for(n; n<=10; n++){
printf("%d x %d = %d \n",num, n, num * n);
}
return 0;
}