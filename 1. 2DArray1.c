/*
    WACP to read a 2D array from the user and display it.
	    https://beginnersbook.com/2014/01/2d-arrays-in-c-example/
	    https://www.youtube.com/watch?v=KUS3bQ6PJrA
*/

#include<stdio.h>

const int MAX_SIZE = 10;

void main(){
    //Declaring the 2D Array
    int arr[MAX_SIZE][MAX_SIZE];          
    int row,col,i,j;
    
    //Reading the array order
    printf("Enter the number of rows and columns : \n");
    scanf("%d%d",&row,&col);   
    
    //Reading values for 2D array
    printf("Enter the values for the 2-Dimensional array :\n");
    for(i=0; i<row; i++) {
        for(j=0;j<col;j++) {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    //Printing the 2D array
    printf("The 2-Dimensional array elements are :\n");
    for(i=0; i<row; i++) {
        for(j=0;j<col;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nProgram Finished!!\n");
}
