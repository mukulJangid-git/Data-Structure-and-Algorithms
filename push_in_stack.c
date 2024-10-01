#include<stdio.h>
void display(int array[] ,int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void push(int stack[],int element,int top, int Max){
    if(top==Max-1){
        printf("stack overflow!");
    }
else{
    stack[top]=element;
    printf("Element is inserted.");
}

}

int main()
{
    int st[10]={1,2,3};
    push(st,4,2,10);
    push(st,5,4,10);
    display(st,7);
    return 0;
}
