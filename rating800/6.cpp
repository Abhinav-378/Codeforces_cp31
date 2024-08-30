#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n ;
        
        map<int, int> mp;
        for(int i=0; i<n; i++){
            int temp ;
            cin >> temp;
            mp[temp]++;
        }
        //ai + ai+1 = ai+1 + ai+2 --> ai = ai+2 
        // i.e. alternate elem should be equal 
        //there should be only two elem with freq n/2
        if(mp.size()>2) cout << "no" << endl;
        else if(mp.size()==1) cout << "yes" << endl;
        else{
            if(abs(mp.begin()->second - mp.rbegin()->second)<=1) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        
    }
    return 0;
}

