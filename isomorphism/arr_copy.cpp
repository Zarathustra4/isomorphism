#include "functions.h"

void row_swap(int** G, int i1, int i2, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		temp = G[i1][i];
		G[i1][i] = G[i2][i];
		G[i2][i] = temp;
	}
}

void column_swap(int** G, int i1, int i2, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		temp = G[i][i1];
		G[i][i1] = G[i][i2];
		G[i][i2] = temp;
	}
}

void copy_matrixes(int** G1, int** G2, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			G1[i][j] = G2[i][j];
		}
	}
}