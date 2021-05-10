/*
    WACP to read the values for a 2D array from the user and print its main/principal and secondary diagonals.
	    https://clanguage0.blogspot.com/2019/04/program-in-c-to-print-diagonal-elements.html
	    https://www.youtube.com/watch?v=Vwr_iGzLj2o
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
    
    if(row!=col){
        printf("This is not a square matrix!\n");
    }
    else{
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
                printf("%3d", arr[i][j]);
            }
            printf("\n");
        }

        //Print Main Diagonals
        printf("\nThe Main/Primary diagonal is : ");
        for(i=0; i<row; i++) {
            for(j=0;j<col;j++) {
                if(i==j){
                    printf("%3d", arr[i][j]);
                }
            }
        }

        //Print Secondary Diagonals
        printf("\nThe main diagonal is : ");
        for(i=0; i<row; i++) {
            for(j=0;j<col;j++) {
                if ((i + j) == (row - 1)){
                    printf("%3d", arr[i][j]);
                }
            }
        }
    }
    printf("\n\nProgram Finished!\n");
}