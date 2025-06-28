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

void rotar_matriz_h(int cara[N][N]){
	int v1[N];
	int v2[N];
	int v3[N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			switch(i){
				case 0:
					v1[j]=cara[i][j];
					break;
				case 1:
					v2[j]=cara[i][j];
					break;
				case 2:
					v3[j]=cara[i][j];
			        break;
			}
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			switch(i){
				case 0:
					cara[j][i]=v3[j];
					break;
				case 1:
					cara[j][i]=v2[j];
					break;
				case 2:
					cara[j][i]=v1[j];
			        break;
			}
		}
	}
}

void rotar_matriz_ah(int cara[N][N]){
	int v1[N];
	int v2[N];
	int v3[N];
	int a,b,c,d;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			switch(i){
				case 0:
					v1[j]=cara[i][j];
					break;
				case 1:
					v2[j]=cara[i][j];
					break;
				case 2:
					v3[j]=cara[i][j];
			        break;
			}
		}
	}
	b=v1[0];
	v1[0]=v1[2];
	v1[2]=b;
	c=v2[0];
	v2[0]=v2[2];
	v2[2]=c;
	d=v3[0];
	v3[0]=v3[2];
	v3[2]=d;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			switch(i){
				case 0:
					cara[j][i]=v1[j];
					break;
				case 1:
					cara[j][i]=v2[j];
					break;
				case 2:
					cara[j][i]=v3[j];
			        break;
			}
		}
	}
}

void mover_RL(int carab[N][N], int carav[N][N], int caraam[N][N], int caraaz[N][N], int a){ //1 = R ; 2 = R' ; 3 = L ; 4 = L' 
	switch(a){
		int vb[N],vv[N],vam[N],vaz[N],b,c;
		case 1:
			for(int i=0;i<N;i++){
				vb[i]=carab[i][2];
				vv[i]=carav[i][2];
				vam[i]=caraam[i][2];//123 amarillo pasa como 321 a azul
				vaz[i]=caraaz[i][0];//123 azul pasa como 321 a blanco
			}
			b=vam[0];
			vam[0]=vam[2];
			vam[2]=b;
			c=vaz[0];
			vaz[0]=vaz[2];
			vaz[2]=c;
			for(int i=0;i<N;i++){
				carab[i][2]=vaz[i];
				carav[i][2]=vb[i];
				caraam[i][2]=vv[i];
				caraaz[i][0]=vam[i];
			}
			break;
		case 2:
			for(int i=0;i<N;i++){
				vb[i]=carab[i][2];
				vv[i]=carav[i][2];
				vam[i]=caraam[i][2];//123 amarillo pasa como 321 a azul
				vaz[i]=caraaz[i][0];//123 azul pasa como 321 a blanco
			}
			b=vb[0];
			vb[0]=vb[2];
			vb[2]=b;
			c=vaz[0];
			vaz[0]=vaz[2];
			vaz[2]=c;
			for(int i=0;i<N;i++){
				carab[i][2]=vv[i];
				carav[i][2]=vam[i];
				caraam[i][2]=vaz[i];
				caraaz[i][0]=vb[i];
			}
			break;
		case 3:
			for(int i=0;i<N;i++){
				vb[i]=carab[i][0];
				vv[i]=carav[i][0];
				vam[i]=caraam[i][0];//123 amarillo pasa como 321 a azul
				vaz[i]=caraaz[i][2];//123 azul pasa como 321 a blanco
			}
			b=vb[0];
			vb[0]=vb[2];
			vb[2]=b;
			c=vaz[0];
			vaz[0]=vaz[2];
			vaz[2]=c;
			for(int i=0;i<N;i++){
				carab[i][0]=vv[i];
				carav[i][0]=vam[i];
				caraam[i][0]=vaz[i];
				caraaz[i][2]=vb[i];
			}
			break;
		case 4:
			for(int i=0;i<N;i++){
				vb[i]=carab[i][0];
				vv[i]=carav[i][0];
				vam[i]=caraam[i][0];//123 amarillo pasa como 321 a azul
				vaz[i]=caraaz[i][2];//123 azul pasa como 321 a blanco
			}
			b=vam[0];
			vam[0]=vam[2];
			vam[2]=b;
			c=vaz[0];
			vaz[0]=vaz[2];
			vaz[2]=c;
			for(int i=0;i<N;i++){
				carab[i][0]=vaz[i];
				carav[i][0]=vb[i];
				caraam[i][0]=vv[i];
				caraaz[i][2]=vam[i];
			}
			break;
	}
}

