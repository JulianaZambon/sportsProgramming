#include <bits/stdc++.h>
using namespace std;

#define ll long long

/* enunciado
    Given an integer n, find an integer x such that:
    2≤x≤n . The sum of multiples of x that are less than or equal to n is maximized.
    Formally, x+2x+3x+⋯+kx where kx≤n is maximized over all possible values of x. 

    input
    The first line contains t (1≤t≤100) — the number of test cases.
    Each test case contains a single integer n (2≤n≤100).

    output
    For each test case, output an integer, the optimal value of x. It can be shown there is only one unique answer.
*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; /* leitura dos casos de teste */

    while (t--) {
        int n;
        cin >> n; /* leitura do valor de n */

        int max_sum = 0; /* inicialização da soma máxima */
        int best_x = 2; /* inicialização do melhor x */

        for (int x = 2; x <= n; ++x) { /* loop para encontrar o melhor x */
            int k = n / x; 
            int sum = x * k * (k + 1) / 2;  /* simplificacao de S(x) com soma de Gauss*/

            if (sum > max_sum) { /* atualização da soma máxima e do melhor x */
                max_sum = sum;
                best_x = x;
            }
        }

        cout << best_x << endl; /* saída */
    }

    return 0;

    return 0;
}
