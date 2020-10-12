#include <stdio.h>
#include<stdlib.h>



void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *a, int n){
    int i, j, flag;
    flag =1;
    for(i=0; flag && i<n; i++){
            flag = 0;
        for(j=0; j<n-i-1; j++)
            if(a[j+1] < a[j]){
                swap(&a[j+1], &a[j]);
                flag = 1;
            }
    }
}

void printarray(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {5,3,6,7,1,2,4};
    printarray(arr,7);
    bubbleSort(arr,7);
    printarray(arr,7);
    return 0;
}
