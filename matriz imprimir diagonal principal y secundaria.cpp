/* 
 En una matriz de 10x10 imprimir por consola la diagonal principal y secundaria con un "1"
 y los demas elementos con un "0"

*/

#include<iostream>
using namespace std;

int main(){
	
	int tache[10][10];
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			
			//llenando la diagonal principal
			if(i == j){
				tache[i][j] = 1;
			}
			
			//llenando la diagonal secundaria
			else if((i+j) == (10-1)){
				tache[i][j] = 1;
			}
			//llenando los demas elementos
			else{
				tache[i][j] = 0;
			}
		}
	}//fin del ciclo para llenar
	
	//imprimiendo
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			cout<<tache[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
