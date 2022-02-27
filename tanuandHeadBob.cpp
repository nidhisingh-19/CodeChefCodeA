#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	    
	  int s;
	  cin>> s;
	  while(s--)
	  {
	      int n,c=0;
	      
	      cin>>n;
	       char ch[n];
	       for(int  i=0;i<n;i++)
	       {
	           cin>> ch[i];
	       }
	       for(int  i=0;i<n;i++)
	       {
	           if(ch[i] == 'I')
	           {
	               std::cout << "INDIAN" << std::endl;
	               c=1;
	               break;
	           }
	           else if(ch[i] == 'Y')
	           {
	               cout<<"NOT INDIAN" << endl;
	               c=1;
	               break;
	           }
	       }
	       if(c==0)
	       {
	           cout<< "NOT SURE" << endl;
	       }
	      
	  }
	return 0;
}
