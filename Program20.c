#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Boundary Elements:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(i == 0 || i == r - 1 || j == 0 || j == c - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
