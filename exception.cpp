#include <iostream>
#include <string>

using namespace std;

// Custom exception class
class InvalidUserException {
public:
    string message;
    InvalidUserException(string msg) : message(msg) {}
};

// Function to check user details
void checkUserDetails(int age, double income, string city, string vehicleType) {
    if (age < 18 || age > 55)
        throw InvalidUserException("Age must be between 18 and 55.");
    if (income < 50000 || income > 100000)
        throw InvalidUserException("Income must be between Rs. 50,000 and Rs. 1,00,000 per month.");
    if (city != "Pune" && city != "Mumbai" && city != "Bangalore" && city != "Chennai")
        throw InvalidUserException("City must be Pune, Mumbai, Bangalore, or Chennai.");
    if (vehicleType != "4-wheeler")
        throw InvalidUserException("Vehicle type must be a 4-wheeler.");
}

int main() {
    int age;
    double income;
    string city, vehicleType;

    try {
        // Get user inputs
        cout << "Enter age: ";
        cin >> age;

        cout << "Enter monthly income: ";
        cin >> income;

        cout << "Enter city (Pune, Mumbai, Bangalore, Chennai): ";
        cin >> ws;  // Clear input buffer
        getline(cin, city);

        cout << "Enter vehicle type (4-wheeler): ";
        cin >> vehicleType;

        // Check if user details meet the conditions
        checkUserDetails(age, income, city, vehicleType);
        
        cout << "All conditions are met. User details are valid." << endl;
    }
    catch (InvalidUserException &e) {
        cout << "Exception: " << e.message << endl;
    }

    return 0;
}
