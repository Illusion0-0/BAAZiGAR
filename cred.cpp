#include <bits/stdc++.h>
#include <fstream>
#include <sstream>

#include "lib/cms.cpp"
#include "lib/cms.h"
using namespace std;

void menu()
{
    cout << "-----CONTACT MANAGEMENT SYSTEM-----" << endl;
    cout << "[1] READ CONTACTS" << endl;
    cout << "[2] ADD NEW CONTACT" << endl;
    cout << "[3] SEARCH CONTACT" << endl;
    cout << "[4] EXIT" << endl;
}

int main()
{

    bool ok = true, checkRead = false;
    ContactManager cms;
    do
    {
        int operation;
        vector<Contact> result;
        menu();
        cin >> operation;
        switch (operation)
        {
        case 1:
            if (checkRead == true)
            {
                cout << "CONTACTS ALREADY READ" << endl;
                break;
            }
            cms.readContacts();
            checkRead = true;
            break;

        case 2:
            cms.inputContact();
            break;

        case 3:
            cms.searchManager();
            break;

        case 4:
            ok = false;
            exit(0);
            break;

        default:
            cout << "Please Choose between 1 to 4" << endl;
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
