/*Arzel John R. Zolina BSIT SET E
Week 5-9 Assignment Number 1.
*/
#include<stdio.h>

int main() {

int arr[10]  = {1,2,3,4,5,6,7,8,9,10 };
int sum = 0;

printf("=======ELEMENTS==OF==ARRAY=====\n");

for(int j=0; j<10; ++j){
printf("%d ", arr[j] );
printf("\n");
}
printf("\n");

printf("========SUM+OF+RANGED+NUMBERS=======\n");
printf("====================================\n");

for(int i=0; i<10; ++i){
sum+=arr[i] ;
}
printf("Total Sum of Ranged Number is %d ", sum);

return 0;
}