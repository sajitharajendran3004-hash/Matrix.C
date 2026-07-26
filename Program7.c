#include <stdio.h>

int main() {
    int r,c;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    if(r==c)
        printf("Square Matrix");
    else
        printf("Not a Square Matrix");

    return 0;
}
