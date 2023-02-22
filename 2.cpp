#include <stdio.h>
//     Terdapat dua buah matrik dengan ordo n yang direpresentasikan dengan array
// dimensi dua, lakukan operasi penjumlahan, pengurangan dan perkalian.

// setiap meminta input berikan keterangan apa yang diminta, terus saat output juga berikan keterangan apa yang ditampilkan
// misalnya "Hasil penjumlahan matriks A dan B adalah: "

int main()
{
    int n;
    printf("Masukkan ordo matriks: ");
    scanf("%d", &n);
    int matrikA[n][n];
    int matrikB[n][n];
    int matrikC[n][n];
    int matrikD[n][n];
    int matrikE[n][n];
    int matrikF[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Masukkan elemen matriks A baris ke-%d kolom ke-%d: ", i + 1, j + 1);
            scanf("%d", &matrikA[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Masukkan elemen matriks B baris ke-%d kolom ke-%d: ", i + 1, j + 1);
            scanf("%d", &matrikB[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrikC[i][j] = matrikA[i][j] + matrikB[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrikD[i][j] = matrikA[i][j] - matrikB[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrikE[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matrikE[i][j] += matrikA[i][k] * matrikB[k][j];
            }
        }
    }
    printf("Hasil penjumlahan matriks A dan B adalah: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrikC[i][j]);
        }
        printf("\n");
    }
    // berikan keterangan apa yang ditampilkan
    printf("Hasil pengurangan matriks A dan B adalah: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrikD[i][j]);
        }
        printf("\n");
    }
    // berikan keterangan apa yang ditampilkan
    printf("Hasil perkalian matriks A dan B adalah: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrikE[i][j]);
        }
        printf("\n");
    }
}