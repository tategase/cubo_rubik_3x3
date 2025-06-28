#include <iostream>
#include <iomanip>
#include "movimientos.hpp"
#include "utiles.hpp"

using namespace std;

void cruz_blanca(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void aristas_1(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_RV(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_VN(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_NA(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_AR(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void cara_blanca(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void cara_blanca(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
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
	
	/*R(carablanca, caraverde, caraamarilla, caraazul,caranaranja);
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
	BP(caranaranja,cararoja,caraamarilla,carablanca,caraazul);*/
	
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


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void cruz_blanca(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N],int carab[N][N], int caraam[N][N]){
	
	if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
		return ;
	}
	cout<<"CRUZ BLANCA: "<<endl;
	for(int a=0;a<3;a++){
	
		if(carav[0][1]==1 || carav[1][0]==1 || carav[1][2]==1 || carav[2][1]==1 ){
			if(carav[0][1]==1){
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				F(caran,carar,caraam,carab,carav);
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				RP(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(carav[1][2]==1){
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				RP(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(carav[2][1]==1){
				FP(caran,carar,caraam,carab,carav);
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				RP(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(carav[1][0]==1){
				while(carab[1][0]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				L(carab, carav, caraam, caraaz,carar);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
		}
		
		if(caran[0][1]==1 || caran[1][0]==1 || caran[1][2]==1 || caran[2][1]==1){
			if(caran[0][1]==1){
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				RP(carab, carav, caraam, caraaz,caran);
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				F(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caran[1][2]==1){
				while(carab[2][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				BP(caran,carar,caraam,carab,caraaz);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caran[2][1]==1){
				R(carab, carav, caraam, caraaz,caran);
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				F(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caran[1][0]==1){
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				F(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
		}
		
		if(caraaz[0][1]==1 || caraaz[1][0]==1 || caraaz[1][2]==1 || caraaz[2][1]==1){
			if(caraaz[0][1]==1){
				while(carab[2][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				BP(caran,carar,caraam,carab,caraaz);
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				R(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caraaz[1][2]==1){
				while(carab[1][0]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				LP(carab, carav, caraam, caraaz,carar);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caraaz[2][1]==1){
				B(caran,carar,caraam,carab,caraaz);
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				R(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caraaz[1][0]==1){
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				R(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
		}
		
		if(carar[0][1]==1 || carar[1][0]==1 || carar[1][2]==1 || carar[2][1]==1){
			if(carar[0][1]==1){
				while(carab[1][0]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				L(carab, carav, caraam, caraaz,carar);
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				FP(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(carar[1][2]==1){
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				FP(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(carar[2][1]==1){
				LP(carab, carav, caraam, caraaz,carar);
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				FP(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(carar[1][0]==1){
				while(carab[2][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				B(caran,carar,caraam,carab,caraaz);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
		}

		if(caraam[0][1]==1 || caraam[1][0]==1 || caraam[1][2]==1 || caraam[2][1]==1 ){
			if(caraam[0][1]==1){
				while(carab[2][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				BP(caran,carar,caraam,carab,caraaz);
				BP(caran,carar,caraam,carab,caraaz);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caraam[1][2]==1){
				while(carab[1][2]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				R(carab, carav, caraam, caraaz,caran);
				R(carab, carav, caraam, caraaz,caran);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caraam[2][1]==1){
				while(carab[0][1]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				F(caran,carar,caraam,carab,carav);
				F(caran,carar,caraam,carab,carav);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
			if(caraam[1][0]==1){
				while(carab[1][0]==1){
					DP(carav,caran,caraaz,carar,carab);
				}
				LP(carab, carav, caraam, caraaz,carar);
				LP(carab, carav, caraam, caraaz,carar);
			}
			if(carab[0][1]==1 && carab[1][0]==1 && carab[1][2]==1 && carab[2][1]==1 ){
				return;
			}
		}
	}
}

void aristas_1(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N], int caraam[N][N]){
	cout<<endl<<"ARISTAS"<<endl;
	while((carar[2][1]!=5 || caran[2][1]!=3 || carav[2][1]!=2) && (carav[2][1]!=2 || caraaz[2][1]!=4) && (carav[2][1]!=2 || carar[2][1]!=5) && (carar[2][1]!=5 || caraaz[2][1]!=4) && (caraaz[2][1]!=4 || caran[2][1]!=3) && (caran[2][1]!=3 || carav[2][1]!=2)){
		DP(carav,caran,caraaz,carar,carab);
	}
	if(carav[2][1]==2 && caran[2][1]==3 && carar[2][1]==5){
		return;
	}
	if(carav[2][1]==2 && caraaz[2][1]==4){
		F(caran,carar,caraam,carab,carav);
		D(carav,caran,caraaz,carar,carab);
		FP(caran,carar,caraam,carab,carav);
		DP(carav,caran,caraaz,carar,carab);
		F(caran,carar,caraam,carab,carav);
		D(carav,caran,caraaz,carar,carab);
		L(carab, carav, caraam, caraaz,carar);
		D(carav,caran,caraaz,carar,carab);
		LP(carab, carav, caraam, caraaz,carar);
		DP(carav,caran,caraaz,carar,carab);
		L(carab, carav, caraam, caraaz,carar);
		return;
	}
	if(carav[2][1]==2 && carar[2][1]==5){
		B(caran,carar,caraam,carab,caraaz);
		D(carav,caran,caraaz,carar,carab);
		BP(caran,carar,caraam,carab,caraaz);
		DP(carav,caran,caraaz,carar,carab);
		B(caran,carar,caraam,carab,caraaz);
		return;
	}
	if(carar[2][1]==5 && caraaz[2][1]==4){
		R(carab, carav, caraam, caraaz,caran);
		D(carav,caran,caraaz,carar,carab);
		RP(carab, carav, caraam, caraaz,caran);
		DP(carav,caran,caraaz,carar,carab);
		R(carab, carav, caraam, caraaz,caran);
		return;
	}
	if(caraaz[2][1]==4 && caran[2][1]==3){
		F(caran,carar,caraam,carab,carav);
		D(carav,caran,caraaz,carar,carab);
		FP(caran,carar,caraam,carab,carav);
		DP(carav,caran,caraaz,carar,carab);
		F(caran,carar,caraam,carab,carav);
		return;
	}
	if(caran[2][1]==3 && carav[2][1]==2){
		L(carab, carav, caraam, caraaz,carar);
		D(carav,caran,caraaz,carar,carab);
		LP(carab, carav, caraam, caraaz,carar);
		DP(carav,caran,caraaz,carar,carab);
		L(carab, carav, caraam, caraaz,carar);
		return;
	}
}
void esquina_RV(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N], int caraam[N][N]){
	
	if(carab[0][0]!=1 || carav[2][0]!=2){
		if(carab[0][2]==1 && carav[2][2]==5){
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[2][2]==1 && caran[2][2]==5){
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[2][0]==1 && caraaz[2][2]==5){
			
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[0][0]==5 && carav[2][0]==1){
			F(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[0][2]==2 && carav[2][2]==1){
			FP(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			FP(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[0][2]==5 && caran[2][0]==1){
			LP(carab, carav, caraam, caraaz,carar);
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==2 && caran[2][2]==1){
			RP(carab, carav, caraam, caraaz,caran);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==5 && caraaz[2][0]==1){
			B(caran,carar,caraam,carab,caraaz);
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==2 && caraaz[2][2]==1){
			F(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==5 && carar[2][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			LP(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carab[0][0]==2 && carar[2][2]==1){
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carav[0][0]==1 && caraam[2][0]==2){
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carav[0][2]==1 && caraam[2][2]==5){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(caran[0][0]==1 && caraam[2][2]==2){
			LP(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(caran[0][2]==1 && caraam[0][2]==5){
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(caraaz[0][0]==1 && caraam[0][2]==2){
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(caraaz[0][2]==1 && caraam[0][0]==5){
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carar[0][0]==1 && caraam[0][0]==2){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carar[0][2]==1 && caraam[2][0]==5){
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carav[0][0]==5 && caraam[2][0]==1){
			LP(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(caran[0][0]==5 && caraam[2][2]==1){
			R(carab, carav, caraam, caraaz,caran);
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(caraaz[0][0]==5 && caraam[0][2]==1){
			LP(carab, carav, caraam, caraaz,carar);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carar[0][0]==5 && caraam[0][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			LP(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
	}
	else{
		return;
	}
}
void esquina_VN(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N], int caraam[N][N]){
	if(carab[0][2]!=1 || carav[2][2]!=2){
		if(carab[0][0]==1 && carav[2][0]==3){
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[2][2]==1 && caran[2][2]==2){
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==1 && caraaz[2][2]==2){
			FP(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[0][0]==2 && carav[2][0]==1){
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[0][2]==3 && carav[2][2]==1){
			FP(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[0][2]==2 && caran[2][0]==1){
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==3 && caran[2][2]==1){
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==2 && caraaz[2][0]==1){
			B(caran,carar,caraam,carab,caraaz);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==3 && caraaz[2][2]==1){
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][0]==2 && carar[2][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			FP(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carab[0][0]==3 && carar[2][2]==1){
			LP(carab, carav, caraam, caraaz,carar);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			L(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carav[0][0]==1 && caraam[2][0]==3){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(carav[0][2]==1 && caraam[2][2]==2){
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(caran[0][0]==1 && caraam[2][2]==3){
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(caran[0][2]==1 && caraam[0][2]==2){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(caraaz[0][0]==1 && caraam[0][2]==3){
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(caraaz[0][2]==1 && caraam[0][0]==2){
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carar[0][0]==1 && caraam[0][0]==3){
			U(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(carar[0][2]==1 && caraam[2][0]==2){
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carav[0][0]==2 && caraam[2][0]==1){
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			F(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(caran[0][0]==2 && caraam[2][2]==1){
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(caraaz[0][0]==2 && caraam[0][2]==1){
			B(caran,carar,caraam,carab,caraaz);
			FP(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carar[0][0]==2 && caraam[0][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);
			
			return;
		}
	}
	else{
		return;
	}
}
void esquina_NA(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N], int caraam[N][N]){
	if(carab[2][2]!=1 || caran[2][2]!=3){
		if(carab[0][0]==1 && carav[2][0]==4){
			LP(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[0][2]==1 && carav[2][2]==3){
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			B(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			U(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==1 && caraaz[2][2]==3){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[0][0]==3 && carav[2][0]==1){
			F(caran,carar,caraam,carab,carav);
			U(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);	
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);	
			return;
		}
		if(carab[0][2]==4 && carav[2][2]==1){
			FP(caran,carar,caraam,carab,carav);	
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			F(caran,carar,caraam,carab,carav);	
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[0][2]==3 && caran[2][0]==1){
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==4 && caran[2][2]==1){
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][2]==3 && caraaz[2][0]==1){
			B(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][0]==4 && caraaz[2][2]==1){
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==3 && carar[2][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carab[0][0]==4 && carar[2][2]==1){
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carav[0][0]==1 && caraam[2][0]==4){
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carav[0][2]==1 && caraam[2][2]==3){
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(caran[0][0]==1 && caraam[2][2]==4){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(caran[0][2]==1 && caraam[0][2]==3){
			U(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(caraaz[0][0]==1 && caraam[0][2]==4){
			UP(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(caraaz[0][2]==1 && caraam[0][0]==3){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carar[0][0]==1 && caraam[0][0]==4){
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carar[0][2]==1 && caraam[2][0]==3){
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carav[0][0]==3 && caraam[2][0]==1){
			RP(carab, carav, caraam, caraaz,caran);
			F(caran,carar,caraam,carab,carav);	
			UP(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			FP(caran,carar,caraam,carab,carav);	
			return;
		}
		if(caran[0][0]==3 && caraam[2][2]==1){
			FP(caran,carar,caraam,carab,carav);	
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			F(caran,carar,caraam,carab,carav);	
			return;
		}
		if(caraaz[0][0]==3 && caraam[0][2]==1){
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carar[0][0]==3 && caraam[0][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
	}
	else{
		return;
	}
}			
void esquina_AR(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N], int caraam[N][N]){
	if(carab[2][0]!=1 || caraaz[2][2]!=4){
		if(carab[0][0]==1 && carav[2][0]==5){
			F(caran,carar,caraam,carab,carav);
			UP(carav,caran,caraaz,carar,caraam);
			FP(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);	
			B(caran,carar,caraam,carab,caraaz);	
			return;
		}
		if(carab[0][2]==1 && carav[2][2]==4){
			R(carab, carav, caraam, caraaz,caran);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			RP(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==1 && caran[2][2]==4){
			RP(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			R(carab, carav, caraam, caraaz,caran);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carab[0][0]==4 && carav[2][0]==1){
			F(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);	
			B(caran,carar,caraam,carab,caraaz);	
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[0][2]==5 && carav[2][2]==1){
			FP(caran,carar,caraam,carab,carav);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			F(caran,carar,caraam,carab,carav);
			return;
		}
		if(carab[0][2]==4 && caran[2][0]==1){
			R(carab, carav, caraam, caraaz,caran);
			U(carav,caran,caraaz,carar,caraam);
			RP(carab, carav, caraam, caraaz,caran);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);	
			B(caran,carar,caraam,carab,caraaz);	
			return;
		}
		if(carab[2][2]==5 && caran[2][2]==1){
			RP(carab, carav, caraam, caraaz,caran);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			R(carab, carav, caraam, caraaz,caran);
			return;
		}
		if(carab[2][2]==4 && caraaz[2][0]==1){
			B(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			B(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==5 && caraaz[2][2]==1){
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carab[2][0]==4 && carar[2][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			U(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carab[0][0]==5 && carar[2][2]==1){
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			LP(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carav[0][0]==1 && caraam[2][0]==5){
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carav[0][2]==1 && caraam[2][2]==4){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(caran[0][0]==1 && caraam[2][2]==5){
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(caran[0][2]==1 && caraam[0][2]==4){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(caraaz[0][0]==1 && caraam[0][2]==5){
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(caraaz[0][2]==1 && caraam[0][0]==4){
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carar[0][0]==1 && caraam[0][0]==5){
			UP(carav,caran,caraaz,carar,caraam);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carar[0][2]==1 && caraam[2][0]==4){
			U(carav,caran,caraaz,carar,caraam);
			U(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			return;
		}
		if(carav[0][0]==4 && caraam[2][0]==1){
			F(caran,carar,caraam,carab,carav);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);	
			U(carav,caran,caraaz,carar,caraam);	
			B(caran,carar,caraam,carab,caraaz);
			FP(caran,carar,caraam,carab,carav);
			return;
		}
		if(caran[0][0]==4 && caraam[2][2]==1){
			BP(caran,carar,caraam,carab,caraaz);
			R(carab, carav, caraam, caraaz,caran);
			UP(carav,caran,caraaz,carar,caraam);	
			RP(carab, carav, caraam, caraaz,caran);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(caraaz[0][0]==4 && caraam[0][2]==1){
			UP(carav,caran,caraaz,carar,caraam);
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			BP(caran,carar,caraam,carab,caraaz);
			UP(carav,caran,caraaz,carar,caraam);
			UP(carav,caran,caraaz,carar,caraam);
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
		if(carar[0][0]==4 && caraam[0][0]==1){
			L(carab, carav, caraam, caraaz,carar);
			UP(carav,caran,caraaz,carar,caraam);
			LP(carab, carav, caraam, caraaz,carar);
			BP(caran,carar,caraam,carab,caraaz);
			U(carav,caran,caraaz,carar,caraam);	
			U(carav,caran,caraaz,carar,caraam);	
			B(caran,carar,caraam,carab,caraaz);
			return;
		}
	}
	else{
		return;
	}
}
				
void cara_blanca(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N], int caraam[N][N]){
	cout<<"CARA BLANCA: "<<endl;
	if(carar[2][0]==5 && carar[2][2]==5 && carav[2][0]==2 && carav[2][2]==2 && caran[2][0]==3 && caran[2][2]==3){
		return;
	}
	esquina_RV(carav,caran,caraaz,carar,carab,caraam);	
	esquina_VN(carav,caran,caraaz,carar,carab,caraam);	
	esquina_NA(carav,caran,caraaz,carar,carab,caraam);	
	esquina_AR(carav,caran,caraaz,carar,carab,caraam);	

	/*R(carab, carav, caraam, caraaz,caran);
	RP(carab, carav, caraam, caraaz,caran);
	L(carab, carav, caraam, caraaz,carar);
	LP(carab, carav, caraam, caraaz,carar);
	U(carav,caran,caraaz,carar,caraam);
	UP(carav,caran,caraaz,carar,caraam);
	D(carav,caran,caraaz,carar,carab);
	DP(carav,caran,caraaz,carar,carab);
	F(caran,carar,caraam,carab,carav);
	FP(caran,carar,caraam,carab,carav);
	B(caran,carar,caraam,carab,caraaz);
	BP(caran,carar,caraam,carab,caraaz);*/
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	/*R(carab, carav, caraam, caraaz,caran);
	RP(carab, carav, caraam, caraaz,caran);
	L(carab, carav, caraam, caraaz,carar);
	LP(carab, carav, caraam, caraaz,carar);
	U(carav,caran,caraaz,carar,caraam);
	UP(carav,caran,caraaz,carar,caraam);
	D(carav,caran,caraaz,carar,carab);
	DP(carav,caran,caraaz,carar,carab);
	F(caran,carar,caraam,carab,carav);
	FP(caran,carar,caraam,carab,carav);
	B(caran,carar,caraam,carab,caraaz);
	BP(caran,carar,caraam,carab,caraaz);*/
	 	
	 		
	
}



