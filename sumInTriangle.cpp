//sumInTriangle
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int s;
	cin>>s;
	for(int i=0;i<s;i++)
	{
	    int n;
	    cin >> n;
	    int arr[n][n];
	    for(int r=0;r<n;r++)
	    {
	        for(int c=0;c<r+1;c++)
	        {

	            cin >> arr[r][c];
     	      }
	        
	    }
	    for(int r = n-2;r>=0;r--)
	    {
	        for(int c = 0;c<r+1;c++)
	        {
	            arr[r][c] += max(arr[r+1][c], arr[r+1][c+1]);
	        }
	    }
	    std::cout <<  arr[0][0] << std::endl;
	}
	return 0;
}
s