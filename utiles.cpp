#include <iostream>
#include "utiles.hpp"
using namespace std;


void imprimir_cuadrados(){
	cout<<endl<<"  0 0 0 0 0 0 0 0   0 0 0 0 0 0 0 0   0 0 0 0 0 0 0 0   0 0 0 0 0 0 0 0";//15x15
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<"  0             0   0             0   0             0   0             0"<<endl;
		if (i==1){
			cout<<"  0   naranja   0   0    verde    0   0    rojo     0   0    azul     0"<<endl;
		}
	}
	cout<<"  0 0 0 0 0 0 0 0   0 0 0 0 0 0 0 0   0 0 0 0 0 0 0 0   0 0 0 0 0 0 0 0";
}

void imprimir_cuadrado1(){
cout<<"                    ";
	cout<<"0 0 0 0 0 0 0 0";//15x15
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<"                    0             0"<<endl;
		if(i==1){
			cout<<"                    0   "<<"blanco"<<"    0"<<endl;
		}
	}
	cout<<"                    0 0 0 0 0 0 0 0"<<endl;
}

void imprimir_cuadrado2(){
cout<<"                    ";
	cout<<"0 0 0 0 0 0 0 0";//15x15
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<"                    0             0"<<endl;
		if(i==1){
			cout<<"                    0   "<<"amarillo"<<"  0"<<endl;
		}
	}
	cout<<"                    0 0 0 0 0 0 0 0"<<endl<<endl;
}

void rellenar_matriz(int cara[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<"Ingrese el color de la posicion ["<<i<<","<<j<<"]: ";
			cin>>cara[i][j];
			while(cara[i][j]<1 || cara[i][j]>6){
				cout<<"Numero invalido, ingrese nuevamente el color: ";
				cin>>cara[i][j];
			}
		}
	}
	cout<<"Todos los colores fueron colocados"<<endl;
}

void mostrar_matriz(int cara[N][N]){
	for(int i=0;i<N;i++){
		cout<<endl;
		for(int j=0;j<N;j++){
			cout<<cara[i][j]<<" ";
		}
	}
	cout<<endl;
}
