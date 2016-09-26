/*
    * Algorithm Selection Sort
	* https://www.youtube.com/watch?v=jk3RQNgGRQE
    * @author Son182
    * @Date : 26/09/2016
*/

#include <stdio.h>

void selection(int vet[], int len){
	int smaller, aux, i, j;
	
	for(i=0; i<len-1; i++){
		smaller = i;
		
		for(j=i+1; j<len; j++){
			if(vet[smaller] > vet[j]){
				smaller = j;
			}
		}
		
		if(i != smaller){
			aux = vet[i];
			vet[i] = vet[smaller];
			vet[smaller] = aux;
		}
	}	
}

main(){
	int vet[] = {3,2,5,1};

	int len, i;
	len = sizeof(vet) / sizeof(int);
	
	selection(vet, len);
	
	for(i = 0; i < len; i++){
		printf("%i", vet[i]);
	}
}
