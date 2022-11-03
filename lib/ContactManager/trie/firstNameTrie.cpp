firstNameTrie::firstNameTrie() { root = new TrieNode(); }

void firstNameTrie::insert(const string &firstName, const Contact &contact) {
    TrieNode *currentNode = root;
    for (auto character : firstName) {
        int index = character - 'a';
        if (currentNode->children[index] == NULL) {
            currentNode->children[index] = new TrieNode();
        }
        currentNode = currentNode->children[index];
    }
    currentNode->contacts.push_back(contact);
}

vector<Contact> firstNameTrie::search(const string &firstName) {
    TrieNode *currentNode = root;
    for (auto character : firstName) {
        int index = character - 'a';

        if (currentNode->children[index] == NULL) {
            return vector<Contact>();
        }
        currentNode = currentNode->children[index];
    }
    return currentNode->contacts;
}

vector<Contact> firstNameTrie::searchPrefix(const string &firstNamePrefix) {
    TrieNode *currentNode = root;
    for (auto character : firstNamePrefix) {
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
