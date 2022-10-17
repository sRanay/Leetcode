#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int> alphabets;
    string sentence;
    cin >> sentence;
    for (int i = 0; i < sentence.length(); i++) {
        if (alphabets.find(sentence[i]) == alphabets.end()) {
            alphabets[sentence[i]] = 1;
        }
    }
    if (alphabets.size() != 26) {
        cout << "false" << endl;
    } else {
        cout << "true" << endl;
    }

    return 1;


}