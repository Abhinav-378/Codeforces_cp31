#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string res = "NO";
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp ;
            if(temp == k) res = "YES";
        }
        cout << res << endl;
        
        
    }

    return 0;
}
