#include <stdio.h>
#include <stdbool.h>

main(){
	/*
    	* Algorithm Binary Search
    	* O vetor precisa estar ordenado para a pesquisa binária funcionar.
    	* https://www.youtube.com/watch?v=gpCnXU-1FNA
       	* @author Son182
       	* @Date : 16/09/2016
    */
    
	int vet[] = {1,2,3,3,4,5,6,7,8,9};
	
	int len, half, first, last, value;
	
	value = 7;
	
	bool search = false;
	
	len = sizeof(vet) / sizeof(int);
	
	first = vet[0];
	last = vet[len - 1];
	
	while((first <= last) && !search){
		half = (first + last) / 2;
		
		if (vet[half] == value){
			search = true;
		}
		
		if (vet[half] > value){
			last = half - 1;
		}else{
			first = half + 1;
		}
	}
	
	if(search == true){
		printf("O dado encontrado na posicao: %i", half);	
	}else{
		printf("Dado nao encontrado no vetor");
	}
	
	getch(); 
}
