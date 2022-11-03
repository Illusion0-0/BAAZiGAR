#include "searchByFirstName.cpp"
#include "searchByFirstNamePrefix.cpp"
#include "searchByLastName.cpp"
#include "searchByLastNamePrefix.cpp"
#include "searchByPhoneNumber.cpp"
#include "searchByPhoneNumberPrefix.cpp"

using namespace std;

void ContactManager::searchManager() {
    int choice;
    string input;
    vector<Contact> result;
    cout << "Search by:" << endl;
    cout << "1. First Name" << endl;
    cout << "2. Last Name" << endl;
    cout << "3. Phone Number" << endl;
    cout << "4. First Name Prefix" << endl;
    cout << "5. Last Name Prefix" << endl;
    cout << "6. Phone Number Prefix" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter the search string: ";
    cin >> input;
    switch (choice) {
        case 1:
            result = searchByFirstName(input);
            break;
        case 2:
            result = searchByLastName(input);
            break;
        case 3:
            result = searchByPhoneNumber(input);
            break;
        case 4:
            result = searchByFirstNamePrefix(input);
            break;
        case 5:
            result = searchByLastNamePrefix(input);
            break;
        case 6:
            result = searchByPhoneNumberPrefix(input);
            break;
        default:
            cout << "Invalid choice" << endl;
            return;
    }
    printContacts(result);
}