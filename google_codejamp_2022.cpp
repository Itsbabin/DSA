#include <bits/stdc++.h>
using namespace std;

void print (int r, int c)
{
    char a, b;
    for (int i = 1; i <= (2 * r) + 1; i++)
    {
        if (i % 2 == 0)
        {
            a = '|';
            b = '.';
        }
        else
        {
            a = '+';
            b = '-';
        }

        for (int j = 1; j <= (2 * c) + 1; j++)
        {
            if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 1) || (i == 2 && j == 2))
            {
                cout << ".";
            }
            else
            {
                (j % 2 == 0) ? cout << b : cout << a;
            }
        }
       cout << endl;
    }
}

int main()
{

    int t = 0;
    cin >> t;
    int arr[(2 * t)];
    int count = 1;
    for (int i = 0; i < (2 * t); i = i + 2)
    {
        cin >> arr[i] >> arr[i + 1];
    }
    for (int i = 0; i < (2 * t); i = i + 2)
    {
        cout << "Case #" << count << ":" << endl;

        print(arr[i], arr[i + 1]);
        count++;
    }

    return 0;
}
