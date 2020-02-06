//A number sorter by Harrison Lane
#include <iostream>
using namespace std;


int main(){
    int a, b, c;
    cout << "Please enter 3 values: ";
    cin >> a >> b >> c;
    if(a >= b && b >= c && a >= b)
    {
        cout << a << " " << b << " " << c << "\n";
        
    }
    else if(a >= b && c >= b && a >= c)
    {
        cout << a << " " << c << " " << b << "\n";
    }
    else if(c >= b && b >= a)
    {
        cout << c << " " << b << " " << a << "\n";
    }
    else if(c >= b && a >= b)
    {
        cout << c << " " << a << " " << b << "\n";
    }
    else if(b >= c && a >= c && b >= a)
    {
        cout << b << " " << a << " " << c << "\n";
    }
    else if(b >= a && c >= a && b >= c)
    {
       cout << b << " " << c << " " << a << "\n";
    }

    else
    {
        cout << "Please enter valid numbers.";
    }

}
    
    
    //For later, what we need to do to improve the effiency of this, 
    is by having a chain of if statements, if A is bigger then the other two, have another if decided 
    whether B or C are bigger, and go from there.
