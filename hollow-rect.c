#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the Height: ");
    scanf("%d",&n);
    printf("Enter the Width: ");
    scanf("%d",&m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i == 0 || i ==n-1){
            printf("* ");
            }
            else if(j == 0 || j == m-1){
            printf("* ");

            }else{
                printf("  ");
            }
            
        }
            printf("\n");

    }
}