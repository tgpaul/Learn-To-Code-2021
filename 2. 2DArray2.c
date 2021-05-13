/*
    WACP to read the values for a 2D array from the user and print its main/principal and secondary diagonals.
	    https://clanguage0.blogspot.com/2019/04/program-in-c-to-print-diagonal-elements.html
	    https://www.youtube.com/watch?v=Vwr_iGzLj2o
*/

#include<stdio.h>
#define MAX_SIZE 20

int main(){
    //Declaring the 2D Array
    int arr[MAX_SIZE][MAX_SIZE];          
    int row,col,i,j;
    
    //Reading the array order
    scanf("%d%d",&row,&col);   
    
    if(row!=col){
        printf("Error\n");
    }
    else{
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
       
        //Print Main Diagonals
        for(i=0; i<row; i++) {
            for(j=0;j<col;j++) {
                if(i==j){
                    printf("%d ", arr[i][j]);
                }
            }
        }
        printf("\n");

        //Print Secondary Diagonals
        for(i=0; i<row; i++) {
            for(j=0;j<col;j++) {
                if ((i + j) == (row - 1)){
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }
return 0;
}
