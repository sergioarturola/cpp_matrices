/*
se tienen costos de producion de 3 departamentos, dulces, bebidas y abarrotes durante los 12 meses del año
entonces las filas = departamentos(3) y columnas = meses del año(12) se pide realizar los siguientes puntos
1-suma venta de bebidas
2-promedio de venta bebidas
3-mes con mayor y menor costo de bebidas
4-rubro con menor costo en diciembre
*/

#include<iostream>
#include<ctime>
#include<cstdlib>
using std::cout;
using std::endl;

int main(){
	
	srand((unsigned)time(NULL));
	int aleatorio, max_bebidas, min_bebidas, mayor_dic, suma = 0, mes_menor;
	int matrix[3][12];
	float promedio_bebida;
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<12; j++){
			aleatorio = rand()%90+10;
			matrix[i][j] = aleatorio;
		}
	}
	
	max_bebidas = matrix[0][0];
	min_bebidas = matrix[0][0];
	mayor_dic = matrix[0][11];

	
  //departamento dulces = fila 0
	for(int i = 0; i<3; i++){
		for(int j = 0; j<12; j++){
			if(i == 0){
				suma = suma + matrix[i][j];
				
				if(matrix[i][j] > max_bebidas){
					max_bebidas = matrix[i][j];
				}
				
				if(matrix[i][j] < min_bebidas){
					min_bebidas = matrix[i][j];
				}
			}
			
			if(j == 11){ //para que solo vaya a la ultima columna
				if(matrix[i][j] < mayor_dic){
					mayor_dic = matrix[i][j];
					mes_menor = i;
				}
			}	
		}
	}
	
	
	
	promedio_bebida = (suma/12.00); //es importante agregar dos ceros para no perder decimales al realizar la operacion
	
	
	cout<<"ENE FEB MAR ABR MAY JUN JUL AGO SEP OCT NOV DIC\n"<<endl;

	for(int i = 0; i<3; i++){
		for(int j = 0; j<12; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
/*
0 = Dulces
1 = Bebidas
2 = Aabarrotes
*/
	
	cout<<"\n";
	cout<<"La suma de las bebidas es: "<<suma<<endl;
	cout<<"Promedio de bebidas es: "<<promedio_bebida<<endl;
	cout<<"Mes mayor costo de bebidas: "<<max_bebidas<<endl;
	cout<<"Mes menor costo de bebidas: "<<min_bebidas<<endl;
	cout<<"Rubro con menor costo en DIC: "<<mes_menor;
	return 0;
}