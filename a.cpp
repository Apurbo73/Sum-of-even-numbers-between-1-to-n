#include <bits/stdc++.h>

using namespace std;

int main()
{
    // find sum of natural numbers from 1 to n
    int n;
    cin >> n;
    int b = 0;
    cout << "Even Numbers are :";
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            b = b + i;
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "Some Of The Even Numbers is :";

    cout << b << endl;
}