#include <stdio.h>

int main() {
    int a[10][10], r, c;
    int top=0, bottom, left=0, right, i;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    bottom=r-1;
    right=c-1;

    for(i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Spiral Order: ");

    while(top<=bottom && left<=right){

        for(i=left;i<=right;i++)
            printf("%d ",a[top][i]);
        top++;

        for(i=top;i<=bottom;i++)
            printf("%d ",a[i][right]);
        right--;

        if(top<=bottom){
            for(i=right;i>=left;i--)
                printf("%d ",a[bottom][i]);
            bottom--;
        }

        if(left<=right){
            for(i=bottom;i>=top;i--)
                printf("%d ",a[i][left]);
            left++;
        }
    }

    return 0;
}
