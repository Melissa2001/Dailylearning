 /***************************************************************************************
 * File         :   stack.c
 * Description  :   C Program to push and pop from a stack 
 * Author       :   Melissa Manoj Thondoli
 * Version      :   1.0
 * Date         :   21/09/2022
 * *************************************************************************************/

#include<stdio.h>
void push(int [], int, int);
void pop(int []);
void display(int []);

int top=-1;

void push(int stack[], int max, int item){
    if(top!=max-1){
        top++;
        stack[top]=item;
    }
    else{
        printf("\nStack overflow");
    }
}

void pop(int stack[]){
    if(top!=-1){
        top--;
    }
    else{
        printf("\nStack empty!");
    }
}

void display(int stack[]){
    int i;
    printf("\n");
    if(top==-1){
            printf("\nStack empty!");
    }
    else{
        for(i=0;i<top+1;i++){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int max,option,item;
    printf("\nEnter the maximum number of elements in the stack:  ");
    scanf("%d",&max);
    int stack[max];

    do{
        printf("\nEnter the operation you want to perform:  ");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Stop");
        scanf("%d",&option);

        switch(option){
            case 1:
                printf("\nEnter the item to push:  ");
                scanf("%d",&item);
                push(stack,max,item);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                break;

        }

    }while(option!=4);

    return 0;

}