#include<stdio.h>
int linear_search(int array[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(array[i]==element)
        return 1;
    }
    return -1;
    
}
int main(int argc, char const *argv[])
{
    int arr[]={2,34,54,23,65,575,45,33,45,3534,64};
    int size=10;
    int element=3534;
    int search_index=linear_search(arr,size,element);
    printf("The element %d found at index %d.\n",element,search_index);
    printf("By: Raghav");
    return 0;
}




