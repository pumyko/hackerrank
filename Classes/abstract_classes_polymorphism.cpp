#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

/*
query(n) capacity
get/set for i in range 1..query
set(key, val)
get(key) -> val
out -1 if no such key

3 1
set 1 2
get 1
get 2
*/
struct Node {
    int key;
    int value;
    Node* next;
    Node* prev;
    Node(int k, int v) : key(k), value(v), next(nullptr), prev(nullptr) {}
};

class Cache {
protected:
    int capacity;
    list<pair<int, int>> dq; // key, value
    unordered_map<int, list<pair<int, int>>::iterator> mp; // key, iterator to list     
};

class LRUCache : public Cache {
public: 
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1; // Key not found
        } else {
            // Move the accessed item to the front of the list
            dq.splice(dq.begin(), dq, mp[key]);
            return mp[key]->second; // Return the value
        }
    }

    void set(int key, int value) {
        if (mp.find(key) != mp.end()) {
            // Key exists, update the value and move it to the front
            dq.splice(dq.begin(), dq, mp[key]);
            mp[key]->second = value;
        } else {
            // Key does not exist, check capacity
            if (dq.size() == capacity) {
                // Remove the least recently used item
                auto last = dq.back();
                mp.erase(last.first);
                dq.pop_back();
            }
            // Insert the new key-value pair at the front
            dq.emplace_front(key, value);
            mp[key] = dq.begin();
        }
    }
};

int main() {
    int n, capacity, i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for (i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "set") {
            int key, val;
            cin >> key >> val;
            l.set(key, val);
        } else if (op == "get") {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
    }
    return 0;
}
