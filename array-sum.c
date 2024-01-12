#include <stdio.h>

void main(){
    //read marks of 5 students calculate sum & average using arregate

    float sum = 0, avg;
    int marks[5];

    printf("Enter the marks of 5 students: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i < 5; i++){
        sum = sum + marks[i];
    }

    avg = sum/5;

    printf("\n The sum of the marks of the students is %.2f \n the average is %.2f \n \n", sum, avg);

    
}