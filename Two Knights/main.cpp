#include <iostream>

#define ll long long

using namespace std;


int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <=n; i++){
        ll x1 = i*i, x2 = x1*(x1-1)/2;
        if(i > 2)
            x2 -= 4*(i - 1)* (i - 2);
        cout << x2 << endl;
    }


    return 0;
}
