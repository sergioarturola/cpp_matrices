/*
Generar una matriz de 3x5 de manera aleatoria y en un array presentar los multiplos
que sean de 3, nota usar funciones
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void leerM(int [][5], int fil, int col);

int main(){
	
	int f = 3, c = 5;
	int matrix[3][5];
	
	srand((unsigned)time(NULL));
	
	for(int i = 0; i<f; i++){//llenando la matriz con numeros aleatorios
		for(int j = 0; j<c; j++){
			
			int aleatorio = rand()%10+1;
			matrix[i][j] = aleatorio;
			
		}
	}
	
	leerM(matrix, f, c);
}


void leerM(int matrix[][5], int f, int c){
	
	int multiplos [15];
	cout<<"Matriz generada"<<endl;
	for(int i = 0; i<f; i++){//llenando la matriz con numeros aleatorios
		for(int j = 0; j<c; j++){

			cout<<matrix[i][j]<<" ";

			
		}
		cout<<"\n";
	}
	int i = 0, j = 0;
	while (i < 15) {
 
            if(matrix[i][j] %3 == 0){
				multiplos[i] = matrix[i][j];
			}
 
            if (j == 15 - 1) {
                i++;
                j = 0;
            } else {
                j++;
            }
        }
     
	 cout<<"Multiplos de 3"<<endl;       
    for(int i = 0; i<15; i++){
    	
    	if(multiplos[i] != 0) cout<<multiplos[i]<<" ";
	
   }

}
