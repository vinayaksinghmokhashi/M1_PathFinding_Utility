#include<stdio.h>

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
 
void mincost(int computer)
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