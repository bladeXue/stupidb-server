#include <iostream>

int main() {

    char c = 'm';
    char *s = "programming";

    int _index = -1;
    for (int i = 0;; ++i) {
        if (s[i] == '\0')
            break;
        if (s[i] == c)
            _index = i;
    }
    if (_index == -1) {
        printf("Not Found");
    } else {
        printf("index = %d", _index);
    }
    return 0;
}
