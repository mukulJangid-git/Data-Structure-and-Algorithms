#include<stdio.h>

int display(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[],int n){
    int x;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                x=array[j];
                array[j]=array[j+1];
                array[j+1]=x;
            }
        }
    }

}
int main()
{
    int a[]={12,34,32,31,24,64,35};
    int size=sizeof(a)/sizeof(int);
    display(a,size);
    bubbleSort(a,size);
    display(a,size);
    printf("By: Raghav");
    return 0;
}



