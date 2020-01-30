#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main() {

  //The variable assignment
  string farm, produce;
  int produce_amount;
  float produce_cost; 
  float total_cost; 
  float amount_paid;
  float remainder;
  
  cout << "What is the name of your farm? ";
  getline (cin,farm);

  cout << "What produce do you need to purchase? ";
  cin >> produce;

  cout << "How many " << produce << " do you need?";
  cin >> produce_amount;

  cout << "What is the total cost of " << produce ;
  cin >> produce_cost;
  cin.ignore(100, '$') ; //
  cout << endl << endl;

  total_cost = produce_cost * produce_amount;

  cout << "You purchased " << produce_amount << " " << produce << " @" << produce_cost << endl << endl;
  cout << "How much are you paying? ";
  cin >> amount_paid;
  cin.ignore(100, '$') ; //
  cout << endl << endl;

  remainder = total_cost - amount_paid;
  

  cout << "You've purchased " << produce_amount << " " << produce << " @" << produce_cost << "each" << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << setfill('.');
  cout << left;
  cout << setw(20);

  cout << "Amount paid:" << right << " $ " << amount_paid << "\n";
  cout << left;
  cout << setw(20);
  cout << "Cost:"  << right << " $ " << total_cost << "\n";
  cout << left;
  cout << setw(20);
  cout << "Cash returned:" << left << setfill('.') << setw << " $ " << remainder << "\n";

  cout << "Thank you for shopping at " << farm << endl << endl;

  return 0;


  
  

}
