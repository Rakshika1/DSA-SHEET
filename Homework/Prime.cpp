#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "THIS IS A NOT A PRIME NUMBER";
            break;
        }
    }
    cout << "prime number";
    return 0;

    return 0;
}