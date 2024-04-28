#include <stdio.h>

int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        for (int x = 0; x<i; x++){
            printf("  ");
        }
        for (int j=0; j<n; j++){
            printf("* ");
        }
            printf("\n");

    }
}