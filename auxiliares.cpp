#include <iostream>
#include "auxiliares.hpp"
#include "utiles.hpp"
#include "movimientos.hpp"
using namespace std;

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