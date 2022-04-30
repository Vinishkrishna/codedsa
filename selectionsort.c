#include<stdio.h>
void selectionsort(int n,int arr[n]){
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        int j = i+1
        for (; j < n; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
            
        }
        int k=arr[i];
        arr[i]=arr[min];
        arr[min]=k;
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[5]={2,98,25,41,10};
    int n=5;
    selectionsort(n,arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}
