#include "cms.h"

#include <bits/stdc++.h>

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

vector<Contact> ContactManager::searchByFirstName(const string &firstName) {
    vector<Contact> result;
    for (auto &contact : contacts) {
        if (contact.getFirstName() == firstName) {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByLastName(const string &lastName) {
    vector<Contact> result;
    for (auto &contact : contacts) {
        if (contact.getLastName() == lastName) {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByPhoneNumber(const string &phoneNumber) {
    vector<Contact> result;
    for (auto &contact : contacts) {
        if (contact.getPhoneNumber() == phoneNumber) {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByFirstNamePrefix(
        const string &firstNamePrefix) {
    vector<Contact> result;
    for (auto &contact : contacts) {
        if (contact.getFirstName().find(firstNamePrefix) == 0) {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByLastNamePrefix(
        const string &lastNamePrefix) {
    vector<Contact> result;
    for (auto &contact : contacts) {
        if (contact.getLastName().find(lastNamePrefix) == 0) {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByPhoneNumberPrefix(
        const string &phoneNumberPrefix) {
    vector<Contact> result;
    for (auto &contact : contacts) {
        if (contact.getPhoneNumber().find(phoneNumberPrefix) == 0) {
            result.push_back(contact);
        }
    }
    return result;
}

void ContactManager::getContact() {
    // Take contact input
    string firstName, lastName, phoneNumber;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter phone number: ";
    cin >> phoneNumber;

    // Create contact object
    Contact contact(firstName, lastName, phoneNumber);

    // Add contact to contact manager
    addContact(contact);
}