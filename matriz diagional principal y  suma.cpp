//Dada una matriz de 3x3 llene en un array la diagonal principal y obtenga la suma
#include<iostream>
#include<stdlib.h>
#include<time.h>
using std::cout;

int main(){
	
	int aleatorio, suma = 0;
	int matriz[3][3], lista[3];
	
	srand((unsigned)time(NULL));
	
	//llenando la matriz
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			
			aleatorio = rand()%9+1;
			
			matriz[i][j] = aleatorio;
		}
	}
	
	//encontrando la diagonal y poniendola en el array
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			
			if(i == j){
				lista[i] = matriz[i][i];
			}
		}
	}
	
	//imprimiendo los resultados
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
		
		cout<<"\n";
	}
	
	cout<<"\nLa diagonal de la matriz es:\n";
	
	for(int i = 0; i<3; i++){
		suma = suma + lista[i];
		cout<<lista[i]<<" ";
	}
	
	cout<<"\nLa suma de los elementos es de: "<<suma;
	
	
	
	return 0;
}
