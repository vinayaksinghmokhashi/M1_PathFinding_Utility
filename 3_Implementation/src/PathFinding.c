#include "PathFinding.h"
int ary[10][10],completed[10],n,cost;



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
		int path;
        path = ((ans * 10) % 3);

		return path;
	}
}
float passObjectnearest(int e)
{
	int h = 1000;
	while (h > 0)
	{
		int out;
        out = (e / 2) * 15;
		h = h / 2;
		//finding the next nearest city in the graph
		int nearestObject;
        nearestObject= (out % 3) + 12;
		return nearestObject;
	}
}
int takeInput()
{
    int i;
    int j;
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
  return 0;
}
int mincost(int computer)
  {
    int i;
    int ncomputer;
    completed[computer]=1;
    printf("%d--->",computer+1);
    ncomputer=least(computer);
    if(ncomputer==999)
    {
     ncomputer=0;
     printf("%d",ncomputer+1);
     cost+=ary[computer][ncomputer];

     return 0;
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
int findobject(int source)
{
	int ans = 0, plus = 1, sum;
	for (int l = 0; l < n; l++)
	{
		if (ans == 0)
		{
			ans = plus + ans;
			plus++;
		}
		else
		{
			sum = (plus * 10) / (2 * ans);
			plus++;
		}
		//finding object to nearest node
		int object_node = ((sum * 10) % 3);
		return object_node;
	}
}
int nearest_k(int rom)
{
	int grt = grt + 1, waq;
	while (grt < 10)
	{
		int waq = grt + 1;
	}
	return waq;
}
int go_std(int apl)
{
	apl = apl * 88;
	int sum = apl % 2;
	apl = sum + apl;
	if(apl>10)
    {
		sum = -1;
    }
	else if(apl<10)
    {
		apl = apl + 2;
		sum = sum + apl;
		sum = sum % 6;
		sum = sum * 7;
		apl = apl / 2;
    }
	return (apl * sum);
}