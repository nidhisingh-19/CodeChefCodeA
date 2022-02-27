/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;

int
main ()
{
  int amount = 42;
  double balance = 120;

  double rem_balance;

  //cin >> amount  ;
  //cin >> balance  ;
  if (amount % 5 == 0 && (amount + 0.5) <= balance)
    {
      if (amount < balance)
	{
	  rem_balance = balance - amount - 0.5;
	  printf ("%.2f", rem_balance);
	}


    }
  else
    {
         printf("%.2f", balance);

    }



  return 0;
}

