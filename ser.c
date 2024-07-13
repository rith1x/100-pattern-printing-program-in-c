#include<stdio.h>
int main()
{
	int n;
    printf("Oii: ");
	scanf("%d",&n);
	int x = 66;
	if(n<0){return 0;}
	for(int i = 0; i<n; i++){
		printf("%d ",x);
		int d1 = x%10;
		x/=10;
		x = x* d1;
	}	
	return 0;
}