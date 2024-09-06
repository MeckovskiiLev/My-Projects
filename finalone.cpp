#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> fin;

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    fin.push_back(a[0]); 

    for (int i = 1; i < n; i++) {
        fin.push_back(a[i]);
        for (int j = fin.size() - 1; j > 0; j--) {
            if (fin[j] < fin[j - 1]) {
                
                swap(fin[j], fin[j - 1]);
            }
            else {
                break; 
            }
        }
    }

    
    for (auto now : fin) {
        cout << now << " ";
    }

    return 0;
}