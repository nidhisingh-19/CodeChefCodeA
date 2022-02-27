#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int s;
	cin>>s;
	for(int i=0;i<s;i++)
	{
	    int b;
	    cin>>b;
	    
	    b -=2;
	    b/=2;
	    
	    b = b*(b+1)/2;
	    std::cout << b  << std::endl;
	}
	return 0;
}
