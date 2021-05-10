/*
    WACP to display the sum and product of two 2D arrays. Take values for the 2D arrays from the user.
        Sum:-		https://followtutorials.com/2011/08/sum-of-two-matrices-using-two-dimensional-array-in-c.html
			        https://www.youtube.com/watch?v=kS474_HHaL4
        Product:-	https://followtutorials.com/2012/03/numerical-methods-multiplication-of-two-matrices-using-two-dimensional-array-in-c.html
	                https://www.youtube.com/watch?v=jzdQqoG1tZs
*/

#include<stdio.h>

const int MAX_SIZE = 10;

void main(){
    //Declaring three 2D Arrays
    int arr1[MAX_SIZE][MAX_SIZE],arr2[MAX_SIZE][MAX_SIZE],sum[MAX_SIZE][MAX_SIZE],prod[MAX_SIZE][MAX_SIZE];          
    int row1,col1,row2,col2,i,j,k;
    
    //Reading the array order of first array
    printf("Enter the number of rows and columns of first 2D array : \n");
    scanf("%d%d",&row1,&col1);   
    
    //Reading values for first 2D array
    printf("Enter the values for the first 2D array :\n");
    for(i=0; i<row1; i++) {
        for(j=0;j<col1;j++) {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    //Reading the array order of second array
    printf("Enter the number of rows and columns of second 2D array : \n");
    scanf("%d%d",&row2,&col2);   
    
    //Reading values for 2D array
    printf("Enter the values for the second 2D array :\n");
    for(i=0; i<row2; i++) {
        for(j=0;j<col2;j++) {
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    //Printing both the 2D arrays
    printf("\nPrinting first 2D Array:\n");
    for(i=0; i<row1; i++) {
        for(j=0;j<col1;j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("Printing second 2D Array:\n");
    for(i=0; i<row2; i++) {
        for(j=0;j<col2;j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    //Calculating and printing sum of matrices
    if(row1==row2 && col1==col2){       //It needs to be of same order
        printf("The Sum is :\n");
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                    sum[i][j] = arr1[i][j] + arr2[i][j];
                    printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("These arrays can not be added!\n");
    }

    //Calculating product of both arrays
    if(col1 == row2){
        printf("The Product is :\n");
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
        printf("These arrays can not be multiplied!\n");
    }

    printf("\nProgram Finished!\n");
}
