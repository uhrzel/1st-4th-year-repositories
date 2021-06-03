#include<stdio.h>
int main() 
{
int x, y;

printf("Enter a starting point: ");
scanf("%d", &x);
printf("Enter an ending point: ");
scanf("%d", &y);
for(int i=x;i<y;i++)
{ 
      printf("%d\n", i*i*i); // loop 1*1*1 next 2*2*2 until he reach the ending point which is 10
}
return 0;
}