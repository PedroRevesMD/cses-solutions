#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    std::sort(s.begin(), s.end());

    std::vector<std::string> permutations;
    do {
        permutations.push_back(s);
    } while (std::next_permutation(s.begin(), s.end()));

    std::cout << permutations.size() << std::endl;
    for (const std::string& p : permutations) {
        std::cout << p << std::endl;
    }

    return 0;
}
