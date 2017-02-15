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
	
	
   /* for (i=0;i<a;i++){	
		for (j=0;j<a;j++){
			printf("%i ",array[i][j]);}   
		printf("\n");}
		
  
  
      for(i=1;i<a;i+=2){ 
		for (j=0;j<a;j++){
			if (array[i][j]>1){
				S=S+array[i][j];
				array1[m]=array[i][j];
				m++;}}}	
				
	i=0;			
      while(array1[i]>1 && array1[i]<20 ){
		printf(" %i \n",array1[i]);
		i++;}
		
		printf("S=%i",S);*/
		}


