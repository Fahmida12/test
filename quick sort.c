#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[1000000];
int quicksort(int p,int q);
int partition(int m,int p);
int interchage(int a[] ,int i,int j);

int main()

{
    clock_t start,end;
    double time;
   int n,s,m,i;
   printf("how many num to sort?");
    scanf("%d", &n);
    for( i = 0; i < n; i ++ )
    {
        a[i]=rand()%1000;

    }
    s=0;
    m=n-1;
     start=clock();
    quicksort(s,m);

 printf("\nSorted: ");
    for( i = 0; i < n; i ++ )
    {
        printf("%d ", a[i]);
    }
    end=clock();
    time=((double)(end-start))/((double)CLOCKS_PER_SEC);
    printf("time =%.15lf",time);
    return 0;
}

int quicksort(int p,int q)
{
    int j;
    if(p<q)
    {
        j=partition(p,q);
        quicksort(p,j-1);
        quicksort(j+1,q);
    }
    //return 0;
}

int partition(int m,int p)

{

    int v,i,j,temp;
    v=a[m];
    i=m+1;
    j=p;
    while(a[i]<v && i<=p)
    i++;
    while(a[j]>v && j>=m)
    j--;
    while(i<j)
    {

      interchage(a,i,j);
      i++;
      j--;
    while(a[i]<v)
    i++;
    while(a[j]>v)
    j--;
    }
    a[m]=a[j];
    a[j]=v;
    return j;

}
int interchage(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
