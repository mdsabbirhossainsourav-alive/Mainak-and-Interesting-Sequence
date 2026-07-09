#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long m;
        cin >> n >> m;
        if(m < n)
        {
            cout << "No" << endl;
            continue;
        }
        if(n%2 == 0 && m%2 == 1)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
        if(n % 2)
        {
            while(n > 1)
            {
                cout << 1 << " ";
                n--,m--;
            }
            cout << m << endl;
        }
        else
        {
            while(n > 2)
            {
                cout << 1 << " ";
                n--,m--;
            }
            cout << m/2 << " " << m/2 << "\n";
        }
    }
    return 0;
}
