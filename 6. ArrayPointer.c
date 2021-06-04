/*
    Write a C Program to read an array and display it, using both the index method and traversal using pointers.
        https://www.programiz.com/c-programming/examples/access-array-pointer
        https://www.youtube.com/watch?v=dWMXHjsJiXY
*/

#include<stdio.h>


int main()
{
    int i,n;
    int array[20];

    //Read array length
    scanf("%d",&n);                         

    //Read array
    for( i=0 ; i<n ; i++ )
        scanf("%d",&array[i]);
    
    //Index Method
    printf("DISPLAYING USING INDEX:");
    for( i=0 ; i<n ; i++)
        printf(" %d",array[i]);
    printf("\n");
    //Pointer Method
    printf("DISPLAYING USING POINTERS:");
    for( i=0 ; i<n ; i++ )
        printf(" %d" ,*(array + i));
    return 0;
}
