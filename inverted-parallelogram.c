#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the Height: ");
    scanf("%d",&n);
    int ct = n-1;
    printf("Enter the Width: ");
    scanf("%d",&m);
    for (int i=0; i<n; i++){
        for (int x = ct; x>0; x--){
            printf("  ");
        }
        ct--;
        for (int j=0; j<m; j++){
            printf("* ");
        }
            printf("\n");

    }
}