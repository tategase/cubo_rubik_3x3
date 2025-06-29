#ifndef AUXILIARES_HPP
#define AUXILIARES_HPP
#include "utiles.hpp"

void rotar_matriz_h(int [N][N]);

void rotar_matriz_ah(int [N][N]);

void mover_RL(int [N][N], int [N][N], int [N][N], int [N][N], int);

void mover_UD(int [N][N], int [N][N], int [N][N], int [N][N], int);

void mover_FB(int [N][N], int [N][N], int [N][N], int [N][N], int);

void esquina_RV(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_VN(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_NA(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);
void esquina_AR(int [N][N], int [N][N], int [N][N], int [N][N], int [N][N], int[N][N]);

#endif