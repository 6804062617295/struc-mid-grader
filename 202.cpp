#include <iostream>
using namespace std;
int main() {
    int A, B; int n = 0;
    int H[30],M[30];
    int i, j, k;
    while(true){
        cin >> A >> B;
        if (A == 0 && B == 0) {
            break;
        }
        H[n] = A;
        M[n] = B;
        n++;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < H[i]; j++){
            for (k = 0; k < M[i]; k++){
                cout << "* ";
            }
            cout << "\n";
            //cout << "\n";
        }
        cout << "\n";
    }
   //cout << n << "\n";
    return 0;
}