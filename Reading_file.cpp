#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;


int main() {
    string farm1, farm2, produce;
    int produce_amount;
    float produce_cost; 
    float total_cost; 
    float amount_paid;
    float remainder;
    string line;

    ifstream amo_file("/home/hadrian/Desktop/Amount.txt");
    amo_file >> farm1 >> farm2 >> produce >> produce_amount >> produce_cost >> amount_paid;
    total_cost = produce_cost * produce_amount;
    
    cout << "Welcome to " << farm1 << " " << farm2 << endl;

    cout << "I see you want to purchase " << produce_amount << " " << produce << "'s" << endl;

    cout << "That will cost you " << produce_cost << "$ per " << produce << ". That will be " << total_cost << "$" << endl;

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

    cout << "Thank you for shopping at " << farm1 << " " << farm2 << endl << endl;
