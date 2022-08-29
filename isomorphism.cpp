#include "functions.h"
#include <iostream>
#include <windows.h>

using std::cout;
using std::cin;

int faq(int x) {
    int result = x;
    for (int i = x - 1; i > 1; i--) {
        result *= i;
    }
    return result;
}

void pause() {
    cout << "enter smth to conrinue\n";
    char c;
    cin >> c;
}

int main()
{
    //input matrix
    int n;
    cout << "input the number of vertexes (n) - ";
    cin >> n;

    int** G1 = new int* [n];
    int** G2 = new int* [n];
    int** G_copy = new int* [n];

    for (int i = 0; i < n; i++) {
        G1[i] = new int[n];
        G2[i] = new int[n];
        G_copy[i] = new int[n];
    }
    cout << "print the first matrix\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G1[i][j];
        }
    }
    cout << "print the second matrix\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G2[i][j];
            G_copy[i][j] = G2[i][j];
        }
    }
    //input matrix

    //Будемо міняти другу матрицю

    int* tran = new int[n];
    for (int i = 0; i < n; i++) {
        tran[i] = 0;
    }
    cout << "\n\n";

    bool flag = false;

    for (int i = 1; i <= faq(n); i++) {

        for (int k = 0; k < n; k++) {
            if (k == tran[k])continue;
            column_swap(G_copy, k, tran[k], n);
            row_swap(G_copy, k, tran[k], n);
        }
        if (check_matrixes(G1, G_copy, n)) {
            cout << "are isomorphic\n";
            system("pause");
            return 0;
        }
        copy_matrixes(G_copy, G2, n);
        next_tran(tran, n);

    }


    cout << "are not isomorphic\n";
    system("pause");
    return 0;
}
