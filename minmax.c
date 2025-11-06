#include <stdio.h>
int main() {
    char kalimat[256];
    int i, p = 0;
    
    printf("Masukkan kalimat: ");
    fgets(kalimat, 256, stdin);
    
    // Hitung panjang dan hapus newline
    while (kalimat[p] != '\0') {
        p++;
    }
    if (p > 0 && kalimat[p - 1] == '\n') {
        kalimat[p - 1] = '\0';
        p--;
    }
    
    // Ubah ke lowercase (A-Z -> a-z)
    for (i = 0; i < p; i++) {
        if (kalimat[i] >= 'A' && kalimat[i] <= 'Z') {
            kalimat[i] = kalimat[i] + 32;
        }
    }
    // Balik string
    for (i = 0; i < p / 2; i++) {
        char temp = kalimat[i];
        kalimat[i] = kalimat[p - 1 - i];
        kalimat[p - 1 - i] = temp;
    }
    
    printf("Hasil: %s\n", kalimat);
    
    return 0;
}