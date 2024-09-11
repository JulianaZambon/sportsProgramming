#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        string x, y; /* 10^100 */
        cin >> x >> y;

        /* verificamos atraves do ultimo digito do numero*/
        int ultimo_x = x.back() - '0';  /* converter para um num */
        int ultimo_y = y.back() - '0';

        /* verifica se os dois sao pares */
        if (ultimo_x % 2 == 0 && ultimo_y % 2 == 0)
        {
            cout << "PARCEIROS" << endl;
        }
        else
        {
            cout << "NAO PARCEIROS" << endl;
        }
    }

    return 0;
}
