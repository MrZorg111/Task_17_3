#include <iostream>

bool substr(char* e, char* f) {
    std::cout << e << " " << f;

    bool good = true;
    for (int i = 0, l = 0; good && f[l] != '\0'; i++) {
        std::cout << e << " " << f << "\n";
        if (e[i] == f[l]) {
            std::cout << e[i] << " " << f[l] << "\n";
            good = true;
            l++;
        }
        else if (e[i] != f[l] && l > 0 || f[l] == '\0')  {
            good = false;
        }

    }
    return good;
}

int main() {
    char* a = "Hello world";

char* b = "wor";

char* c = "banana";

std::cout << substr(a,b) << " " << substr(a,c);

    return 0;
}
