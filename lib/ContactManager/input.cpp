void ContactManager::inputContact() {
    // Take contact input
    string firstName, lastName, phoneNumber;
    cout << "Enter first name: ";
    cin >> firstName;
    while (!isValidName(firstName)) {
        cout << "Invalid first name. Please enter again: ";
        cin >> firstName;
    }
    cout << "Enter last name: ";
    cin >> lastName;
    while (!isValidName(lastName)) {
        cout << "Invalid last name. Please enter again: ";
        cin >> lastName;
    }
    cout << "Enter phone number: ";
    cin >> phoneNumber;
    // validate phone number
    while (!isValidPhoneNumber(phoneNumber)) {
        cout << "Invalid phone number.\n";
        cout << "Note: format [+] [country code] [subscriber number including "
                "area code] and can have a max 15 digits & min 8 digits\n";
        cout << "Please enter again: ";
        cin >> phoneNumber;
    }

    // Create contact object
    Contact contact(firstName, lastName, phoneNumber);

    // Add contact to contact manager
    addContact(contact);
}