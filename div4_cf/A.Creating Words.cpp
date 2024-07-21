#include <bits/stdc++.h>
using namespace std;

#define ll long long

/* enunciado
    Matthew is given two strings a and b, both of length 3. He thinks it's particularly funny to create two
    new words by swapping the first character of a with the first character of b. He wants you to output a
    and b after the swap. Note that the new words may not necessarily be different.

    Input
    The first line contains t
    (1≤t≤100)  — the number of test cases.
    The first and only line of each test case contains two space-separated strings, a
    and b, both of length 3. The strings only contain lowercase Latin letters.

    Output
    For each test case, after the swap, output a
    and b, separated by a space.
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t; /* leitura dos casos de teste */

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        swap(a[0], b[0]); /* troca dos primeiros caracteres das strings */

        cout << a << " " << b << endl; /* saída */
    }

    return 0;
}
