/*
Crear 2 funciones llamadas minimum y maximum que reciban como parametro una matriz y muestren
por pantalla la matriz y el valor minimo y maximo respectivamente
*/

#include<iostream>
using namespace std;

void maxium(int matrix[][3], int sizeMatrix){

    int max = matrix[0][0];

    cout<<"- - -VALOR MAXIMO- - - "<<endl;

    for(int i = 0; i<sizeMatrix; i++){
        for(int j = 0; j<sizeMatrix; j++){

            cout<<matrix[i][j]<<" ";

            if(matrix[i][j]> max){
                max = matrix[i][j];
            }
        }

        cout<<"\n";
    }

    cout<<"El valor maximo es: "<<max<<endl;

}

void minimum(int matrix [][3], int sizeMatrix){

    int min = matrix[0][0];
    cout<<"- - - VALOR MINIMO - - - "<<endl;

    for(int i = 0; i<sizeMatrix; i++){
        for(int j = 0; j<sizeMatrix; j++){

            cout<<matrix[i][j]<<" ";

            if(matrix[i][j]< min){
                min = matrix[i][j];
            }
        }

        cout<<"\n";
    }

    cout<<"El valor minimo es: "<<min<<endl;

}


int main(){

    int one[][3] = {{11,28,93}, {41,59,96}, {79,82,91}};
    int two[][3] = {{31,83,3}, {2,85,6}, {17,18,9}};

    maxium(one, 3);
    minimum(one, 3);

    maxium(two, 3);
    minimum(two, 3);
}
