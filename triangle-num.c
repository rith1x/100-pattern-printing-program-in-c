#include <stdio.h>

int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int x = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            if (x/10 < 1){
            printf("0%d ",x);
            } else{
            printf("%d ",x);

            }
            x++;
        }
            printf("\n");

    }
}