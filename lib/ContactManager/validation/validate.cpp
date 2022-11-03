bool ContactManager::isValidPhoneNumber(const string &phoneNumber) {
    if (phoneNumber[0] != '+') {
        return false;
    }
    if (phoneNumber.length() > 15 || phoneNumber.length() < 8) {
        return false;
    }
    for (int i = 1; i < phoneNumber.length(); i++) {
        if (!isdigit(phoneNumber[i])) {
            return false;
        }
    }
    return true;
}

bool ContactManager::isValidName(const string &name) {
    for (int i = 0; i < name.length(); i++) {
        if (!isalpha(name[i])) {
            return false;
        }
    }
    return true;
}