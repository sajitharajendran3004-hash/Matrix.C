#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int zero = 0, total;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    total = r * c;

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                zero++;
        }

    if(zero > total / 2)
        printf("Sparse Matrix");
    else
        printf("Not a Sparse Matrix");

    return 0;
}
