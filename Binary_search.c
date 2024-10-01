#include<stdio.h>
int binary_search(int array[],int size,int element){
    int low=0;
    int high=size-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==element){
            return mid;
        }
        if(array[mid]<element){ 
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
    
}
int main(int argc, char const *argv[])
{
    int arr[]={2,6,8,11,13,15,23,25,28,35};
    int size=sizeof(arr)/sizeof(int);
    int element=13;
    int search_index=binary_search(arr,size,element);
    printf("The element %d found at index %d.\n",element,search_index);
    printf("By: Raghav");
    return 0;
}
