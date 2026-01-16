#include <iostream>
#include <cstdio> 
using namespace std;

int main() {
    int i, j;   int num, ppl;
    //cin >> num ;
    
    
    char key[20];
    for (i = 0; i < 20; i++) {
        cin >> key[i];
    }
    
    
    cin >> ppl;
    char ans[ppl][20];
    for (i = 0; i < ppl; i++) {
        for (j = 0; j < 20; j++) {
            cin >> ans[i][j];
        }
    }

    // Calculate scores
    int score[ppl];
    for (i = 0; i < ppl; i++) {
        score[i] = 0;
        for (j = 0; j < 15; j++){
            if (key[j] == ans[i][j]) {
                score[i]++;
            }
        } 
    }
    for (i = 0; i < ppl; i++) {
        for (j = 15; j < 18; j++){
            if (key[j] == ans[i][j]) {
                score[i] += 2;
            }
        } 
    }
    for (i = 0; i < ppl; i++) {
        for (j = 18; j < 20; j++){
            if (key[j] == ans[i][j]) {
                score[i] += 3;
            }
        } 
    }


    for (i = 0; i < ppl; i++) {
       printf("std %d => %d\n",(i+1), score[i]);
    }

    /*
    printf("TEST\n");
    for (i = 0; i < num; i++) {
        for (j = 0; j < ppl; j++) {
            printf("%c", ans[i][j]); // ใช้ %c ปริ้นทีละตัว
        }
        printf("\n"); 
    }
    */
    /*
   printf("key\n");
   for (i = 0; i < num; i++) {
       printf("%c", key[i]);
       //cout << key[i];
   }
       */
    return 0;
}