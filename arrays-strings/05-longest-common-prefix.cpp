#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strs(n);

    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string prefix = strs[0];

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            j++;
        }

        prefix = prefix.substr(0, j);

        if (prefix.empty())
            break;
    }

    cout << prefix;

    return 0;
}