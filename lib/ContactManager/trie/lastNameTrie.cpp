lastNameTrie::lastNameTrie() { root = new TrieNode(); }

void lastNameTrie::insert(const string &lastName, const Contact &contact) {
    TrieNode *currentNode = root;
    for (auto character : lastName) {
        int index = character - 'a';
        if (currentNode->children[index] == NULL) {
            currentNode->children[index] = new TrieNode();
        }
        currentNode = currentNode->children[index];
    }
    currentNode->contacts.push_back(contact);
}

vector<Contact> lastNameTrie::search(const string &lastName) {
    TrieNode *currentNode = root;
    for (auto character : lastName) {
        int index = character - 'a';
        if (currentNode->children[index] == NULL) {
            return vector<Contact>();
        }
        currentNode = currentNode->children[index];
    }
    return currentNode->contacts;
}

vector<Contact> lastNameTrie::searchPrefix(const string &lastNamePrefix) {
    TrieNode *currentNode = root;
    for (auto character : lastNamePrefix) {
        int index = character - 'a';
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
        for (int i = 0; i < 26; i++) {
            if (currentNode->children[i] != NULL) {
                q.push(currentNode->children[i]);
            }
        }
    }
    return result;
}