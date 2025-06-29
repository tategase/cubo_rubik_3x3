#include <iostream>
#include <iomanip>
#include "movimientos.hpp"
#include "utiles.hpp"
#include "auxiliares.hpp"
#include "pasos.hpp"
using namespace std;



int main(){

	int a,b;
	
	int caraverde[N][N];
	int caranaranja[N][N];
	int caraazul[N][N];
	int cararoja[N][N];
	int carablanca[N][N];
	int caraamarilla[N][N];

	cout<<"RESOLUCION DEL CUBO DE RUBIK 3X3: Instrucciones"<<endl<<"Usted debe ingresar los colores en cada cara, como si se tratase de las 6 vistas de un cubo, como se muestra a continuacion: "<<endl<<endl;

	imprimir_cuadrado1();
	imprimir_cuadrados();
	cout<<endl;
	cout<<endl; 
	imprimir_cuadrado2();

	cout<<"Tomamos de referencia la cara verde como frontal, y la cara blanca como inferior. La posicion anteriormente dicha debe mantenerse a lo largo de toda la resolucion"<<endl<<endl;
	cout<<"El programa le devolvera una serie de letras que representan los movimientos que usted debe hacer para resolver el cubo. Si no conoce la notacion, le sera util ver el siguiente video: "<<endl<<endl;
	cout<<"https://www.youtube.com/watch?v=j3nxbQhTLtc"<<endl<<endl;
	cout<<"Desea proseguir? Ingrese 1 si ese es el caso"<<endl;

	cin>>a;
	while(a!=1){
		cout<<"Ingrese 1 cuando este listo"<<endl;
		cin>>a;
	}
	cout<<endl;
	cout<<"Se le solicita que ingrese, en cada cara, los colores de la posicion [0,0] ; [0,1] ; [0,2] ; [1,0]... y asi sucesivamente, como si se tratase de una matriz 3x3"<<endl;
	cout<<"Debe sujetar el cubo como le fue indicado anteriormente, e  ingresar los colores de la cara verde. Luego, debe girar el cubo de manera horizontal, e ingresar los colores de las demas caras laterales"<<endl; 
	cout<<"Para la cara superior (amarilla), tomara el cubo de tal manera que la cara inferior sea la verde, y la frontal la amarilla"<<endl;
	cout<<"Para la cara inferior (blanca), tomara el cubo de tal manera que la cara superior sea la verde, y la frontal la blanca"<<endl;
	cout<<"Por ultimo, para ingresar los colores de cada cara, usted debe ingresar numeros, del 1 al 6, siguiendo la siguiente escala de colores:"<<endl<<endl;
	cout<<"1 = blanco"<<endl<<"2 = verde"<<endl<<"3 = naranja"<<endl<<"4 = azul"<<endl<<"5 = rojo"<<endl<<"6 = amarillo"<<endl<<endl;
	cout<<"Desea comenzar? Ingrese 1 si ese es el caso"<<endl;

	cin>>a;
	while(a!=1){
		cout<<"Ingrese 1 cuando este listo"<<endl;
		cin>>a;
	}
	cout<<endl;
	do{
	
	cout<<"INGRESE LOS COLORES"<<endl;
	cout<<"CARA VERDE:"<<endl;
	rellenar_matriz(caraverde);
	cout<<"CARA NARANJA:"<<endl;
	rellenar_matriz(caranaranja);
	cout<<"CARA AZUL:"<<endl;
	rellenar_matriz(caraazul);
	cout<<"CARA ROJA:"<<endl;
	rellenar_matriz(cararoja);
	cout<<"CARA BLANCA:"<<endl;
	rellenar_matriz(carablanca);
	cout<<"CARA AMARILLA:"<<endl;
	rellenar_matriz(caraamarilla);
	
	cout<<"Los colores ingresados fueron: "<<endl<<endl<<"CARA VERDE";
	mostrar_matriz(caraverde);
	cout<<"CARA NARANJA";
	mostrar_matriz(caranaranja);
	cout<<"CARA AZUL";
	mostrar_matriz(caraazul);
	cout<<"CARA ROJA";
	mostrar_matriz(cararoja);
	cout<<"CARA BLANCA";
	mostrar_matriz(carablanca);
	cout<<"CARA AMARILLA";
	mostrar_matriz(caraamarilla);
	
	cout<<"Que desea hacer?   0 = REINGRESAR COLORES      1 = CONFIRMAR"<<endl;
	cin>>b;
	while(b<0 || b>1){
		cout<<"Numero invalido, ingrese nuevamente:     0 = REINGRESAR COLORES      1 = CONFIRMAR"<<endl;
		cin>>b;
	}
	}while(b==0);
	
	R(carablanca, caraverde, caraamarilla, caraazul,caranaranja);
	RP(carablanca, caraverde, caraamarilla, caraazul,caranaranja);
	L(carablanca, caraverde, caraamarilla, caraazul,cararoja);
	LP(carablanca, caraverde, caraamarilla, caraazul,cararoja);
	U(caraverde,caranaranja,caraazul,cararoja,caraamarilla);
	UP(caraverde,caranaranja,caraazul,cararoja,caraamarilla);
	D(caraverde,caranaranja,caraazul,cararoja,carablanca);
	DP(caraverde,caranaranja,caraazul,cararoja,carablanca);
	F(caranaranja,cararoja,caraamarilla,carablanca,caraverde);
	FP(caranaranja,cararoja,caraamarilla,carablanca,caraverde);
	B(caranaranja,cararoja,caraamarilla,carablanca,caraazul);
	BP(caranaranja,cararoja,caraamarilla,carablanca,caraazul);
	
	cruz_blanca(caraverde,caranaranja,caraazul,cararoja,carablanca,caraamarilla);

	aristas_1(caraverde,caranaranja,caraazul,cararoja,carablanca,caraamarilla);

	cout<<endl;
	mostrar_matriz(caraverde);
	mostrar_matriz(caranaranja);
	mostrar_matriz(caraazul);
	mostrar_matriz(cararoja);
	mostrar_matriz(carablanca);
	mostrar_matriz(caraamarilla);
	
	cara_blanca(caraverde,caranaranja,caraazul,cararoja,carablanca,caraamarilla);	

	mostrar_matriz(caraverde);
	mostrar_matriz(caranaranja);
	mostrar_matriz(caraazul);
	mostrar_matriz(cararoja);
	mostrar_matriz(carablanca);
	mostrar_matriz(caraamarilla);
	return 0;
}

