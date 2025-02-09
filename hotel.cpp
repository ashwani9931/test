#include <iostream>
#include <string>

using namespace std;

const int MAX_CUSTOMERS = 100; // Maximum number of customers

class Customer {
public:
    string name;
    string address;
    string phone;
    int roomNumber;
    int stayDuration;
    double billAmount;

    Customer() : roomNumber(0), stayDuration(0), billAmount(0.0) {}
};

class HotelManagement {
private:
    Customer customers[MAX_CUSTOMERS];
    int customerCount;
    int availableRooms;

public:
    HotelManagement(int rooms) : customerCount(0), availableRooms(rooms) {}

    void bookRoom() {
        if (availableRooms <= 0) {
            cout << "No rooms available." << endl;
            return;
        }

        if (customerCount >= MAX_CUSTOMERS) {
            cout << "Customer limit reached." << endl;
            return;
        }

        string name, address, phone;
        int duration;
        double ratePerDay = 100.0; // Example rate

        cout << "Enter customer name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter phone number: ";
        getline(cin, phone);
        cout << "Enter duration of stay (in days): ";
        cin >> duration;
        cin.ignore(); // To consume the newline character left by cin

        double bill = duration * ratePerDay;
        int roomNo = 101 + customerCount; // Simple room number assignment

        customers[customerCount] = Customer();
        customers[customerCount].name = name;
        customers[customerCount].address = address;
        customers[customerCount].phone = phone;
        customers[customerCount].roomNumber = roomNo;
        customers[customerCount].stayDuration = duration;
        customers[customerCount].billAmount = bill;

        customerCount++;
        availableRooms--;

        cout << "Room booked successfully! Room Number: " << roomNo << endl;
    }

    void displayCustomers() {
        if (customerCount == 0) {
            cout << "No customers to display." << endl;
            return;
        }

        for (int i = 0; i < customerCount; ++i) {
            cout << "Name: " << customers[i].name << endl;
            cout << "Address: " << customers[i].address << endl;
            cout << "Phone: " << customers[i].phone << endl;
            cout << "Room Number: " << customers[i].roomNumber << endl;
            cout << "Stay Duration: " << customers[i].stayDuration << " days" << endl;
            cout << "Bill Amount: $" << customers[i].billAmount << endl;
            cout << "---------------------------" << endl;
        }
    }
};

int main() {
    HotelManagement hotel(10); // Hotel with 10 rooms
    int choice;

    do {
        cout << "Hotel Management System" << endl;
        cout << "1. Book Room" << endl;
        cout << "2. Display Customers" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To consume the newline character left by cin

        switch (choice) {
            case 1:
                hotel.bookRoom();
                break;
            case 2:
                hotel.displayCustomers();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
