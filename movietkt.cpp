#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string movieName;
    float adultTicketPrice, childTicketPrice;
    int adultTicketsSold, childTicketsSold;
    float donationPercentage;

    // Input
    cout << "Enter the movie name: ";
    getline(cin, movieName);
    
    cout << "Enter the adult ticket price: ";
    cin >> adultTicketPrice;
    
    cout << "Enter the child ticket price: ";
    cin >> childTicketPrice;
    
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;
    
    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;
    
    cout << "Enter the percentage of gross amount to be donated to charity: ";
    cin >> donationPercentage;

    // Calculations
    float grossAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
    float donationAmount = (grossAmount * donationPercentage) / 100;
    float netAmount = grossAmount - donationAmount;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
    // Output
    cout << fixed;
    cout << "Movie Name: " << movieName << endl;
    cout << "Gross Amount: $" << setw(5) << grossAmount << endl;
    cout << "Donation Amount("<<donationPercentage<<"%):$"<<setw(5)<<donationAmount<<endl;
    cout << "Net Amount:$"<<setw(5)<<netAmount<< endl;

    return 0;
}
