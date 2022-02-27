#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    while(n--){
    int m;
    cin>>m;
    int a[m];
    
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+m);
    cout<<a[0]+a[1]<<endl;    
    }
	return 0;
}
