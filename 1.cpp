#include <stdio.h>

int main()
{
    //    Terdapat array dengan tipe char yang berisi {'p', 'e', 'n', 's', 'i', 't'}, baliklah array
    // tersebut menjadi tisnep.
    char arr[] = {'p', 'e', 'n', 's', 'i', 't'};
    int i = 0;
    int j = 5;
    while (i < j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c", arr[i]);
    }
}