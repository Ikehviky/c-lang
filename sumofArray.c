#include <stdio.h>

int main(){
    int arr1[5], arr2[5], sumArr[5];

    printf("Enter first set of array: ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr1[i]);
    }

    printf("\n\n Enter second set of array: ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < 5; i++){
        sumArr[i] = arr1[i] + arr2[i];

        printf("\n %d + %d = %d \n", arr1[i], arr2[i], sumArr[i]);
    }
}