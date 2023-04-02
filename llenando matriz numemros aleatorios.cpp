/*
 Crear un programa en c/c++ que ingrese numeros enteros aleatorios del 1 al 10
*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	int matrix[3][3];
	int aleatorio;
	srand((unsigned)time(NULL));
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
		aleatorio = rand()%10+1;	
		//cout<<"Numero["<<i<<"]["<<j<<"]: "; cin>>matrix[i][j];
		matrix[i][j] = aleatorio;
		}
	}
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			
			cout<<matrix[i][j]<<" " ;
		}
		
		cout<<"\n";
		
	}
	
	return 0;
}
