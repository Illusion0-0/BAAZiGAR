// Problem Statement: Build a simple contact management system where contact
// contains first name, last name, phone number Created by test on 03-11-2022.
// Author: Prince Patel, Tarun Mishra, Prince Harshwardhan

#ifndef CMS_H
#define CMS_H

#include <string>
#include <vector>

using namespace std;

class Contact {
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

class ContactManager {
   public:
    void addContact(const Contact &contact);

    vector<Contact> searchByFirstName(const string &firstName);
    vector<Contact> searchByLastName(const string &lastName);
    vector<Contact> searchByPhoneNumber(const string &phoneNumber);

   private:
    vector<Contact> contacts;
};

#endif  // CMS_H
