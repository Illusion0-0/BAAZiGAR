#include <bits/stdc++.h>

#include "cms.cpp"
#include "cms.h"
using namespace std;

int main() {
    bool ok = true;
    ContactManager cms;
    do {
        int operation;

        string firstName, lastName, phoneNumber, firstNamePrefix,
            lastNamePrefix, phoneNumberPrefix;
        vector<Contact> result;
        cout << "-----CONTACT MANAGER-----" << endl;
        cout << "-----CHOOSE OPERATION TO PERFORM-----" << endl;
        cout << "-----1) ADD NEW CONTACT-----" << endl;
        cout << "-----2) SEARCH BY FIRST NAME-----" << endl;
        cout << "-----3) SEARCH BY LAST NAME-----" << endl;
        cout << "-----4) SEARCH BY PHONE NUMBER-----" << endl;
        cout << "-----5) PARTIAL SEARCH BY FIRST NAME-----" << endl;
        cout << "-----6) PARTIAL SEARCH BY LAST NAME-----" << endl;
        cout << "-----7) PARTIAL SEARCH BY PHONE NUMBER-----" << endl;
        cout << "-----8) EXIT-----" << endl;
        cin >> operation;
        switch (operation) {
            case 1:

                cms.getContact();
                break;

            case 2:
                cout << "Enter first name to search: ";
                cin >> firstName;
                result = cms.searchByFirstName(firstName);
                for (auto record : result) {
                    cout << record.getFirstName() << " " << record.getLastName()
                         << " " << record.getPhoneNumber() << endl;
                }
                break;

            case 3:
                cout << "Enter last name to search: ";
                cin >> lastName;
                result = cms.searchByLastName(lastName);
                for (auto record : result) {
                    cout << record.getFirstName() << " " << record.getLastName()
                         << " " << record.getPhoneNumber() << endl;
                }
                break;
            case 4:
                cout << "Enter Phone Number to search: ";
                cin >> phoneNumber;
                result = cms.searchByPhoneNumber(phoneNumber);
                for (auto record : result) {
                    cout << record.getFirstName() << " " << record.getLastName()
                         << " " << record.getPhoneNumber() << endl;
                }
                break;
            case 5:
                cout << "Enter first name prefix to search: ";
                cin >> firstNamePrefix;
                result = cms.searchByFirstNamePrefix(firstNamePrefix);
                for (auto record : result) {
                    cout << record.getFirstName() << " " << record.getLastName()
                         << " " << record.getPhoneNumber() << endl;
                }
                break;

            case 6:
                cout << "Enter last name prefix to search: ";
                cin >> lastNamePrefix;
                result = cms.searchByLastNamePrefix(lastNamePrefix);
                for (auto record : result) {
                    cout << record.getFirstName() << " " << record.getLastName()
                         << " " << record.getPhoneNumber() << endl;
                }
                break;
            case 7:
                cout << "Enter phone number prefix to search: ";
                cin >> phoneNumberPrefix;
                result = cms.searchByPhoneNumberPrefix(phoneNumberPrefix);
                for (auto record : result) {
                    cout << record.getFirstName() << " " << record.getLastName()
                         << " " << record.getPhoneNumber() << endl;
                }
                break;
            case 8:
                ok = false;
                break;

            default:
                cout << "Please Choose between 1 to 8" << endl;
        }

    } while (ok);
}
