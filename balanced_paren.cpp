#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

int r_paren_eval(char paren1, char paren2) {
    if (paren1 == '{' && paren2 == '}') return 1;
    else if (paren1 == '(' && paren2 == ')') return 1;
    else if (paren1 == '[' && paren2 == ']') return 1;
    else return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        //std::cout << "Test case no. " << i << std::endl;
        std::stack<char> l_parens;

        std::string paren;
        std::cin >> paren;
        //std::cout << "paren string : " << paren << std::endl;
        int no_flag = 0;

        for (int j = 0; j < paren.length(); ++j) {
            if (paren[j] == '(' || paren[j] == '{' || paren[j] == '[') {
                    l_parens.push(paren[j]);
            }
            else if (paren[j] == ')' || paren[j] == '}' || paren[j] == ']') {
                if (l_parens.empty()) {
                //    std::cout << "T = " << i << "; paren string : " << paren << std::endl;
                    no_flag = 1;
                    std::cout << "NO; T = " << i << "; paren string : " << paren << std::endl;
                    break;
                }

                if (r_paren_eval(l_parens.top(), paren[j])) {
                    l_parens.pop();
                }

                else {
                //  std::cout << "j = " << j << "and T = " << i << std::endl;
                //  std::cout << "paren string : " << paren << std::endl;
                  no_flag = 1;
                }
            }
            else {
                if (!paren[j]) std::cout << "NULL :(" << std::endl;
            }

            if (no_flag) {
                //std::cout << "should see j = " << j << "here " << std::endl;
                std::cout << "NO; T = " << i << "; paren string : " << paren << std::endl;
                break;
            }
         }

        if (!no_flag && l_parens.empty()) {
        std::cout << "YES" << std::endl;
        }
        else if (!no_flag && !l_parens.empty()) {
          std::cout << "NO" << std::endl;
        }

    }

    return 0;
}
