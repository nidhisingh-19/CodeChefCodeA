#include <iostream>
#include<algorithm>//gcd
using namespace std;

int main() {
	// your code goes here
	int s;cin>>s;
	for(int i=0;i<s;i++)
	{
	    long long a,b;
	    cin>> a>>b;
	    
	    //find gcd
	    long long gcd  = __gcd(a,b);
	    std::cout <<  gcd<< " ";
	    
	    //find lcm
	    cout<<(a*b)/gcd << endl;
	}
	
	return 0;
}
