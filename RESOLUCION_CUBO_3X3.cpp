#include <iostream>
#include <iomanip>
using namespace std;

const int N=3;

void imprimir_cuadrado1();
void imprimir_cuadrado2();
void imprimir_cuadrados();
void rellenar_matriz(int [N][N]);
void mostrar_matriz(int [N][N]);
void rotar_matriz_h(int [N][N]);
void rotar_matriz_ah(int [N][N]);
void mover_RL(int [N][N], int [N][N], int [N][N], int [N][N], int);
void mover_UD(int [N][N], int [N][N], int [N][N], int [N][N], int);
void mover_FB(int [N][N], int [N][N], int [N][N], int [N][N], int);
void R(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void RP(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void L(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void LP(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void U(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void UP(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void D(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void DP(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void F(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void FP(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void B(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
void BP(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N]);
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
	
	int blanco=1;
	int verde=2;
	int naranja=3;
	int azul=4;
	int rojo=5;
	int amarillo=6;
	
	int carablanca[N][N];
	int caraamarilla[N][N];
	int caraverde[N][N];
	int caraazul[N][N];
	int cararoja[N][N];
	int caranaranja[N][N];

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

void R(int carab[N][N], int carav[N][N], int caraam[N][N], int caraaz[N][N], int caran[N][N]){
	rotar_matriz_h(caran);	
	mover_RL(carab, carav, caraam,caraaz, 1);
	cout<<"R ";
}

void RP(int carab[N][N], int carav[N][N], int caraam[N][N], int caraaz[N][N], int caran[N][N]){
	rotar_matriz_ah(caran);	
	mover_RL(carab, carav, caraam,caraaz, 2);
	cout<<"R' ";
}

void L(int carab[N][N], int carav[N][N], int caraam[N][N], int caraaz[N][N], int carar[N][N]){
	rotar_matriz_h(carar);	
	mover_RL(carab, carav, caraam,caraaz, 3);
	cout<<"L ";
}

void LP(int carab[N][N], int carav[N][N], int caraam[N][N], int caraaz[N][N], int carar[N][N]){
	rotar_matriz_ah(carar);	
	mover_RL(carab, carav, caraam,caraaz,4);
	cout<<"L' ";
}

void U(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int caraam[N][N]){
	rotar_matriz_h(caraam);	
	mover_UD(carav,caran,caraaz,carar,1);
	cout<<"U ";
}

void UP(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int caraam[N][N]){
	rotar_matriz_ah(caraam);
	mover_UD(carav,caran,caraaz,carar,2);	
	cout<<"U' ";
}

void D(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N]){
	rotar_matriz_h(carab);	
	mover_UD(carav,caran,caraaz,carar,3);
	cout<<"D ";
}

void DP(int carav[N][N], int caran[N][N], int caraaz[N][N], int carar[N][N], int carab[N][N]){
	rotar_matriz_ah(carab);	
	mover_UD(carav,caran,caraaz,carar,4);
	cout<<"D' ";
}

void F(int caran[N][N], int carar[N][N], int caraam[N][N], int carab[N][N], int carav[N][N]){
	rotar_matriz_h(carav);	
	mover_FB(caran,carar,caraam,carab,1);
	cout<<"F ";
}

void FP(int caran[N][N], int carar[N][N], int caraam[N][N], int carab[N][N], int carav[N][N]){
	rotar_matriz_ah(carav);	
	mover_FB(caran,carar,caraam,carab,2);
	cout<<"F' ";
}

void B(int caran[N][N], int carar[N][N], int caraam[N][N], int carab[N][N], int caraaz[N][N]){
	rotar_matriz_h(caraaz);
	mover_FB(caran,carar,caraam,carab,3);
	cout<<"B ";
}

void BP(int caran[N][N], int carar[N][N], int caraam[N][N], int carab[N][N], int caraaz[N][N]){
	rotar_matriz_ah(caraaz);	
	mover_FB(caran,carar,caraam,carab,4);
	cout<<"B' ";
}

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



