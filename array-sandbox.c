#include <stdio.h>

void main(){
    int a[5], i;

    printf("Enter the array element: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    for(i = 4; i >= 0; i--){
        printf("Array number of %d is %d\n", i,a[i]);
    }
}