#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <sstream>
using namespace std;

/*
    Sample Input:
        4 3
        <tag1 value = "HelloWorld">
        <tag2 name = "Name1">
        </tag2>
        </tag1>
        tag1.tag2~name
        tag1~name
        tag1~value

    Sample Output:
        Name1
        Not Found!
        HelloWorld
*/

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();  

    stack<string> tags;
    map<string, string> attributes;

    string line;
    
    for (int i = 0; i < n; i++) {
        getline(cin, line);  
 
        if (line[1] == '/') {
            tags.pop();
            continue
        }

        stringstream ss(line);  
        string tag;
        ss >> tag; 
        tag = tag.substr(1); // Remove the first character '<': tag = "tag1"
        if (tag.back() == '>') { 
            tag.pop_back();
        }

        string path;
        if (tags.empty()) { // If the stack is empty, the tag is at the top level.
            path = tag;
        }
        else { 
            path = tags.top() + "." + tag;
        }
        tags.push(path); // Stack: tag1; tag1.tag2; tag1.tag2.tag3; ...
  
        string attr, equal, value;
        while (ss >> attr >> equal >> value) { 
            if (value.back() == '>') { 
                value.pop_back();
            }
            value = value.substr(1, value.size() - 2); // Remove quotation marks
            attributes[path + "~" + attr] = value; // Store: tag1.tag2~name.
        }
    }

    for (int i = 0; i < q; i++) {
        string query;
        getline(cin, query);
        if (attributes.find(query) != attributes.end()) {
            cout << attributes[query] << '\n';
        }
        else {
            cout << "Not Found!" << '\n';
        }
    }

    return 0;
}
