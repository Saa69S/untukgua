#include <stdio.h>
#include <stdlib.h>
int main() {
    // Daftar pecahan mata uang dari yang terbesar ke terkecil
    int pecahan[] = {500000, 100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 100, 50, 10, 5, 1};
    int n = sizeof(pecahan) / sizeof(pecahan[0]);
    
    // Baca input jumlah uang
    long long jumlah_uang;
    printf("Jumlah uang: ");
    if (scanf("%lld", &jumlah_uang) != 1 || jumlah_uang <= 0) {
        printf("Error: Jumlah uang harus bilangan positif.\n");
        return 1;
    }
    
    // Array untuk menyimpan jumlah pecahan
    int hasil[14] = {0};
    
    // Hitung jumlah pecahan menggunakan algoritma greedy
    for (int i = 0; i < n; i++) {
        hasil[i] = jumlah_uang / pecahan[i];
        jumlah_uang -= hasil[i] * pecahan[i];
    }

    //Output header
    printf("Pecahan Jumlah\n");
    
    // Output setiap pecahan dengan rata kanan
    for (int i = 0; i < n; i++) {
        char pec_str[10];
        if (pecahan[i] >= 1000) {
            sprintf(pec_str, "%d.%03d", pecahan[i] / 1000, pecahan[i] % 1000);
        } else {
            sprintf(pec_str, "%d", pecahan[i]);
        }
        printf("%8s %6d\n", pec_str, hasil[i]);
    }
    
    return 0;
}
