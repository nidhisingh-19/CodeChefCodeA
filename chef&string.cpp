//chef&string
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int s;cin >> s;
	int mn, mx;
	while(s--)
	{
	    string s1,s2;
	    cin >> s1 >> s2;
	    int l = s1.length();
	    mn=0, mx=0;
	    for(int i=0;i<l;i++)
	    {
	        if(s1[i] == '?' || s2[i] == '?')
	        {
	            mx++;
	        }
	        if(s1[i]!= s2[i] && s1[i]!='?'&& s2[i]!='?')
	        {
	            mn++;
	            mx++;
	        }
	        
	    }
	    std::cout << mn << " " << mx << std::endl;
	    
	}
	return 0;
}
