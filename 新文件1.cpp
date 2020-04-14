#include <iostream>
#include <math.h>
using namespace std;

double x (double,double);
double y (double,double);
double z (double);
int main()
{
	double a,b ,c ;
	double ar;
	double r,ran;
	cout << "請輸入邊a:";
	cin >> a ;
	cout << "請輸入邊b:";
	cin >> b ;
	c=x(a,b); 
	
	cout<<"斜邊"<< c <<endl ;
	ar =  y(a,b);
	cout<<"面積"<< ar <<endl<<endl ;
	
	cout << "請輸入員半徑";
	cin >> r;
	ran = z(r);
	cout << "面積"<<ran; 
	
return 0;	
}
double x(double a,double b)
{
	double c;
		c = sqrt (a*a + b*b);
		
return c ;
} 
double y(double a,double b)
{
	double ar;
		ar = a*b/2;
		
return ar ;
} 
double z(double r)
{
	double ran,ar;
		ran = r*r*3.14;
		
return ran ;
} 

