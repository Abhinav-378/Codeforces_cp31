#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n ;
        bool flag  = true;
        vector<int> arr;
        unordered_set<int> s;
        for(int i=0 ; i<n; i++){
            int t;
            cin >> t;
            if(t>n || t<=0) flag = false;
            if(s.find(t) != s.end()) flag = false;
            arr.push_back(t);
            s.insert(t);
        }
        if(arr[0]!=1){
            flag = false;
        }
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
        
    }
    return 0;
}