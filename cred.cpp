#include <bits/stdc++.h>

#include "cms.cpp"
#include "cms.h"
using namespace std;

void menu()
{
    cout << "-----CONTACT MANAGEMENT SYSTEM-----" << endl;
    cout << "[1] ADD NEW CONTACT" << endl;
    cout << "[2] SEARCH CONTACT" << endl;
    cout << "[3] EXIT" << endl;
}

int main()
{
    bool ok = true;
    ContactManager cms;
    do
    {
        int operation;
        string firstName, lastName, phoneNumber, firstNamePrefix,
            lastNamePrefix, phoneNumberPrefix;
        vector<Contact> result;
        menu();
        cin >> operation;
        switch (operation)
        {
        case 1:
            cms.inputContact();
            break;

        case 2:
            cms.searchContact();
            break;

        case 3:
            ok = false;
            exit(0);
            break;

        default:
            cout << "Please Choose between 1 to 8" << endl;
        }
        int choice;
        cout << "\nDo you want to continue? (1/0)" << endl;
        cin >> choice;
        if (choice == 0)
        {
            ok = false;
        }

    } while (ok);
}
