#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=6;
    int n=8 ;
    int A[6][8]={
        {1,2,3,4,5,6,7,8},
        {2,3,4,5,6,7,8,9},
        {3,4,5,6,7,8,9,10},
        {4,5,6,7,8,9,10,11},
        {5,6,7,8,9,10,11,12},
        {6,7,8,9,10,11,12,13}
    };
    int X[]={1,-8,3,-6,5,-4,7,-2};
    int Y[8]={0};
    int i,j;
    int p;


    printf("Table A :\n\n");
    for(i=0;i<m ;i++){
        for(j=0;j<n;j++){
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nList X :\n\n");
    for(i=0;i<n;i++){
        printf("%d  ",X[i]);
    }
    printf("\n\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            Y[i]+= A[i][j]*X[j];
        }
    }

    printf("\n\nList Y :\n\n");
    for(i=0;i<m;i++){
        printf("%d  ",Y[i]);
    }
    return 0;
}
