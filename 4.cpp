#include <stdio.h>
// 4. Masalah aritmatika polinom adalah membuat sekumpulan subrutin manipulasi
// terhadap polinom simbolis (symbolic Polynomial). Misalnya: P1 = 6x8
//  + 8x7 +
// 5x5
//  + x3
//  + 15
// P2 = 3x9
//  + 4x7 + 3x4
//  + 2x3
//  + 2x2 + 10
// P3 = x2 + 5
// Terdapat empat operasi aritmatika polinom dasar antara lain:
// a. Penambahan (P1 + P2 = 3x9
//  + 6x8
//  + 12x7 + 5x5 + 3x4
//  + 3x3
//  + 2x2 + 25) 


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