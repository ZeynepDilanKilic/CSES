#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int mx = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        mx =  max(x,mx);
        ans +=  mx - x;
    }
    cout << ans;
}
