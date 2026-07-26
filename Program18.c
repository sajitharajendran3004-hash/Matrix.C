#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Upper Triangular Matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i <= j)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
