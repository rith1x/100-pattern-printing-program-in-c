#include <stdio.h>

int main(){
    int n;
    printf("Enter the Size: ");

    scanf("%d",&n);
    int inc =1;
    int cx = n-1;
    for (int i = 0; i<n*2-1; i++){
        if (inc){
            for(int j = 0; j<i+1; j++){
                printf("* ");
            }
            if (i == n-1){
                inc = 0;
            }
        } else{
            for (int k= cx; k>0; k--){
                printf("* ");
            }
            cx--;
        }
        printf("\n");
    }
}