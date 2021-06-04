/*
    WACP that that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), Name(string) and marks(float).
        https://www.programiz.com/c-programming/examples/information-structure-array
        https://www.youtube.com/watch?v=761wvxCTZ90
*/

#include<stdio.h>

struct student{
    int rollno;
    char firstname[100];
    float marks;
}; 

int main()
{
    //Declare structure array
    struct student stu[4];
    
    //Read 4 student details
    for( int i=0 ; i<4 ; i++)
    {
        scanf("%d",&stu[i].rollno);
        scanf("%s",stu[i].firstname);           //Only first name needed. So use 'scanf'
        scanf("%f",&stu[i].marks);
    }

    //Display all student details
    for( int i=0 ; i<4 ; i++)
    {
        printf("DETAILS OF ROLLNO %d\n",stu[i].rollno);
        printf("NAME: %s\nMARKS: %.2f\n" ,stu[i].firstname ,stu[i].marks);
    }
    printf("\n");
    return 0;
}
