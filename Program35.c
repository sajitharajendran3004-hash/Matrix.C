#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("90 Degree Rotation:\n");

    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--)
            printf("%d ",a[j][i]);
        printf("\n");
    }

    return 0;
}
