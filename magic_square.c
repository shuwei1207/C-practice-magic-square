#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int c;
	
	printf("請輸入一邊格數:");
	scanf("%d",&c);
	
	int array[c][c];
	int i,j,n;
	//歸零 
	for(i=0;i<c;i++){
		for(j=0;j<c;j++)
        	array[i][j] = 0;
	 }
	
	i=0;
	j=c/2; 
	
	for(n=1;n<=c*c;n++){
		array[i][j]=n;
		
		int i1=i;
		int j1=j;
		
		i--;
		j--;
		if(i<0){i = c-1;}
		if(j<0){j = c-1;}
		if(array[i][j] != 0 ) {
		    i=i1+1;
		    j=j1;
		 }
	 }
	
	for(i=0;i<c;i++){
		for(j=0;j<c;j++)
        	printf("%4d",array[i][j]);
         printf("\n");
	 }
	
	return 0;
}
