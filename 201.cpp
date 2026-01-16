#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int in, out;
    while (true){
        cin >> in;
        if (in == -1) {
            break;
        }
        out = 100 - in;
        cout << out << endl;
    }
    return 0;
}