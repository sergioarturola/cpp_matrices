/*
  Crear una matriz de 5x4, posteriormente ordenarla de manera descendente y mostrar
  cuantos numeros impares contiene
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	int matrix[5][4];
	srand((unsigned)time(NULL));
	int auxiliar, aleatorio, contador_impares = 0;
	
	//generando la matriz
	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			aleatorio = rand()%100+1;
			matrix[i][j] = aleatorio;
		}
	}
	
	//ordenando la matriz de manera descendente
	//podemos recorrer la matriz dos vceces
	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			for(int x = 0; x<5; x++){
				for(int y = 0; y<4; y++){
					
				
			
			if(matrix[i][j] > matrix[x][y]){
				
				auxiliar = matrix[i][j];
				matrix[i][j] = matrix[x][y];
				matrix[x][y] = auxiliar;
			}
		 }
	    }
	  }
		
		
	}
	
	//imprimiendo la matriz
	
	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			cout<<matrix[i][j]<<" ";
			if(matrix[i][j] %2 ==1){
				contador_impares++;
			}
		}
		cout<<"\n";
	}
	
	cout<<"\nTotal de numeros impares: "<<contador_impares<<endl;
	return 0;
	
}
