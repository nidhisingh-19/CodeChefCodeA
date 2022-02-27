#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int luck=0;
	for(int i=0;i<n;i++)
	{
	    int cw ;
	    cin>> cw;
	    if(cw%2==0)
	    {
	        luck++;
	    }
	    
	}
	if(luck>(n-luck))
	{
	    std::cout << "READY FOR BATTLE" << std::endl;
	}
	else
	{
	    cout << "NOT READY" << endl;
	}
	return 0;