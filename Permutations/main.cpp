#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }//end if
    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }//end if
    if(n%2 == 0){
        for(int i=2; i<=n; i+=2)
            cout << i << " ";
        for(int i=1; i<n; i+=2)
            cout << i << " ";
    }//end if
    else{
        for(int i=n-1; i>0; i-=2)
            cout << i << " ";
        for(int i=n; i>0; i-=2)
            cout << i << " ";
    }//end else
    return 0;
}//end main
