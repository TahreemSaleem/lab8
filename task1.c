#include <stdio.h>
#define SIZE 1000

int average(int ar[],int size);
int max(int ar[],int size);
int even(int ar[],int size);
int main()
{ int n; int arr[SIZE]; int i;
    printf("enter array size");
    scanf("%d",&i);
    for (n=0; n<i ;n++)
        {
            printf("enter the value for arr[%d]",n);
            scanf("%d", arr[n]);
        }
    printf("the greatest number in the array is : %d", max(arr,SIZE));
    printf("the average of array is:%d", average(arr,SIZE));
    printf("the even is %d", even(arr,SIZE));
    return 0;
}
int max(int ar[],int size)
{ int m;int i;
    m=ar[0];
    for (i=1;i<size;i++)
    {if (ar[i]>m)
    m=ar[i];
    }
    return m;
}
int average(int ar[],int size)
{
    int i,total;
    for(i=0;i<size;i++)
    {       total+=ar[i];}
    total=total/size;
    return total;
}

int even (int a[], int size)
{
    int i;
    int j=0;
    for (i=0; i<size; i++)
    {
        if (a[i]%2==0)
            j++;
    }
    
    return j;
}
