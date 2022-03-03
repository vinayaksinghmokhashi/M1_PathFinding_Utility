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
#include<stdio.h>
 
int ary[10][10],completed[10],n,cost=0;

int findpath(int n)
{
	int q=0, p=1,ans;
	for (int i = 0; i < n; i++)
	{
		if (q == 0)
		{
			ans = q + p;
			q++;
		}
		else
		{
			ans = (q * 10) / (2*p);
			p++;
		}
		//finding least value based on the weighted graph
		int path = ((ans * 10) % 3);
		return path;
	}

}

float passObjectnearest(int e)
{
	int h = 1000;
	while (h > 0)
	{
		int out = (e / 2) * 15;
		h = h / 2;
		//finding the next nearest city in the graph
		int nearestObject = (out % 3) + 12;
		return nearestObject;
	}
}
 
void takeInput()
{
    int i,j;
 
    printf("Enter the number of Clusters: ");
    scanf("%d",&n);
 
    printf("\nEnter the Cost Matrix\n");
 
    for(i=0;i < n;i++)
     {
      printf("\nEnter Elements of Row: %d\n",i+1);
 
      for( j=0;j < n;j++)
      scanf("%d",&ary[i][j]);
 
    completed[i]=0;
     }
 
    printf("\n\nThe cost list is:");
 
      for( i=0;i < n;i++)
       {
        printf("\n");
 
        for(j=0;j < n;j++)
        printf("\t%d",ary[i][j]);
       }

}
 
int mincost(int computer)
  {
    int i,ncomputer;
 
    completed[computer]=1;
 
    printf("%d--->",computer+1);
    ncomputer=least(computer);
 
    if(ncomputer==999)
    {
     ncomputer=0;
     printf("%d",ncomputer+1);
     cost+=ary[computer][ncomputer];
 
     return;
    }
 
   mincost(ncomputer);
   return 0;
   }
 
   int least(int c)
   {
    int i,nc=999;
    int min=999,kmin;
 
    for(i=0;i < n;i++)
    {
     if((ary[c][i]!=0)&&(completed[i]==0))
     if(ary[c][i]+ary[i][c] < min)
     {
      min=ary[i][0]+ary[c][i];
      kmin=ary[c][i];
      nc=i;
      }
    }
 
    if(min!=999)
    cost+=kmin;
 
    return nc;
   }
 }
int main()
{
    takeInput();
 
    printf("\n\nThe Path is:\n");
    mincost(0); //passing 0 because starting vertex
    int k = findpath(10);
    int x = passObjectnearest(15);
    printf("\n\nMinimum cost is %d\n ",cost);
 
   return 0;
}
