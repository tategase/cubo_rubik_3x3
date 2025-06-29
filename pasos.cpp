#include <iostream>
#include "utiles.hpp"
#include "movimientos.hpp"
#include "auxiliares.hpp"
using namespace std;

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