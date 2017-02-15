#include <stdio.h>
#include <stdlib.h>
#define a 10
void main(){
	int array [a][a],array1[100];
	int i,j,m=0,S=0;
	for (i=0;i<a;i++){	
		for (j=0;j<a;j++){
			array[i][j]=rand()%20;}}
	
	
    for (i=0;i<a;i++){	
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
		
		printf("S=%i",S);}












