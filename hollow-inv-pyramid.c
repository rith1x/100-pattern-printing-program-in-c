#include <stdio.h>

int main(){
    int n;
    printf("Enter the Height: ");
    scanf("%d",&n);
    int ct = 0;
    for (int i=n*2-1; i>0; i--){
        
        if(i%2!=0){
            for (int x = ct; x>0; x--){
            printf("  ");
        }
        ct++;
            for (int j=0; j<i; j++){
            if(i == 1 || i==n*2-1){

            printf("* ");
            } else if(j==0 || j==i-1){
            printf("* ");

            }else{
                printf("  ");
            }
            
        }
            printf("\n");

        }

    }
}