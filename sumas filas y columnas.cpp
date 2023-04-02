/*
  Dada una matriz de 4x4 realizar la suma de las filas y columnas e imprimir los
  datos en consola
*/

#include<iostream>
#include<ctime>
#include<cstdlib>
using std::cout;
using std::endl;

int main(){
	
	srand((unsigned)time(NULL));
	int aleatorio, suma_filas, suma_columnas;
	int matrix[4][4];
	
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			aleatorio = rand()%11+1;
			matrix[i][j] = aleatorio;
		}
	}
	
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	//sumando las filas de la matriz
	
		for(int i = 0; i<4; i++){
			
			suma_filas = 0; //para que se vaya reiniciando
		  for(int j = 0; j<4; j++){
			
			suma_filas = matrix[i][j] + suma_filas;
		}
		
		cout<<"La suma de la fila "<<i<<" es: "<<suma_filas<<endl;
		
	}
	
	cout<<"\n";
	
		for(int i = 0; i<4; i++){
			suma_columnas = 0;
		  for(int j = 0; j<4; j++){
			suma_columnas = suma_columnas + matrix[j][i];
		}
		cout<<"La suma de la columna "<<i<<" es: "<<suma_columnas<<endl;
	}
	
	
	return 0;
	
}
