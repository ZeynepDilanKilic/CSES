#include <iostream>
#include <string>

#define ll long long

using namespace std;


int main()
{
    string s;
    cin >> s;

    int ans = 1, x = 0;

    char y = 'A';

    for (char a:s){
       if(a==y){
        ++x;
        ans = max(x,ans);
       }else{
           y = a;
           x = 1;
       }
    }

    cout << ans;

    return 0;
}
