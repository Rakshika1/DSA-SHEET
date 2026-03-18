#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        // printing the spaces

        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        // printing Stars

        for (int stars = 0; stars < (2 * n - 2 * row - 1); stars++)
        {
            cout << "*";
        }

        cout << endl;
    }
}