
	#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string S;
        cin >> S;
        ll count_zero = 0;
        ll count_one = 0;
        for (ll i = 0; i < S.size(); i++)
        {
            if (S[i] == '0')
            {
                count_zero++;
            }
            else
            {
                count_one++;
            }
        }
        if (S.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (count_zero == 1 and count_one != 0 || count_one == 1 and count_zero != 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
	
