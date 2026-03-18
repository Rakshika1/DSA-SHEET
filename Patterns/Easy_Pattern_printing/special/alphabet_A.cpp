#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int mid = n / 2;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (
                (row <= mid && (col == mid - row || col == mid + row)) ||
                (row == mid) ||
                (row > mid && (col == 0 || col == n - 1)))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}