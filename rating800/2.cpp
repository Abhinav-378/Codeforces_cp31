#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,x;
        cin >> n >> x ;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp ;
            arr.push_back(temp);
        }
        int maxi = arr[0];
        for(int i=1; i<n; i++){
            maxi = max(maxi , arr[i]-arr[i-1]);
        }
        maxi = max(maxi , 2*(x-arr.back()));
        cout << maxi << endl;
    }

    return 0;
}
