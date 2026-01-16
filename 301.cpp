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
    for (int i = n-1; i >= 0; i--){
        cout << ai[i];
        if (i != 0) {
            cout << " ";
        }
    }
    return 0;
}