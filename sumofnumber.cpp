#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;cin >> n;
        ostringstream s1;
        s1<<n;

        string s = s1.str();
        long long int sum=0;
        int len = s.length();

        for(int i=0;i<len;i++)
        {
            char x = s[i];
            int p = x;
            p-=48;

            sum +=p;
        }
        cout<<sum << endl;
    }
}