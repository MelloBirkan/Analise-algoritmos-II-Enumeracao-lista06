#include <stdbool.h>
#include <stdio.h>

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

// 3
bool eSubsequencia(int s[], int k, int a[], int n) {
    int i = 0, j = 0;
    while (i < k && j < n) {
        if (s[i] == a[j]) {
            i++;
        }
        j++;
    }
    return i == k;
}

// 4
bool eSegmento(int s[], int k, int a[], int n) {
    int i = 0, j = 0;

    // Veririficar se o segmento não começa no meio ou é posfixo do array comparado
    while (s[i] > a[j]) {
        j++;
    }

    while (i < k && j < n) {
        if (s[i] != a[j]) {
            return false;
        }
        i++;
        j++;
    }
    return i == k;
}

// 5
int quantasSubsequencias(int arr[], int n) { // Complexidade O(n)
    int ptr1 = 0, cont = 0;
    while (ptr1 < n) {
        if (arr[ptr1] != arr[ptr1 + 1]) {
            cont++;
        }
        ptr1++;
    }
    return cont;
}


int main() {
    int r[] = {4, 4, 4};
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int s[] = {2, 3, 5};
    int b[] = {4, 5, 6};
    int sub[] = {5, 2, 2, 3, 4, 4, 4, 4, 4, 1, 1};
    int sub2[] = {3, 3, 1, 1, 1, 12, 12, 12, 3, 3};

    printf("%s\n", eMenor(r, 3, s, 3) ? "true" : "false");
    printf("%d\n", compara(r, 3, s, 3));
    printf("%s\n", eSubsequencia(s, 3, a, 7) ? "true" : "false");
    printf("%s\n", eSegmento(b, 3, a, 7) ? "true" : "false");
    printf("%d\n", quantasSubsequencias(sub, 11));
    printf("%d\n", quantasSubsequencias(sub2, 10));
    return 0;
}
