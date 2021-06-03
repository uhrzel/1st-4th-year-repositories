/*Arzel John Zolina BSIT SET E
Module 4 Week 10-11 Activity
*/
#include <stdio.h>
void swap_value(int *a, int *b, int *c)
{
	//Function to implement swapping
	int temp ; 
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
	
	printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", *a, *b, *c);	
}
int main() {
    int a = 1, b = 2, c = 3;
    
    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, 
    b, c);

    swap_value(&a, &b, &c);

    return 0;
}