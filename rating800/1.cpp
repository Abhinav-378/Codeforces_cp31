#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n >> k ;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp ;
            arr.push_back(temp);
        }
        if(k==1){
            bool flag = true;
            for(int i=1; i<n; i++){
                if(arr[i]<arr[i-1]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}
