#include<stdio.h>
#include<stdlib.h>

void create(int x, int y, int arr[x][y])
{
    printf("Please insert elements into the matrix:\n");
    for(int i=0; i<x; i++){
        for(int n=0; n<y; n++)
            scanf("%d", &arr[i][n]);
    }
    printf("\n");
    int k, n;
    for(k=0; k<x; k++){
        for(n=0; n<y; n++){
            printf("%d ", arr[k][n]);
        }
        printf("\n");
    }
}

void display(int x, int y, int z, int a1[y][z], int a2[z][x], int na[y][x])
{
    for(int a=0; a<y; a++){
        for(int b=0; b<x; b++){
            na[a][b]=0;
            for(int c=0; c<z; c++){
                na[a][b] += (a1[a][c] * a2[c][b]);
            }
        }
    }
}

int main()
{
    int a=2,b=3,c=4;
    int arr1[b][c];
    int arr2[c][a];
    int prod_arr[b][a];

    printf("First Matrix has dimensions of 3 x 4.\n");
    create(b, c, arr1);
    printf("Second Matrix has dimensions of 4 x 2.\n");
    create(c, a, arr2);

    printf("\n");
    printf("The product of the two arrays:\n");
    display(a, b, c, arr1, arr2, prod_arr);

    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++)
            printf("%d ", prod_arr[i][j]);
        printf("\n");
    }
    return 0;
}
