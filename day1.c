/***************************************************************************************
 * File         :   leastfrequentnum.c
 * Description  :   C Program to find the integer that appears the least number of times 
 * Author       :   Melissa Manoj Thondoli
 * Version      :   1.0
 * Date         :   19/09/2022
 * *************************************************************************************/

#include<stdio.h>

int main(){

    int n,i,j;
    printf("\nEnter the number of integers:  ");
    scanf("%d",&n);

    int array[n];
    printf("\nEnter the integers:  ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int count;
    int times=1;
    int small=array[0];
    int least=array[0];
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(i==0){
            times=count;
        }
        if(count<=times){
            if(count==times){
                if(small>=array[i]){
                    small=array[i];
                    least=array[i];
                    times=count;
                }
                
            } 
            else{
                    times=count;
                    least=array[i];
                }
        }
        
    }
    printf("\nThe least appearing is : %d",least);
    return 0;
}