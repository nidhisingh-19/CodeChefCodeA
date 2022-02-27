#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int s;cin>> s;
	while(s--)
	{
	    string str;cin>>str;
	    int l = strlen(str.c_str());
	    int m;
	    if(l%2==0)
	    {
	        m = l/2;
	        
	    }
	    else 
	    {
	        m= (l+1)/2;
	    }
	    for(int i=0;i<m;i++)
	    {
	        for(int j=m;j<l;j++)
	        {
	            if(str[i] == str[j])
	            {
	                str[j] = '0';
	                break;
	                
	            }
	        }
	    }
	    
	    int c=0;
	    for(int i=m;i<l;i++)
	    {
	        if(str[i] !='0')
	        {
	            c++;
	        }
	    }
	        if(c==0)
	        {
	            std::cout <<  "YES" << std::endl;
	        }
	        else
	        
	        {
	            cout << "NO" << endl;
	        }
	    
	    
	}
	return 0;
}
