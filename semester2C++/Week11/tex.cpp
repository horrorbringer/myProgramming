#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Data structures to store Motorbike, Car, and PassApp information
struct Vehicle {
    string make;
    string model;
    string plateNumber;
};

// Functions to handle Motorbike, Car, and PassApp operations
void inputVehicle(vector<Vehicle>& vehicles, const string& type) {
    Vehicle v;
    cout << "Enter " << type << " Make: ";
    cin >> v.make;
    cout << "Enter " << type << " Model: ";
    cin >> v.model;
    cout << "Enter " << type << " Plate Number: ";
    cin >> v.plateNumber;
    vehicles.push_back(v);
    cout << type << " added successfully!" << endl;
}

void listVehicles(const vector<Vehicle>& vehicles, const string& type) {
    cout << "Listing all " << type << "s:" << endl;
    for (const auto& v : vehicles) {
        cout << "Make: " << v.make << ", Model: " << v.model << ", Plate Number: " << v.plateNumber << endl;
    }
}

void searchVehicle(const vector<Vehicle>& vehicles, const string& type) {
    string plate;
    cout << "Enter " << type << " Plate Number to search: ";
    cin >> plate;
    for (const auto& v : vehicles) {
        if (v.plateNumber == plate) {
            cout << "Found " << type << ": Make: " << v.make << ", Model: " << v.model << ", Plate Number: " << v.plateNumber << endl;
            return;
        }
    }
    cout << type << " not found." << endl;
}

void updateVehicle(vector<Vehicle>& vehicles, const string& type) {
    string plate;
    cout << "Enter " << type << " Plate Number to update: ";
    cin >> plate;
    for (auto& v : vehicles) {
        if (v.plateNumber == plate) {
            cout << "Enter new " << type << " Make: ";
            cin >> v.make;
            cout << "Enter new " << type << " Model: ";
            cin >> v.model;
            cout << "Enter new " << type << " Plate Number: ";
            cin >> v.plateNumber;
            cout << type << " updated successfully!" << endl;
            return;
        }
    }
    cout << type << " not found." << endl;
}

void deleteVehicle(vector<Vehicle>& vehicles, const string& type) {
    string plate;
    cout << "Enter " << type << " Plate Number to delete: ";
    cin >> plate;
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if (it->plateNumber == plate) {
            vehicles.erase(it);
            cout << type << " deleted successfully!" << endl;
            return;
        }
    }
    cout << type << " not found." << endl;
}

void vehicleMenu(vector<Vehicle>& vehicles, const string& type) {
    int choice;
    do {
        cout << "======== " << type << " Management ========" << endl;
        cout << "1. Input " << type << endl;
        cout << "2. List " << type << "s" << endl;
        cout << "3. Search " << type << endl;
        cout << "4. Update " << type << endl;
        cout << "5. Delete " << type << endl;
        cout << "6. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inputVehicle(vehicles, type); break;
            case 2: listVehicles(vehicles, type); break;
            case 3: searchVehicle(vehicles, type); break;
            case 4: updateVehicle(vehicles, type); break;
            case 5: deleteVehicle(vehicles, type); break;
            case 6: cout << "Returning to main menu..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
}

int main() {
    vector<Vehicle> motorbikes;
    vector<Vehicle> cars;
    vector<Vehicle> passApps;

    int choice;
    do {
        cout << "======== 168 Auto Garage ========" << endl;
        cout << "1. Manage Motorbikes" << endl;
        cout << "2. Manage Cars" << endl;
        cout << "3. Manage PassApps" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: vehicleMenu(motorbikes, "Motorbike"); break;
            case 2: vehicleMenu(cars, "Car"); break;
            case 3: vehicleMenu(passApps, "PassApp"); break;
            case 4: cout << "Exiting the application. Goodbye!" << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