void mover_UD(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int a){ //1 = U ; 2 = U' ; 3 = D ; 4 = D' 
	switch(a){
		int vv[N],vn[N],vaz[N],vr[N];
		case 1:
			for(int i=0;i<N;i++){
				vv[i]=carav[0][i];
				vn[i]=caran[0][i];
				vaz[i]=caraaz[0][i];
				vr[i]=carar[0][i];
			}
			for(int i=0;i<N;i++){
				carav[0][i]=vn[i];
				caran[0][i]=vaz[i];
				caraaz[0][i]=vr[i];
				carar[0][i]=vv[i];
			}
			break;
		case 2:
			for(int i=0;i<N;i++){
				vv[i]=carav[0][i];
				vn[i]=caran[0][i];
				vaz[i]=caraaz[0][i];
				vr[i]=carar[0][i];
			}
			for(int i=0;i<N;i++){
				carav[0][i]=vr[i];
				caran[0][i]=vv[i];
				caraaz[0][i]=vn[i];
				carar[0][i]=vaz[i];
			}
			break;
		case 3:
			for(int i=0;i<N;i++){
				vv[i]=carav[2][i];
				vn[i]=caran[2][i];
				vaz[i]=caraaz[2][i];
				vr[i]=carar[2][i];
			}
			for(int i=0;i<N;i++){
				carav[2][i]=vr[i];
				caran[2][i]=vv[i];
				caraaz[2][i]=vn[i];
				carar[2][i]=vaz[i];
			}
			break;
		case 4:
			for(int i=0;i<N;i++){
				vv[i]=carav[2][i];
				vn[i]=caran[2][i];
				vaz[i]=caraaz[2][i];
				vr[i]=carar[2][i];
			}
			for(int i=0;i<N;i++){
				carav[2][i]=vn[i];
				caran[2][i]=vaz[i];
				caraaz[2][i]=vr[i];
				carar[2][i]=vv[i];
			}
			break;
	}
}

void mover_FB(int caran[N][N], int carar[N][N], int caraam[N][N], int carab[N][N], int a){ //1 = R ; 2 = R' ; 3 = L ; 4 = L' 
	switch(a){
		int vn[N],vr[N],vam[N],vb[N],b,c;
		case 1:
			for(int i=0;i<N;i++){
				vn[i]=caran[i][0];
				vr[i]=carar[i][2];
				vam[i]=caraam[2][i];//123 amarillo pasa como 321 a azul
				vb[i]=carab[0][i];//123 azul pasa como 321 a blanco
			}
			b=vn[0];
			vn[0]=vn[2];
			vn[2]=b;
			c=vr[0];
			vr[0]=vr[2];
			vr[2]=c;
			for(int i=0;i<N;i++){
				caran[i][0]=vam[i];
				carar[i][2]=vb[i];
				caraam[2][i]=vr[i];
				carab[0][i]=vn[i];
			}
			break;
		case 2:
			for(int i=0;i<N;i++){
				vn[i]=caran[i][0];
				vr[i]=carar[i][2];
				vam[i]=caraam[2][i];//123 amarillo pasa como 321 a azul
				vb[i]=carab[0][i];//123 azul pasa como 321 a blanco
			}
			b=vb[0];
			vb[0]=vb[2];
			vb[2]=b;
			c=vam[0];
			vam[0]=vam[2];
			vam[2]=c;
			for(int i=0;i<N;i++){
				caran[i][0]=vb[i];
				carar[i][2]=vam[i];
				caraam[2][i]=vn[i];
				carab[0][i]=vr[i];
			}
			break;
		case 3:
			for(int i=0;i<N;i++){
				vn[i]=caran[i][2];
				vr[i]=carar[i][0];
				vam[i]=caraam[0][i];//123 amarillo pasa como 321 a azul
				vb[i]=carab[2][i];//123 azul pasa como 321 a blanco
			}
			b=vb[0];
			vb[0]=vb[2];
			vb[2]=b;
			c=vam[0];
			vam[0]=vam[2];
			vam[2]=c;
			for(int i=0;i<N;i++){
				caran[i][2]=vb[i];
				carar[i][0]=vam[i];
				caraam[0][i]=vn[i];
				carab[2][i]=vr[i];
			}
			break;
		case 4:
			for(int i=0;i<N;i++){
				vn[i]=caran[i][2];
				vr[i]=carar[i][0];
				vam[i]=caraam[0][i];//123 amarillo pasa como 321 a azul
				vb[i]=carab[2][i];//123 azul pasa como 321 a blanco
			}
			b=vn[0];
			vn[0]=vn[2];
			vn[2]=b;
			c=vr[0];
			vr[0]=vr[2];
			vr[2]=c;
			for(int i=0;i<N;i++){
				caran[i][2]=vam[i];
				carar[i][0]=vb[i];
				caraam[0][i]=vr[i];
				carab[2][i]=vn[i];
			}
			break;
	}
}
