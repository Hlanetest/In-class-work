#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int a, b, c;
    int counter = 0;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
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
			    counter1++;
		    }
		    else if(a==b || a==c || b==c)
		    {
			    counter2++; 
		     //Remmeber we need a counter for each line or we're not getting anywhere
		    }
		    else
		    {
			    counter3++;
		    }
	    } 
	    else{
		    counter4++;
	    }
    }
	
        cout << "There were " << counter1 << " equilateral\n";
        cout << "There were " << counter2 << " Isosceles\n";
        cout << "There were " << counter3 << " Scalene\n";
        cout << "There were " << counter4 << " losers\n";
        cout << "Read in " << counter << " data sets.\n\n";
	return 0;
}
