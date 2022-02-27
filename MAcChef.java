#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int m,x,y;
        cin>>m>>x>>y;
        int cops[100];
        for(int i=0; i<m;i++){
            cin>>cops[i];
        }
        int d = x*y;
        int c=0;
        for(int i=1;i<=100;i++){
            bool safe = true;
            for(int j=0;j<m;j++){
                int lr = max(cops[j]-d,1);
                int rr = min(cops[j]+d,100);
                
                if(i>=lr && i<=rr)
                safe = false;
            }
            if(safe)
            c+=1;
        }
    
        cout<<c<<endl;
    }
	return 0;
}
