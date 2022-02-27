#include <iostream>
using namespace std;

int main() {
	// your code goes here
/*	int s;
	cin>>s;
	
	while(s--)
	{
	    int hardness, carbon, tensile;
	    cin>> hardness >> carbon >> tensile;
	    
	    if(hardness>50 && carbon <0.7 && tensile>5600)
	    {
	        cout << 10 << endl;
	    }
	    else if(hardness>50 && carbon<0.7)
	    {
	        cout << 9 << endl;
	    }
	    else if(carbon<0.7 &&tensile>5600)
	    {
	        cout << 8 << endl;
	    }
	    else if(hardness>50 && tensile>5600)
	    {
	        cout << 7 << endl;
	    }
	    else if(hardness>50 || carbon<0.7 || tensile>5600)
	    {
	        cout << 6 << endl;
	    }
	    else if(hardness<50 && carbon>0.7 && tensile<5600)
	    {
	        cout << 5 << endl;
	    }
	    
	    
	}*/
	int t;
        cin >> t;
        while(t--)
        {
            int h,ts;
            double cc;
            cin>>h>>cc>>ts; 
            if(h>50 && cc<0.7)
                {
                    if(ts>5600)
                        {
                        cout <<10 <<endl;
                        }
                  
                     else
                        {
                            cout <<9 <<endl;
                        }
                }
             else if(cc<0.7 && ts>5600)
            {
                cout <<8 <<endl;
            }   
            else if(h>50 && ts>5600)
            {
                cout <<7 <<endl;
            }   
            else if(h>50 || cc<0.7 || ts>5600)
            {
                cout <<6<<endl;
            }   
            else
            {
                cout <<5 <<endl;
            }   
        }
    	// your code goes here
    	return 0;
	return 0;
}
