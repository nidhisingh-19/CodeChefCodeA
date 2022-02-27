#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int s;cin>>s;
	while(s--)
	{
	    int app, orn, goldCoin;
	    cin >>app>>orn >> goldCoin;
	    while(goldCoin >0)
	    {
	        if(app<orn)
	        {
	            app++;
	            goldCoin--;
	            
	        }
	        if(orn <app)
	        {
	            orn++;
	            goldCoin--;
	        }
	        if(app == orn)
	        {
	            break;
	        }
	    }
	        if(app>orn)
	        {
	            std::cout <<  app-orn << std::endl;
	        }
	        else
	        {
	            cout << orn-app << endl;
	        }
	    
	}
	return 0;
}
