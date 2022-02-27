#include <iostream>
#include<iomanip>
using namespace std;

double getGrossSalary(double salary)
{
    double gross_salary=0;
    if(salary<1500)
    {
        gross_salary=  salary+(10*salary)/100+(90*salary)/100;
       
    }
    else 
    {
        gross_salary = salary + 500 + (98*salary)/100;
    }
     return gross_salary;
}
int main() {
	// your code goes here
	int s;
	cin>> s;
	while(s--)
	{
	    double a;
	    cin>>a;
	    cout <<fixed<<setprecision(2)<< getGrossSalary(a)<< endl;
	}
	
	return 0;
}
