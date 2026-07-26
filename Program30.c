#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, col1, col2, temp;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter two column numbers: ");
    scanf("%d%d", &col1, &col2);

    for(i = 0; i < r; i++) {
        temp = a[i][col1 - 1];
        a[i][col1 - 1] = a[i][col2 - 1];
        a[i][col2 - 1] = temp;
    }

    printf("Matrix after column interchange:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
