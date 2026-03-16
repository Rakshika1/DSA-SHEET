// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int nr, nc;
//     cin >> nr;
//     cin >> nc;
//     for (int row = 0; row < nr; row++)
//     {
//         for (int col = 0; col < nc; col++)
//         {

//             if (row == 0 || row == nr - 1 || col == 0 || col == nc - 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//method 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nr, nc;
    cin >> nr;
    cin >> nc;
    for (int row = 0; row < nr; row++)
    {
        if (row == 0 || row == nr - 1)
        {
            for (int col = 0; col < nc; col++)
            {
                cout << "*";
            }
        }
        else
        {

            // remainig middle rows
            cout << "*";

            for (int i = 0; i < nc - 2; i++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}