#include "cms.h"

#include <bits/stdc++.h>

#include "ContactManager/input.cpp"
#include "ContactManager/output.cpp"
#include "ContactManager/readcsv.cpp"
#include "ContactManager/search/search.cpp"
#include "ContactManager/trie/NameTrie.cpp"
#include "ContactManager/trie/phoneNumberTrie.cpp"
#include "ContactManager/validation/validate.cpp"

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

// void ContactManager::addContact(const Contact &contact) {
//     contacts.push_back(contact);
// }

string ContactManager::toLowerString(const string inputString) {
    string result;
    for (auto character : inputString) {
        result += tolower(character);
    }
    return result;
}