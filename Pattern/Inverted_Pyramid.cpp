#include <bits/stdc++.h>
using namespace std;


int main(){
    for(int row =0;row<4;row++){
        for(int col =0;col<4-row;col++){
            cout << "*";
        }
        cout << endl;
    }
}