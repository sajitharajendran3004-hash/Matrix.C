#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, min;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(j = 0; j < c; j++) {
        min = a[0][j];
        for(i = 1; i < r; i++) {
            if(a[i][j] < min)
                min = a[i][j];
        }
        printf("Minimum of Column %d = %d\n", j + 1, min);
    }

    return 0;
}
