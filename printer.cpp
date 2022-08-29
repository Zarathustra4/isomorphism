#include <iostream>

using std::cout;
using std::endl;

void print_matrix(int** G, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << G[i][j] << " ";
		}
		cout << endl;
	}
}

void print_arr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << " ";
}