/*
    Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each ouccurence of that element with its position(s).
	    https://teachics.org/programming-examples/data-structures-using-c-programs/search-an-element-in-the-2-dimensional-array/
	    https://www.youtube.com/watch?v=vOsUzpZz2xU
*/

#include<stdio.h>
#define MAX_SIZE 20

void main(){
    //Declaring the 2D Array
    int arr[MAX_SIZE][MAX_SIZE];          
    int row,col,i,j,item,flag=0;
    
    //Reading the array order
    scanf("%d%d",&row,&col);   
    
    //Reading values for 2D array
    for(i=0; i<row; i++) {
        for(j=0;j<col;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    /*
    //Printing the 2D array
    for(i=0; i<row; i++) {
        for(j=0;j<col;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    */

    //Read element to be searched for
    scanf("%d", &item);
    for(i=0; i<row; i++){
        for(j=0;j<col;j++){
            if(arr[i][j] == item){
                printf("Element found at (%d,%d) \n", i, j);
                flag++;
            }
        }
    }

    //Element was never found (implies 'flag' was never incremented. Sooooooo...... 'flag' = 0)
    if(flag==0){
        printf("Element not found\n");
    }
}
