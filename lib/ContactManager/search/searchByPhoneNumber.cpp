vector<Contact> ContactManager::searchByPhoneNumber(const string &phoneNumber) {
    // vector<Contact> result;
    // for (auto &contact : contacts) {
    //     if (contact.getPhoneNumber() == phoneNumber) {
    //         result.push_back(contact);
    //     }
    // }
    // return result;
    return phoneNumberTrieObj.search(phoneNumber);
}