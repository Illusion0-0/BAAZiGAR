void ContactManager::printContacts(vector<Contact> result) {
    if (result.size() == 0) {
        cout << "No contacts found" << endl;
    } else {
        cout << "Total Records found: " << result.size() << endl;
        cout << "S.No.\tFirst Name\tLast Name\tPhone Number" << endl;
        for (int i = 0; i < result.size(); i++) {
            cout << i + 1 << ".\t" << result[i].getFirstName() << "\t\t"
                 << result[i].getLastName() << "\t\t"
                 << result[i].getPhoneNumber() << endl;
        }
    }
}