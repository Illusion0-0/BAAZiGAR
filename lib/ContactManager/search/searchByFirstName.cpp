vector<Contact> ContactManager::searchByFirstName(const string &firstName) {
    // vector<Contact> result;
    // for (auto &contact : contacts) {
    //     if (toLowerString(contact.getFirstName()) ==
    //     toLowerString(firstName)) {
    //         result.push_back(contact);
    //     }
    // }
    // return result;

    return firstNameTrieObj.search(toLowerString(firstName));
}