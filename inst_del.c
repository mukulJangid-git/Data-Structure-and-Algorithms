#include<stdio.h>
 int display(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int delete(int array[],int element,int size){
    for (int i = 0; i < size-1; i++)
    {
        if(array[i]==element){
            continue;
        }
        printf("%d ",array[i]);
    }
    
}

int index_insert(int array[],int element, int index,int size,int capasity){
    if(size==capasity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        array[i+1]=array[i]; //shifting elements.
    }
    array[index]=element;
    return 1;
    
    }
int main()
{
    int arr[10]={0,2,6,8,10};
    display(arr,5);
    int size=6,index=2,element=4;
    index_insert(arr,element,index,size,100);
    display(arr,6);
    delete(arr,10,7);
    printf("\n");
    printf("By: Raghav");
    return 0;
}
