#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Ticket {
private:
    string name;
    int age;
    string destination;
    double fare;
public:
    Ticket(string n, int a, string dest, double f) : name(n), age(a), destination(dest), fare(f) {}

    void displayTicket() {
        cout << "---------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Destination: " << destination << endl;
        cout << "Fare: $" << fixed << setprecision(2) << fare << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    string name, destination;
    int age;
    double fare;

    cout << "Welcome to Railway Ticketing System" << endl;
    cout << "-----------------------------------" << endl;

    cout << "Enter passenger name: ";
    getline(cin, name);

    cout << "Enter passenger age: ";
    cin >> age;

    cin.ignore(); // Clear input buffer

    cout << "Enter destination: ";
    getline(cin, destination);

    cout << "Enter fare: $";
    cin >> fare;

    Ticket ticket(name, age, destination, fare);

    cout << "\nTicket Details:" << endl;
    ticket.displayTicket();

    return 0;
}