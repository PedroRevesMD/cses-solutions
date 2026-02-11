#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int n = s.length();

  // Contar frequência de cada caractere
  map<char, int> freq;
  for (char c : s) {
    freq[c]++;
  }

  // Verificar se é possível criar uma string válida
  int maxFreq = 0;
  for (auto &p : freq) {
    maxFreq = max(maxFreq, p.second);
  }

  // Se algum caractere aparece mais de ceil(n/2) vezes, é impossível
  if (maxFreq > (n + 1) / 2) {
    cout << -1 << endl;
    return 0;
  }

  // Construir a string lexicograficamente mínima
  string result = "";
  char lastChar = '\0';
  int remaining = n;

  while (remaining > 0) {
    bool found = false;

    // Tentar cada caractere em ordem alfabética
    for (auto &p : freq) {
      char c = p.first;
      int count = p.second;

      // Pular se não há mais deste caractere ou se é igual ao último
      if (count == 0 || c == lastChar) {
        continue;
      }

      // Verificar se escolher este caractere é seguro
      // Após usar este caractere, nenhum outro deve ter frequência >
      // ceil((remaining-1)/2)
      int maxOtherFreq = 0;
      for (auto &other : freq) {
        if (other.first != c) {
          maxOtherFreq = max(maxOtherFreq, other.second);
        }
      }

      // Verificar se é seguro usar este caractere
      if (maxOtherFreq <= (remaining - 1 + 1) / 2) {
        result += c;
        freq[c]--;
        lastChar = c;
        remaining--;
        found = true;
        break;
      }
    }

    // Se não encontrou nenhum caractere seguro, é impossível
    if (!found) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << result << endl;

  return 0;
}
