#include<stdio.h>
 int main()
{
takeInput();
 
printf("\n\nThe Path is:\n");
mincost(0); //passing 0 because starting vertex
 
printf("\n\nMinimum cost is %d\n ",&cost);
 
return 0;
}