#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int positive = 0, negative = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            if(a[i][j] >= 0)
                positive++;
            else
                negative++;
        }

    printf("Positive = %d\n", positive);
    printf("Negative = %d", negative);

    return 0;
}
