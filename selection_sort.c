#include<stdio.h>
int display(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void selection_sort(int array[],int n){
    int indexofmin;
        int temp; 
    for(int i=0;i<n;i++){
        int indexofmin=i;
        for (int j = i+1; j < n; j++)
        {
            if(array[j]<array[indexofmin]){
                indexofmin=j;
            }
        }
        temp=array[i];
        array[i]=array[indexofmin];
        array[indexofmin]=temp;
     }

}


int main(int argc, char const *argv[])
{
    int a[]={6,2,7,4,3,1,5};
    int size=sizeof(a)/sizeof(int);
    display(a,size);
    selection_sort(a,size);
    display(a,size);
    printf("By: Raghav");
    return 0;
}
