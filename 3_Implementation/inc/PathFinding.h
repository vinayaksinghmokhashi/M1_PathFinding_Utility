#ifndef PathFinding_H_
#define PathFinding_H_
#include<stdio.h>

int ary[10][10],completed[10],n,cost;
int findpath(int n);
float passObjectnearest(int e);
int takeInput();
int mincost(int computer);
int least(int c);
int findobject(int source);
int nearest_k(int rom);
#endif
