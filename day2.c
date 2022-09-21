/***************************************************************************************
 * File         :   reversecharbtwn.c
 * Description  :   C Program to reverse the sequene of characters of the string between n1 and  n2
 * Author       :   Melissa Manoj Thondoli
 * Version      :   1.0
 * Date         :   21/09/2022
 * **************************************************************************************/

#include<stdio.h>
#include<string.h>
void reverseBetween(char [], int, int, char []);

void reverseBetween(char string[], int n1, int n2, char reverseString[]){
    int i=0,j=0,k=0;
    for(i=0;i<n1-1;i++){
        reverseString[i]=string[i];
    }
    for(j=i;j<n2;j++){
        reverseString[n2-1-k]=string[j];
        k++;
    }
    for(k=j;k<strlen(string);k++){
        reverseString[k]=string[k];
    }
    reverseString[k]='\0';  
}

int main(){
    char string[30],reverseString[30];
    int n1,n2;
    printf("\nEnter a string:  ");
    scanf("%s",string);
    printf("\nEnter n1 and n2:  ");
    scanf("%d%d",&n1,&n2);
    reverseBetween(string,n1,n2,reverseString);
    printf("%s",reverseString);
    return 0;
}