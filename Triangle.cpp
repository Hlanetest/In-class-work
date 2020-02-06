#include <iostream>
using namespace std;


const double pi = 3.14159;

int main()
{
    double pizza_size;
    int a, b, c;
    cout << "Please enter 3 values: ";
    cin >> a >> b >> c;
    if(a+b > c && b+c > a && a+c > b)
    {
    

	    if( a==b && b==c)
	    {
		cout << "The values " << a << " " << b << " and " << c << "  form a equilateral triangle\n" ;
	    }
	    else if(a==b || a==c || b==c )
	    {
		cout << "The values " << a << " " << b << " and " << c << "  form a isosceles triangle\n";
	    }
	 
	    else
	    {
		cout << "The values " << a << " " << b << " and " << c << "  form a scalene triangle\n";
	    }
    }
    else
    {
           cout << "This is not a triangle";
    }
}
