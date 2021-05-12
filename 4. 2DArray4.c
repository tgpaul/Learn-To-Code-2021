/*
    WACP to display the product of two 2D arrays. Take values for the 2D arrays from the user.
    	https://followtutorials.com/2012/03/numerical-methods-multiplication-of-two-matrices-using-two-dimensional-array-in-c.html
	    https://www.youtube.com/watch?v=jzdQqoG1tZs
*/

#include<stdio.h>

const int MAX_SIZE = 10;

void main(){
    //Declaring three 2D Arrays
    int arr1[MAX_SIZE][MAX_SIZE],arr2[MAX_SIZE][MAX_SIZE],sum[MAX_SIZE][MAX_SIZE],prod[MAX_SIZE][MAX_SIZE];          
    int row1,col1,row2,col2,i,j,k;
    
    //Reading the array order of first array
    scanf("%d%d",&row1,&col1);   
    
    //Reading values for first 2D array
    for(i=0; i<row1; i++) {
        for(j=0;j<col1;j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    //Reading the array order of second array
    scanf("%d%d",&row2,&col2);   
    
    //Reading values for 2D array
    for(i=0; i<row2; i++) {
        for(j=0;j<col2;j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

/*
    //Printing both the 2D arrays
    for(i=0; i<row1; i++) {
        for(j=0;j<col1;j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row2; i++) {
        for(j=0;j<col2;j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
*/

    //Calculating and printing the product
    if(col1 == row2){                   //No: of columns must be equal to No: of rows of second.
        for(i=0;i<row1;i++){
            for(j=0;j<col2;j++){
                prod[i][j] = 0;
                for(k=0;k<col1;k++)
                    prod[i][j] += arr1[i][k] * arr2[k][j];
                printf("%d ",prod[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Error\n");              //These arrays can not be multiplied!
    }
}
