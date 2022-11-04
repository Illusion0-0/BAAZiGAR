NameTrie::NameTrie() { root = new TrieNode(); }

void NameTrie::insert(const string &name, const Contact &contact) {
    TrieNode *currentNode = root;
    for (auto character : name) {
        int index = character - 'a';
        if (currentNode->children[index] == NULL) {
            currentNode->children[index] = new TrieNode();
        }
        currentNode = currentNode->children[index];
    }
    currentNode->contacts.push_back(contact);
}

vector<Contact> NameTrie::search(const string &name) {
    TrieNode *currentNode = root;
    for (auto character : name) {
        int index = character - 'a';

        if (currentNode->children[index] == NULL) {
            return vector<Contact>();
        }
        currentNode = currentNode->children[index];
    }
    return currentNode->contacts;
}

vector<Contact> NameTrie::searchPrefix(const string &namePrefix) {
    TrieNode *currentNode = root;
    for (auto character : namePrefix) {
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
