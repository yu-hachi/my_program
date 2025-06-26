#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
    int arow, acolumn, brow, bcolumn;
    int A[100][100], B[100][100],C[100][100];

    cout << "行列計算 < A * B = C >" << endl;
    cout << "Aの行数を入力してください：";
    cin >> arow;
    cout << "Aの列数を入力してください：";
    cin >> acolumn;

    for (int i = 0; i < arow; i++) {
        for (int j = 0; j < acolumn; j++) {
            A[i][j] = 0;
        }
    }

    cout << "行列Aを入力してください(列間は空白を挿入)↓" << endl;
    for (int i = 0; i < arow; i++) {
        cout << i + 1 << "行目：";
        for (int j = 0; j < acolumn; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Bの行数を入力してください：";
    cin >> brow;
    cout << "Bの列数を入力してください：";
    cin >> bcolumn;

    for (int i = 0; i < brow; i++) {
        for (int j = 0; j < bcolumn; j++) {
            B[i][j] = 0;
        }
    }

    cout << "行列Bを入力してください(列間は空白を挿入)↓" << endl;
    for (int i = 0; i < brow; i++) {
        cout << i + 1 << "行目：";
        for (int j = 0; j < bcolumn; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < arow; i++) {
        for (int j = 0; j < bcolumn; j++) {
            C[i][j] = 0;
        }
    }

    if (acolumn != brow) {
        cout << "定義不可です";
    }
    else {
        for (int i = 0; i < arow; i++) {
            for (int j = 0; j < bcolumn; j++) {
                for (int k = 0; k < acolumn; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }


        for (int i = 0; i < arow; i++) {
            for (int j = 0; j < bcolumn; j++) {
                printf("%3d ",C[i][j]);
            }
            cout << endl;
        }
    }
    system("pause");
}

