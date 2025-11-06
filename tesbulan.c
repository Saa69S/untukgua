    #include <stdio.h>
int main() {
    int tahun, bulan;
    int is_kabisat = 0;
    int jumlah_hari;
    char *nama_bulan[13] = {"", "JANUARI", "FEBRUARI", "MARET", "APRIL", "MEI", "JUNI", "JULI", "AGUSTUS", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DESEMBER"};
    int hari[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Input tahun dan bulan
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);
    printf("Masukkan bulan: ");
    scanf("%d", &bulan);
    
    // Cek apakah tahun kabisat
    if (tahun % 400 == 0) {
        is_kabisat = 1;
    } else if (tahun % 100 == 0) {
        is_kabisat = 0;
    } else if (tahun % 4 == 0) {
        is_kabisat = 1;
    } else {
        is_kabisat = 0;
    }
    
    // Tentukan jumlah hari
    if (bulan == 2 && is_kabisat) {
        jumlah_hari = 29;
    } else {
        jumlah_hari = hari[bulan];
    }
    
    // Output
    if (is_kabisat) {
        printf("Tahun %d adalah TAHUN KABISAT\n", tahun);
    } else {
        printf("Tahun %d BUKAN TAHUN KABISAT\n", tahun);
    }
    printf("Jumlah hari pada bulan %s tahun %d adalah %d\n", nama_bulan[bulan], tahun, jumlah_hari);
    
    return 0;
}