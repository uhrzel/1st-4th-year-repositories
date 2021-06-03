/* Arzel John Zolina BSIT SET E
 Number 2. week 3, 4 Laboratory Activities */
#include<stdio.h>
#include <stdbool.h>
bool my_num(int a, int b) {
int c = 20;
if(c == (a + b) )
/*Compare value of c to the given 
 Arguments of value a and b*/
return true;
else
return false;
}
int main() {
int ret = my_num(5,15) ; // Passing the value of a and b to the Function 
printf("%d", ret);
return 0;
}