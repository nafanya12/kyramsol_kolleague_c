#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define a 10
void main(){
	int array [a][a],array1[100];
	int i,j,m=0,S=0;
	int sum = 0;
	int counter = 0;
	for (i=0;i<a;i++){	
		for (j=0;j<a;j++){
			int result = rand()%20;
			if ((i % 2 == 1) && (abs(result)>1)) {
			    sum+=result;
			    array1[counter++] = result;
		    }
			array[i][j]=result;
			printf("%i ", result);
		}
		printf("\n");
	}
	
	for(i = 0; i < counter; i++) {
		printf("%i \n", array1[i]);
	}
	
	printf("\n\n%i ", sum);
		}
some extend of master branch2

