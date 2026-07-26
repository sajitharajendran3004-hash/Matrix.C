#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, row1, row2, temp;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter two row numbers: ");
    scanf("%d%d", &row1, &row2);

    for(j = 0; j < c; j++) {
        temp = a[row1 - 1][j];
        a[row1 - 1][j] = a[row2 - 1][j];
        a[row2 - 1][j] = temp;
    }

    printf("Matrix after row interchange:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
