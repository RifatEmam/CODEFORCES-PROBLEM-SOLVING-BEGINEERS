#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool even = false, odd = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even = true;
            else
            odd = true;
        }

        if (even && odd)
        {
            sort(a, a + n);
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
