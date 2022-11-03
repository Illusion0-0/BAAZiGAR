vector<Contact> ContactManager::searchByPhoneNumberPrefix(
    const string &phoneNumberPrefix) {
    // vector<Contact> result;
    // for (auto &contact : contacts) {
    //     if (contact.getPhoneNumber().find(phoneNumberPrefix) == 0) {
    //         result.push_back(contact);
    //     }
    // }
    // return result;

    return phoneNumberTrieObj.searchPrefix(phoneNumberPrefix);
}