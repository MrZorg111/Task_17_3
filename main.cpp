#include <iostream>
#include <string>

std::string cts (char* d) {
    std::string tempo;
    for (int t = 0; d[t] != '\0'; t++) {
        tempo += d[t];
    }
    return tempo;
}

bool substr(char* e, char* f) {
    bool good = true;
    std::string e_str = cts(e);
    std::string f_str = cts(f);
    for (int i = 0, l = 0; i < e_str.length(); i++) {
        if (e_str.length() < f_str.length()) {
            good = false;
            break;
        }
        if (e_str[i] != f_str[l] && l > 0) {
           good = false;
            break;
        }
        if (e_str[i] == f_str[l]) {
            if (l == 0 && ((e_str.length() - i) < f_str.length()))  {
                good = false;
                break;
            }
            good = true;
            l++;
        }

        if (f[l] == '\0') {
            break;
        }
        else {
            good = false;
        }

    }
    return good;
}

int main() {
char* a = "Hello world";
char* b = "Hello ";
char* c = "ban";

  std::cout << substr(a,b) << " " << substr(a,c);

    return 0;
}
