#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='.')res++;
        }
        for(int i=0; i<n-2; i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                res = 2;
                break;
            }
        }
        cout << res << endl;

    }
    return 0;
}
