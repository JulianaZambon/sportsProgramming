#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c;
    /* arranjados em ordem não-decrescente */
    cin >> a >> b >> c;

    /* casos possiveis considerando que estao em ordem nao decrescente */
    ll result1 = a + b + c;   
    ll result2 = a * b * c;     
    ll result3 = a + b * c;    
    ll result4 = a * b + c; 

    ll resultado = min({result1, result2, result3, result4});    
    cout << '-' << resultado << endl;

    return 0;
}
