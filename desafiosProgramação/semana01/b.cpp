#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'A']++;
    }

    /* contar quantos caracteres impares tem */
    int impar = 0;
    char guarda_impar = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 1)
        {
            impar++;
            guarda_impar = i + 'A'; 
        }
    }

    /* se tiver mais de um caractere impar, nao tem solucao */
    if (impar > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        if (impar == 1)
        {
            freq[guarda_impar - 'A']--; 
        }

        string palindromo;

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < freq[i] / 2; j++)
            {
                palindromo.push_back(i + 'A');
            }
        }

        /* inverter a string */
        string palindromo_invertido = palindromo;
        reverse(palindromo_invertido.begin(), palindromo_invertido.end());

        /* o caractere impar vai no meio do palindromo */
        if (impar == 1)
        {
            palindromo.push_back(guarda_impar);
        }
        cout << palindromo << palindromo_invertido << endl;
    }
    return 0;
}
