void ContactManager::readContacts()
{
    // read small.csv and insert into the tries
    fstream file("m3.csv", ios::in);
    string line, word, temp;
    vector<string> row;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();
            stringstream s(line);
            while (getline(s, word, ','))
            {
                row.push_back(word);
            }
            // cout << row[0] << " " << row[1] << " " << row[2] << endl;
            if (isValidName(row[0]) && isValidName(row[1]) && isValidPhoneNumber(row[2]))
            {
                Contact contact(row[0], row[1], row[2]);
                firstNameTrieObj.insert(toLowerString(row[0]), contact);
                lastNameTrieObj.insert(toLowerString(row[1]), contact);
                phoneNumberTrieObj.insert(row[2], contact);
            }
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
}