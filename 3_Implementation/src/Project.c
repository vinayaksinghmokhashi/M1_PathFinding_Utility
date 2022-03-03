/**
 * @file PathFinding.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "PathFinding.h"
int ary[10][10],completed[10],n,cost;

int main()
{   
    int k, x;
    takeInput();
    printf("\n\nThe Path is:\n");
    mincost(0); //passing 0 because starting vertex
    k = findpath(10);
    x = passObjectnearest(15);
    printf("\n\nMinimum cost is %d\n ",cost);

   return 0;

}
