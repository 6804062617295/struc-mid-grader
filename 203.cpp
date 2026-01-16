#include <iostream>
using namespace std;
int main() {
    int n;
    int A[30];
    cin >> n;
    int N = 0;
    for (int x = 0; x < n; x++){
        int m;
        cin >> m;
        A[x] = m;
    }
    int i, j, k;
    for (i = 0; i < n; i++){
        for (j = 0; j < A[i]; j++){
            for (k = 0; k < A[i]; k++){
                if (j == 0 || j == A[i]-1 || k == 0 || k == A[i]-1) {
                    cout << ". ";
                }
                else {
                    cout << "* ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}