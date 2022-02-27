#include<iostream>
using namespace std;

int main()

    {
        int s;
        cin >> s;
        int sum=0;
       

      
        while(s--)
        {
              int n;
              cin>> n;
               int ld;
               int fd;

            ld = n%10;
            while(n>9)
            {
                n/=10;

            }
            sum = n+ld;
               cout<<sum<< endl;
            

        }
     

    }

