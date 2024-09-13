#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        vector<string> arr;
        for(int i=0; i<10; i++){
            string temp;
            cin >> temp;
            arr.push_back(temp);
        }
        long long res = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                char c = arr[i][j];
                if(c!='.'){
                    if(i>=4 && i<=5 && j>=4 && j<=5){
                        res+=5;
                    }
                    else if(i>=3 && i<=6 && j>=3 && j<=6){
                        res+=4;
                    }
                    else if(i>=2 && i<=7 && j>=2 && j<=7){
                        res+=3;
                    }
                    else if(i>=1 && i<=8 && j>=1 && j<=8){
                        res+=2;
                    }
                    else{
                        res++;
                    }
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}
