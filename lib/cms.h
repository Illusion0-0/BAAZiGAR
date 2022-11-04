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
    // Constructor
    Contact(const string &firstName, const string &lastName,
            const string &phoneNumber);

    const string getFirstName();
    const string getLastName();
    const string getPhoneNumber();

   private:
    int uid;
    string firstName;
    string lastName;
    string phoneNumber;
};

class NameTrie {
   public:
    NameTrie();
    void insert(const string &name, const Contact &contact);
    vector<Contact> search(const string &name);
    vector<Contact> searchPrefix(const string &namePrefix);

   private:
    struct TrieNode {
        // TrieNode *children[26];
        map<int, TrieNode *> children;
        vector<Contact> contacts;

        // TrieNode()
        // {
        //     for (int i = 0; i < 26; i++)
        //     {
        //         children[i] = NULL;
        //     }
        // }
    };

    TrieNode *root;
};

class phoneNumberTrie {
   public:
    phoneNumberTrie();
    void insert(const string &phoneNumber, const Contact &contact);
    vector<Contact> search(const string &phoneNumber);
    vector<Contact> searchPrefix(const string &phoneNumberPrefix);

   private:
    struct TrieNode {
        // TrieNode *children[11];
        map<int, TrieNode *> children;
        vector<Contact> contacts;

        // TrieNode()
        // {
        //     for (int i = 0; i < 11; i++)
        //     {
        //         children[i] = NULL;
        //     }
        // }
    };

    TrieNode *root;
};

class ContactManager {
   public:
    void inputContact();
    void addContact(const Contact &contact);
    // valid phone number to be of maximum 14 digits and have + at the beginning
    bool isValidPhoneNumber(const string &phoneNumber);
    // valid first name
    bool isValidName(const string &name);

    void readContacts();
    void searchManager();
    vector<Contact> searchByFirstName(const string &firstName);
    vector<Contact> searchByLastName(const string &lastName);
    vector<Contact> searchByPhoneNumber(const string &phoneNumber);

    // search by prefix for first name
    vector<Contact> searchByFirstNamePrefix(const string &firstNamePrefix);
    // search by prefix for last name
    vector<Contact> searchByLastNamePrefix(const string &lastNamePrefix);
    // search by prefix for phone number
    vector<Contact> searchByPhoneNumberPrefix(const string &phoneNumberPrefix);
    // print result contacts
    void printContacts(vector<Contact> result);
    // making string to lowercase
    string toLowerString(const string inputString);

   private:
    NameTrie firstNameTrieObj;
    NameTrie lastNameTrieObj;
    phoneNumberTrie phoneNumberTrieObj;
};

#endif  // CMS_H
