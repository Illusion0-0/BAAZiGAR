vector<Contact> ContactManager::searchByFirstNamePrefix(
    const string &firstNamePrefix) {
    // vector<Contact> result;
    // for (auto &contact : contacts) {
    //     if (toLowerString(contact.getFirstName())
    //             .find(toLowerString(firstNamePrefix)) == 0) {
    //         result.push_back(contact);
    //     }
    // }

    // use trie
    return firstNameTrieObj.searchPrefix(toLowerString(firstNamePrefix));
}