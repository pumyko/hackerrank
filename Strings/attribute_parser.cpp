#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <sstream>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();  // Remove the leftover newline after cin >> n >> q; otherwise, getline() would read it.

    stack<string> tags;
    map<string, string> attributes;

    string line;

    // Reading HRML
    for (int i = 0; i < n; i++) {
        getline(cin, line);  // Read the entire line up to '\n'; unlike cin >>, getline() does not stop at spaces.

        // Closing tag
        if (line[1] == '/') {
            tags.pop();
            continue;
        }

        // Opening tag
        stringstream ss(line);  // Treat the string as an input stream, allowing us to extract individual tokens.

        string tag;
        ss >> tag; // Extract the first token (up to the first space): tag = "<tag1"

        tag = tag.substr(1); // Remove the first character '<': tag = "tag1"

        if (tag.back() == '>') { // Remove '>' if it is the last character.
            tag.pop_back();
        }

        // Building the full path
        string path;

        if (tags.empty()) { // If the stack is empty, the tag is at the top level.
            path = tag;
        }
        else { // Otherwise, add the current tag to its parent's path: "tag1.tag2".
            path = tags.top() + "." + tag;
        }

        tags.push(path); // Stack: tag1; tag1.tag2; tag1.tag2.tag3; ...

        // Reading attributes
        string attr, equal, value;

        while (ss >> attr >> equal >> value) { // Extract the attribute name, equal sign, and value.
            if (value.back() == '>') { // Remove '>' if it is the last character.
                value.pop_back();
            }

            value = value.substr(1, value.size() - 2); // Remove the first and last characters (quotation marks).

            attributes[path + "~" + attr] = value; // Store the attribute using its full path: tag1.tag2~name.
        }
    }

    // Processing queries
    for (int i = 0; i < q; i++) {
        string query;
        getline(cin, query);

        // Example: tag1.tag2~name -> output the corresponding attribute value.
        if (attributes.find(query) != attributes.end()) {
            cout << attributes[query] << '\n';
        }
        else {
            cout << "Not Found!" << '\n';
        }
    }

    return 0;
}
