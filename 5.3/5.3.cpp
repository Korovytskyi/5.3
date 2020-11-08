// 5.3.cpp : This file contains the 'main' function. Program execution begins and ends there
#include <iostream>
#include <cmath>
using namespace std;
double g(const double x);
int main()
{
	double zp, zk, a;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double zg = (zk - zp) / n;
	double z = zp;
	while (z <= zk)

	{

		a = g(2 * z) + (g)((g)(2 * z + (z * z)) + g(1.5));

		cout << z << " " << a << endl;
		z += zg;
	}
	return 0;

}

	   double g(const double x)
	   {
		   if (abs(x) >= 1)
			   return sin(x)/cos(x);
		   else
		   {
			   double S = 0;
			   int n=0 ;
			   double a = 1;
			   S = a;
			   do
			   {
				   n++;
				   double R =pow(x,2*n) ;
				   a *= R;
				   S += a;
			   } while (n < 6);
			   return S;

		   }
	   }


	