#include <stdio.h>

int main() {

    int a[10][10], n, i, j;

    printf("Enter order: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("270 Degree Rotation:\n");

    for(i=n-1;i>=0;i--){
        for(j=0;j<n;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }

    return 0;
}
