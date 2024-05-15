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

        int consecutive_consonants = 0;
        for (int i = 0; i < n; i++)
        {
            if (consecutive_consonants >= 4)
            {
                break;
            }
            char current_char = s[i];
            if (current_char == 'a' || current_char == 'e' || current_char == 'i' || current_char == 'o' || current_char == 'u')
            {
                consecutive_consonants = 0;
            }
            else
            {
                consecutive_consonants++;
            }
        }

        if (consecutive_consonants >= 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}