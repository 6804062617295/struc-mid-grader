#include <iostream>
using namespace std;
int main() {
    int r,c;
    int i,j;
    int arr[1000][1000];
    cin >> r >> c;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    int rowplus[1000],colplus[1000];
    for (i = 0; i < r; i++) {
        rowplus[i] = 0;
        for (j = 0; j < c; j++) {
            rowplus[i] += arr[i][j];
        }
    }
    int newr = r + 1;
    for (i = 0; i < r; i++) {
        arr[i][c] = rowplus[i];
    }
    for (i = 0; i < c; i++) {
        colplus[i] = 0;
        for (j = 0; j < r; j++) {
            colplus[i] += arr[j][i];
        }
    }
    int newc = c + 1;
    for (i = 0; i < c; i++) {
        arr[r][i] = colplus[i];
    }
    int lastone;
    lastone = 0;
    for (i = 0; i < r; i++) {
        lastone += rowplus[i];
    }
    arr[r][c] = lastone;
    for (i = 0; i < newr; i++) {
        for (j = 0; j < newc; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}