#include "cms.h"

#include <bits/stdc++.h>

#include "lib/ContactManager/input.cpp"
#include "lib/ContactManager/output.cpp"
#include "lib/ContactManager/search/search.cpp"
#include "lib/ContactManager/validation/validate.cpp"

using namespace std;

Contact::Contact(const string &firstName, const string &lastName,
                 const string &phoneNumber) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
}

const string Contact::getFirstName() { return this->firstName; }

const string Contact::getLastName() { return this->lastName; }

const string Contact::getPhoneNumber() { return this->phoneNumber; }

void ContactManager::addContact(const Contact &contact) {
    contacts.push_back(contact);
}

string ContactManager::toLowerString(const string inputString) {
    string result;
    for (auto character : inputString) {
        result += tolower(character);
    }
    return result;
}