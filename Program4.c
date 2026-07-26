#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, n;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter scalar value: ");
    scanf("%d",&n);

    printf("Result:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]*n);
        printf("\n");
    }

    return 0;
}
