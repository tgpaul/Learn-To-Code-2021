#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3],i,j;
    int det1=0,det2=0,det3=0,det=0;

    //Read the 3x3 matrix
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&mat[i][j]);

    det1 = mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[2][1] * mat[1][2]));

    det2 = mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[2][0] * mat[1][2]));

    det3 = mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[2][0] * mat[1][1]));

    det= det1 - det2 + det3;
    printf("%d\n",det);

    return 0;
}