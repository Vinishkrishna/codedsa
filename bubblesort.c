#include<stdio.h>
int bubblesort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }          
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[7]={22,4,56,899,34,57,68};
    int n=7;
    int rev= bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
