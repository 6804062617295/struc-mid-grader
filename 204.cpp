#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int year[n]; float grade[n]; char help[n];
    int c1 = 0;
    int c2 = 0;
    
    for (int i = 0; i < n; i++){
        cin >> year[i] >> grade[i] >> help[i];
    }
    for (int i = 0; i < n; i++){
        if (grade[i] >= 3.00) {
            cout << "approved" << endl;
            if (help[i] == 'N') {
                c1++;
            }
        } 
        else if (year[i] >= 2 && grade[i] >= 2.50 && help[i] == 'Y') {
            cout << "approved" << endl;
        }
        else {
            if (year[i] < 2) {
                cout << "not approved:year < 2" << endl;
            }
            else if (grade[i] < 2.50) {
                cout << "not approved:grade < 2.50" << endl;
            }
            else if (help[i] == 'N') {
                cout << "not approved:no help" << endl;
            }
            else {
                cout << "not approved" << endl;
            }
            
            if (help[i] == 'Y') {
                c2++;
            }
        }
    }
    cout << c1 << endl;
    cout << c2 << endl;
    return 0;
}