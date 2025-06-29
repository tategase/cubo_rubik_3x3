#include <iostream>
#include "movimientos.hpp"
#include "utiles.hpp"
#include "auxiliares.hpp"
using namespace std;

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
