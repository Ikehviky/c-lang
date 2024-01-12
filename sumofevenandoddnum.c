#include<stdio.h>
/*
 *    main: read an array of 10 integers and count total number of even and odd elements
 *   return 0
*/

void main()
{

    // assign variables 
    int num[10];
    int even_count = 0;
    int odd_count = 0;

    // collect input of numbers
    printf("Enter any number of your choice: ");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    // check for even and odd numbers

    for(int i = 0; i < 10; i++){

        if( num[i] % 2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }

    printf("even numbers = %d\n", even_count);
    printf("odd number = %d", odd_count);

}