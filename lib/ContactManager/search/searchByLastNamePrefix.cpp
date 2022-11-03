vector<Contact> ContactManager::searchByLastNamePrefix(
    const string &lastNamePrefix) {
    // vector<Contact> result;
    // for (auto &contact : contacts) {
    //     if (toLowerString(contact.getLastName())
    //             .find(toLowerString(lastNamePrefix)) == 0) {
    //         result.push_back(contact);
    //     }
    // }
    // return result;

    return lastNameTrieObj.searchPrefix(toLowerString(lastNamePrefix));
}