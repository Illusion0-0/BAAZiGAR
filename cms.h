// Problem Statement: Build a simple contact management system where contact
// contains first name, last name, phone number Created by test on 03-11-2022.
// Author: Prince Patel, Tarun Mishra, Prince Harshwardhan

#ifndef CMS_H
#define CMS_H

#include <string>
#include <vector>

using namespace std;

class Contact
{
public:
    Contact(const string &firstName, const string &lastName,
            const string &phoneNumber);

    const string getFirstName();
    const string getLastName();
    const string getPhoneNumber();

private:
    string firstName;
    string lastName;
    string phoneNumber;
};

class ContactManager
{
public:
    void getContact();
    void addContact(const Contact &contact);

    vector<Contact> searchByFirstName(const string &firstName);
    vector<Contact> searchByLastName(const string &lastName);
    vector<Contact> searchByPhoneNumber(const string &phoneNumber);

    // search by prefix for first name
    vector<Contact> searchByFirstNamePrefix(const string &firstNamePrefix);
    // search by prefix for last name
    vector<Contact> searchByLastNamePrefix(const string &lastNamePrefix);
    // search by prefix for phone number
    vector<Contact> searchByPhoneNumberPrefix(const string &phoneNumberPrefix);

private:
    vector<Contact> contacts;
};

#endif // CMS_H
