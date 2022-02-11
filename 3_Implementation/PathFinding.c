include<stdio.h>

int ary[10][10],completed[10],n,cost=0;

void takeInput()
{
int i,j;

printf("Enter the number of computers in a cluster: ");
scanf("%d",&n);

printf("\nEnter the Cost Matrix\n");
      for(i=0;i < n;i++)
{
printf("\nEnter Elements of Row: %d\n",i+1);

for( j=0;j < n;j++)
scanf("%d",&ary[i][j]);

completed[i]=0;
}
or(j=0;j < n;j++)
printf("\t%d",ary[i][j]);
 }
}
void mincost(int comp)
{
int i,ncomp;

completed[comp]=1;

printf("%d--->",comp+1);
ncomp=least(comp);

if(ncomp==999)
{
ncomp=0;
printf("%d",ncomp+1);
cost+=ary[comp][ncomp];

return;
or(j=0;j < n;j++)
printf("\t%d",ary[i][j]);
 }
}
void mincost(int comp)
{
int i,ncomp;

completed[comp]=1;

printf("%d--->",comp+1);
ncomp=least(comp);

if(ncomp==999)
{
ncomp=0;
printf("%d",ncomp+1);
cost+=ary[comp][ncomp];

return;
}

mincost(ncomp);
}

int least(int c)
{
int i,nc=999;
nt min=999,kmin;

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

int main()
{
takeInput();

printf("\n\nThe path to reach the final node is:\n");
mincost(0);

printf("\n\nMinimum cost is %d\n ",cost);

return 0;
}