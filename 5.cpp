#include <stdio.h>

// 5. Bilangan kompleks berbentuk a + bi, dimana a dan b adalah bilangan nyata dan i2
// = -1. Terdapat empat operasi aritmatika dasar untuk bilangan kompleks, yaitu:
// • Penambahan : (a+bi) + (c+di) = (a+c) + (b+d)i
// • Pengurangan : (a+bi) - (c+di) = (a-c) + (b-d)i
// • Perkalian : (a+bi) * (c+di) = (ac-bd) + (ad+bc)i
// • Pembagian : (a+bi) / (c+di) = [(ac+bd) / (a2
// +b2
// )] + [(bc-ad)/(c2
// +d2
// )]i

// Buatlah program untuk menghitung operasi aritmatika dasar bilangan kompleks.

main()
{
    int a, b, c, d;
    printf("Masukkan bilangan kompleks pertama: ");
    scanf("%d %d", &a, &b);
    printf("Masukkan bilangan kompleks kedua: ");
    scanf("%d %d", &c, &d);
    printf("Hasil penjumlahan: %d + %di\n", a + c, b + d);
    printf("Hasil pengurangan: %d + %di,\n", a - c, b - d);
    printf("Hasil perkalian: %d + %di,\n", a * c - b * d, a * d + b * c);
    printf("Hasil pembagian: %d + %di, \n", (a * c + b * d) / (a * a + b * b), (b * c - a * d) / (c * c + d * d));
}