#include <bits/stdc++.h>
using namespace std;

// int main() {

//     for(int row=0;row<4;row++){
//         for(int col =0;col<4;col++){
//             if(row>=col){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;

//     }
              
              
              
              
//     return 0;
// }


//METHOD -2
int main(){
    for(int row =0;row<4;row++){
        for(int col =0;col<row+1;col++){
            cout << "*";
        }
        cout << endl;
    }
}