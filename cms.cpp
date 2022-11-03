#include <bits/stdc++.h>
#include "cms.h"

using namespace std;

Contact::Contact(const string &firstName, const string &lastName, const string &phoneNumber)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
}

const string Contact::getFirstName() { return firstName; }

const string Contact::getLastName() { return lastName; }

const string Contact::getPhoneNumber() { return phoneNumber; }

void ContactManager::addContact(const Contact &contact)
{
    contacts.push_back(contact);
}

vector<Contact> ContactManager::searchByFirstName(const string &firstName)
{
    vector<Contact> result;
    for (const auto &contact : contacts)
    {
        if (contact.getFirstName() == firstName)
        {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByLastName(const string &lastName)
{
    vector<Contact> result;
    for (const auto &contact : contacts)
    {
        if (contact.getLastName() == lastName)
        {
            result.push_back(contact);
        }
    }
    return result;
}

vector<Contact> ContactManager::searchByPhoneNumber(const string &phoneNumber)
{
    vector<Contact> result;
    for (const auto &contact : contacts)
    {
        if (contact.getPhoneNumber() == phoneNumber)
        {
            result.push_back(contact);
        }
    }
    return result;
}
