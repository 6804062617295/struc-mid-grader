#include <iostream>
using namespace std;
int main() {
    int n,m;
    int i,j;
    int anm[100][100];
    cin >> m >> n;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> anm[i][j];
        }
    }
    int I;
    cin >> I;
    /*
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << anm[i][j] << " ";
        }
        cout << endl;
    }
    */

    //part A
    cout << "a) ";
    for (i = m -1; i < m; i++){
        for (j = 0; j < n; j++){
            cout << anm[i][j] << " ";
        }
    }
    cout << endl;

    //part B
    cout << "b) ";
    for (i = 0; i < m; i++){
            cout << anm[i][0] << " ";
        }
    cout << endl;

    //part C,D
    int C[100];
    int nc = 0;
    int RowD[100]; int ColD[100];

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            if (anm[i][j] > anm[0][2]){
                C[nc] = anm[i][j];

                RowD[nc] = i;
                ColD[nc] = j;
                nc++;
            }    
        }
    }
    cout << "c) ";
    for (i = 0; i < nc; i++){
        cout << C[i] << " ";
    }
    cout << endl;

    //part D
    cout << "d) ";
    for (i = 0; i < nc; i++){
        cout << RowD[i] << "," << ColD[i] << " ";
    }
    cout << endl;

    //part E
    int E[100];
    int newn1 = n + 1;

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
                E[i] = anm[i][2] + anm[i][3];
                anm[i][n] = E[i];
            }
    }
    cout << "e)" << endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < newn1; j++){
            cout << anm[i][j] << " ";
        }
        cout << endl;
    }

    //part F
    int F[100];
    for (i = 0; i < m; i++){
        F[i] = anm[i][n];
    }
    for (i = 0; i < m; i++){
        anm[i][n] = anm[i][1];
    }
    for (i = 0; i < m; i++){
        anm[i][1] = F[i];
    }
cout << "f)" << endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < newn1; j++){
            cout << anm[i][j] << " ";
        }
        cout << endl;
    }

    //part G
    int G[100];
    cout << "g)" << endl;
    for (i = 0; i < newn1; i++){
        G[i] = anm[0][i];
    }
    for (i = 0; i < newn1; i++){
        anm[0][i] = anm[m-1][i];
    }
    for (i = 0; i < newn1; i++){
        anm[m-1][i] = G[i];
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < newn1; j++){
            cout << anm[i][j] << " ";
        }
        cout << endl;
    }

    //part H
    int H[100];
    int nh = 0;
    for ( i = 0; i < m; i++){
        for (j = 0; j < newn1; j++){
            if (anm[i][j] % 2 == 0){
                H[nh] = anm[i][j];
                nh++;
            }
        }
    }
    cout << "h) new=[";
    for (i = 0; i < nh; i++){
        cout << H[i];
        if (i != nh - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;

    // part I
    cout << "i)" << endl;
    for (i = 0 ; i < m; i++){
        for (j = 0; j < newn1; j++){
            if (anm[i][j] == I){
                cout << "<" << I << "> ";
            }
            else{
                cout << anm[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//TS PMO FAHHH