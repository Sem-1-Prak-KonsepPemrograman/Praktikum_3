#include <stdio.h>
#include <stdlib.h>

int main() {
    // Praktikum 3, No. 1
    printf("Praktikum 3, No. 1\n");
    printf("Program ini mengonversi jumlah uang dalam dolar AS ke Rupiah.\n\n");

    int dolar_US;

    printf("Masukkan jumlah dolar US: ");
    scanf("%d", &dolar_US);

    // Konversi dolar ke rupiah (1 dolar = 11090 rupiah)
    printf("Jumlah Konversi ke Rupiah: %d\n\n", dolar_US * 16205);

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // Praktikum 3, No. 2
    printf("Praktikum 3, No. 2\n");
    printf("Program ini menghitung jumlah lembar uang Rupiah berdasarkan pecahan tertentu.\n\n");

    int jumlah_uang,
        sisa_100rb,
        sisa_50rb,
        sisa_20rb,
        sisa_10rb,
        sisa_5rb,
        sisa_2rb,
        sisa_1rb,
        sisa;

    printf("Masukkan jumlah uang Rupiah: ");
    scanf("%d", &jumlah_uang);

    sisa_100rb = jumlah_uang / 100000;
    sisa = jumlah_uang - (sisa_100rb * 100000);

    sisa_50rb = sisa / 50000;
    sisa = sisa - (sisa_50rb * 50000);

    sisa_20rb = sisa / 20000;
    sisa = sisa - (sisa_20rb * 20000);

    sisa_10rb = sisa / 10000;
    sisa = sisa - (sisa_10rb * 10000);

    sisa_5rb = sisa / 5000;
    sisa = sisa - (sisa_5rb * 5000);

    sisa_2rb = sisa / 2000;
    sisa = sisa - (sisa_2rb * 2000);

    sisa_1rb = sisa / 1000;
    sisa = sisa - (sisa_1rb * 1000);

    printf("Output: \n%d Lembar 100.000 \n%d Lembar 50.000 \n%d Lembar 20.000 \n%d Lembar 10.000 \n%d Lembar 5.000 \n%d Lembar 2.000 \n%d Lembar 1.000\n\n", sisa_100rb, sisa_50rb, sisa_20rb, sisa_10rb, sisa_5rb, sisa_2rb, sisa_1rb);

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // Praktikum 3, No. 3
    printf("Praktikum 3, No. 3\n");
    printf("Program ini melakukan berbagai operasi aritmatika menggunakan operator matematika.\n\n");

    int a = 12,
        b = 2,
        c = 3,
        d = 4;

    printf("Nilai a = %d \nNilai b = %d \nNilai c = %d \nNilai d = %d\n\n", a, b, c, d);
    printf("a %% b = %d\n", a % b);
    printf("a - c = %d\n", a - c);
    printf("a + b = %d\n", a + b);
    printf("a / d = %d\n", a / d);
    printf("a / d * d + a %% d = %d\n", a / d * d + a % d);
    printf("a %% d / d * a - c = %d\n\n", a % d / d * a - c);

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // Praktikum 3, No. 4
    printf("Praktikum 3, No. 4\n");
    printf("Program ini menghitung hasil rumus kuadrat b^2 - 4ac berdasarkan input pengguna.\n\n");

    int f,
        g,
        h;

    printf("Masukkan nilai a = ");
    scanf("%d", &f);
    printf("Masukkan nilai b = ");
    scanf("%d", &g);
    printf("Masukkan nilai c = ");
    scanf("%d", &h);

    // Rumus kuadrat: b^2 - 4ac
    printf("hasil = %d\n\n", g * g - 4 * f * h);

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // Praktikum 3, No. 5
    printf("Praktikum 3, No. 5\n");
    printf("Program ini menghitung hasil rumus kuadrat b^2 - 4ac dengan angka desimal.\n\n");

    float p,
          q,
          r;

    printf("Masukkan nilai a= ");
    scanf("%f", &p);
    printf("Masukkan nilai b = ");
    scanf("%f", &q);
    printf("Masukkan nilai c = ");
    scanf("%f", &r);

    // Rumus kuadrat: b^2 - 4ac
    printf("hasil = %.2f\n\n", q * q - 4 * p * r);

    printf("===============================================================================================================================\n");

    return 0;
}
