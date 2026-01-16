#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ai[100];
    for (int i = 0; i < n; i++){
        cin >> ai[i];
    }

    // part A
    cout << "a) ";
    for (int i = 0; i < 4; i++){
        cout << ai[i] << " ";
    }
    cout << endl;

    // part B,C
    int B[20], C[20];
    int nb = 0, nc = 0;
    for (int i = 0; i < n; i++){
        if (ai[i] > ai[2]){
            B[nb] = ai[i];
            C[nc] = i;
            nb++, nc++;
        }
    }
    cout << "b) ";
    for (int i = 0; i < nb; i++){
        cout << B[i] << " ";
    }
    cout << endl;

    // part C
    cout << "c) ";
    for (int i = 0; i < nc; i++){
        cout << C[i] << " ";
    }
    cout << endl;

    //part D
    int newn1 = n + 1;
    int D[1];
    D[0] = ai[2] + ai[3];
    ai[n] = D[0];
    cout << "d) ";
    for (int i = 0; i < newn1; i++){
        cout << ai[i] << " ";
    }
    cout << endl;

    //part E
    int E[1];
    E[0] = ai[2] - ai[4];
    if (E[0] < 0) {
        E[0] = E[0] * -1;
    }
    ai[3] = E[0];
    cout << "e) ";
    for (int i = 0; i < newn1; i++){
        cout << ai[i] << " ";
    }
    cout << endl;

    // part F
    if(ai[1] > ai[5]){
        cout << "f) 2"  << endl;
    }
    else{
        cout << "f) 6" << endl;
    }

    //part G
    int temp = ai[1];        
    ai[1] = ai[newn1 - 1];  
    ai[newn1 - 1] = temp;
    cout << "g) ";
    for (int i = 0; i < newn1; i++){
        cout << ai[i] << " ";
    }
    cout << endl;
    
    // part H
    int H[100];
    int nh = 0;
    for (int i = 0; i < newn1; i++){
        if (ai[i] % 2 == 0){
            H[nh] = ai[i];
            nh++;
        }
    }
    cout << "h) new=[";
    for (int i = 0; i < nh; i++){
        cout << H[i];
        if (i != nh - 1) {
            cout << " ";
        }
    }
    cout << "]";
    cout << endl;
   return 0;
}