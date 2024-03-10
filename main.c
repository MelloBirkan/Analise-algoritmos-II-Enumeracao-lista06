#include <stdio.h>
#include <stdbool.h>

// 1
bool eMenor(int r[], int j, int s[], int k) {
    for (int d = 0; d < j; ++d) {
        if (s[d] > r[d]) {
            return true;
        }
    }
    // Se todos os números forem iguais porém o segundo array tiver mais números logo é maior
    return false;
}

// 2
int compara(int r[], int j, int s[], int k) {
    for (int d = 0; d < j; ++d) {
        if (r[d] > s[d]) {
            return 1;
        }
    }

    if (k == j) {
        return 0;
}
    return -1;
}

int main() {
    int r[] = {4, 4, 4};
    int s[] = {4, 4, 4};

    printf("%s\n", eMenor(r, 3, s, 3) ? "true" : "false");
    printf("%d", compara(r, 3, s, 3));
    return 0;
}
