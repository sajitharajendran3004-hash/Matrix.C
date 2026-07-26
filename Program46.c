#include <stdio.h>

int main() {
    int a[2][2];

    printf("Enter 2x2 matrix:\n");

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Adjoint Matrix:\n");

    printf("%d %d\n", a[1][1], -a[0][1]);
    printf("%d %d\n", -a[1][0], a[0][0]);

    return 0;
}
