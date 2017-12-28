#include <stdio.h>
#include<stdlib.h>

int p[10];
int main()
{
    int st[100],en[100],w[100];
    int x,y,n,i,j,G,k,node,edge;
    printf("How many nodes? ");
    scanf("%d",&x);
    printf("how many edges?");
    scanf("%d",& y);
    printf("Enter edge:");
    for(i=0;i<y;i++)
    {
        printf("\nstart:");
        scanf("%d",&st[i]);
        printf("\nend:");
        scanf("%d",&en[i]);
        printf("\nweight:");
        scanf("%d", &w[i]);
    }
    bubblesort(st,en,w,n);
    Kruskal(G);
    return 0;
}
int bubblesort(int st[],int en[],int w[],int n)
{
    int i, j,x,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=n;j>i;j--)
        {
            if(st[j]>st[j-1])
            {
                temp=st[j];
                st[j]=st[j-1];
                st[j-1]=temp;

                temp=en[j];
                en[j]=en[j-1];
                en[j-1]=temp;

                temp=w[j];
                w[j]=w[j-1];
                w[j-1]=temp;


            }
        }
    }
    printf("\nstart:");
    for(i=0;i<n;i++)
    {
        printf(" %d",st[i]);
    }

    printf("\nend:");
    for(i=0;i<n;i++)
    {
        printf(" %d",en[i]);
    }
    printf("\nweight:");
    for(i=0;i<n;i++)
    {scanf("%d",&n);
        printf(" %d",w[i]);
    }
 Make_set(x);
}
int Make_set(int x)
{
    int i;
    x=p[x];
    Find_set(x);
}
int Find_set(int x)
{
    while(x!=p[x])
        x=p[x];
    return x;
}
void Union(int x,int y)
{
    int root,rootx,rooty;
    rootx=Find_set(x);
    rooty=Find_set(y);
    if(rootx=rooty)
        return;
    else
    p[x]=p[y];
}
int Kruskal(int G)
{
    int u,v,A;
    Make_set(v);
    if(Find_set(u)!=Find_set(v))
    {
        Union(u,v);
    }
    printf("selected edge:");
    for(i=0;i<y;i++)
    {

    }
    return A;
}
