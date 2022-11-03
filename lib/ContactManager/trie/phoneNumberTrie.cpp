phoneNumberTrie::phoneNumberTrie() { root = new TrieNode(); }

void phoneNumberTrie::insert(const string &phoneNumber,
                             const Contact &contact) {
    TrieNode *currentNode = root;
    for (auto character : phoneNumber) {
        int index = character - '0';
        if (index == -5) index = 10;
        if (currentNode->children[index] == NULL) {
            currentNode->children[index] = new TrieNode();
        }
        currentNode = currentNode->children[index];
    }
    currentNode->contacts.push_back(contact);
}

vector<Contact> phoneNumberTrie::search(const string &phoneNumber) {
    TrieNode *currentNode = root;
    for (auto character : phoneNumber) {
        int index = character - '0';
        if (index == -5) index = 10;
        if (currentNode->children[index] == NULL) {
            return vector<Contact>();
        }
        currentNode = currentNode->children[index];
    }
    return currentNode->contacts;
}

vector<Contact> phoneNumberTrie::searchPrefix(const string &phoneNumberPrefix) {
    TrieNode *currentNode = root;
    for (auto character : phoneNumberPrefix) {
        int index = character - '0';
        if (index == -5) index = 10;
        if (currentNode->children[index] == NULL) {
            return vector<Contact>();
        }
        currentNode = currentNode->children[index];
    }
    vector<Contact> result;
    queue<TrieNode *> q;
    q.push(currentNode);
    while (!q.empty()) {
        TrieNode *currentNode = q.front();
        q.pop();
        for (auto contact : currentNode->contacts) {
            result.push_back(contact);
        }
        for (int i = 0; i < 11; i++) {
            if (currentNode->children[i] != NULL) {
                q.push(currentNode->children[i]);
            }
        }
    }
    return result;
}