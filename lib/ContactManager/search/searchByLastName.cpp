vector<Contact> ContactManager::searchByLastName(const string &lastName) {
    // vector<Contact> result;
    // for (auto &contact : contacts) {
    //     if (toLowerString(contact.getLastName()) == toLowerString(lastName))
    //     {
    //         result.push_back(contact);
    //     }
    // }
    // return result;

    return lastNameTrieObj.search(toLowerString(lastName));
}