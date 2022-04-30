#include<stdio.h>
int binarysearch(int *arr,int low, int high, int key){
    if (low<=high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            return binarysearch(arr,low,mid-1,key);
        }
        else
        {
            return binarysearch(arr,mid+1,high,key);
        }   
    }
    return -1;
}
int main(int argc, char const *argv[]){
    int arr[6]={2,3,4,56,78,90} ;
    int key,low=0,high=6;
    scanf("%d",&key);
    int rev=binarysearch(arr,low,high-1,key);
    if (rev>=0)
    {
        printf("The element is present");
    }
    else
    {
        printf("The element is not present");
    }
    return 0;
}
