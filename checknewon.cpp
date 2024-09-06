#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    for (int j = 1; j < a.size(); j++) {
        int key = a[j];
        int i = j - 1;


        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i]; 
            i--;
        }
        a[i + 1] = key;
    }

    for (auto now : a) {
        cout << now << " ";
    }

    return 0;
}