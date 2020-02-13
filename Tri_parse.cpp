include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int a, b, c;
    int counter = 0;
    ifstream Tri_file;
    Tri_file.open("/home/ti239/Documents/Tri_value.txt");
    Tri_file >> a >> b >> c;
    while( Tri_file )
    {
        //cout << a << " " << "I am A" << "\n";
        //cout << b << " " << "I am B" << "\n";
        //cout << c << " " << "I am C" << "\n";
        counter++;
        Tri_file >> a >> b >> c;
        if(a+b > c && b+c > a && a+c > b)
        {
             if( a==b && b==c)
             {
	          cout << "The values " << a << " " << b << " and " 
                       << c << "  form a equilateral triangle\n" ;
             }
             else if(a==b || a==c || b==c)
             {
                  cout << "The values " << a << " " << b << " and " << c 
                       << " form an form a isosceles triangle\n";  
             {
             else
             {
                  cout << "The values " << a << " " << b << " and " 
                       << c << "  form a scalene triangle\n";
             }
        } 
        else
        {
            cout << "This is not a triangle";
        }
    }
    cout << "Read in " << counter << " data sets.\n\n";

    return 0;
}
