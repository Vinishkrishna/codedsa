#include<stdio.h>
int insertionsort(int n,int arr[n]){
    int i,j,k;
    for (int i = 1; i < n; i++)
    {
        k=arr[i];
        int j = i-1;
        for (; j>=0; j--)
        {
            if (arr[j]>k)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            
        }
        arr[j+1]=k;
    }
}
int main()
{
    int arr[6]={2,56,33,91,10,77};
    int n=6;
    insertionsort(n,arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

