#include<stdio.h>

int display(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void  insertion_sort(int arr[],int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=key;
    }


}

int main(int argc, char const *argv[])
{
    int arr[]={54, 26, 93, 17, 77, 31, 44, 55 , 20};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    insertion_sort(arr,size);
    display(arr,size);
    printf("By: Raghav");
    return 0;
}
