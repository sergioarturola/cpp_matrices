/*
  Escribrie el programa que imprima una matriz de 5x5 de tal forma que en la pantalla se vea
   1 2 3 4 5
  10 9 8 7 6
  11 12....
*/

#include<iostream>
using namespace std;

int main(){
	
	int n = 5;
	int numero = 1;
	int indice = 0;
	int temporal[n];//array que ira conteniendo las filas de numeros
	
			
			while(indice<n){//usamos un ciclo while
				
			for(int i = 0; i<n; i++){//llenamos el array
				
				temporal[i] = numero;
				numero++;
			}
					
			if(indice%2==0){//si la fila es par imprimimos "normal"
				for(int j = 0; j<n; j++){
					
				    cout<<temporal[j]<<" ";
				}
				cout<<"\n";//salto de linea para la sig. fila
				
			}
			
			if(indice%2 !=0){//si es impar la fila, se imprime al reves el array
				for(int k = n-1; k>=0; k--){
					cout<<temporal[k]<<" ";
				    }
						cout<<"\n";//salto de linea para la sig. fila
			    }
				
				indice++;
			}
			
			return 0;		
		}


