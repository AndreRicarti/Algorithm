/*
    * Algorithm Insertion Sort
	* https://www.youtube.com/watch?v=-Z00it6Nkz8
    * @author Son182
    * @Date : 26/09/2016
*/

#include <stdio.h>

main(){
	int vet[] = {3,2,5,1};
	
	int len, i, j, aux;
	len = sizeof(vet) / sizeof(int);
	
	for(i = 0; i < (len-1); i++){
		for(j = i + 1; j < len; j++){
			if (vet[j] < vet[i]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}	
	}
		
	for(i = 0; i < len; i++){
		printf("%i", vet[i]);
	}
}
