#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     for (int row = 0; row < 4; row++)
//     {
//         for (int col = 0; col < 4; col++)
//             if (col == 3 - row)
//             {
//                 for (int i = 3 - row; i < 4; i++)
//                 {
//                     cout << "*";
//                 }
//             }
//             else
//             {
//                 cout << " ";
//             }
//         cout << endl;
//     }

//     return 0;
// }

// int main()
// {
//     for (int row = 0; row < 4; row++)
//     {
//         for (int space = 0; space < 3 - row; space++)
//         {
//             cout << " ";
//         } // loop inner prints "2*row -1"
//         for (int star = 0; star < row + 1; star++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        // stars
        for (int star = 0; star < 2 * row + 1; star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
