#include <stdio.h>

int main()
{
    printf("**************************\n");
    int sayi1,sayi2,sayi3;
    printf("1.Sayiyi Giriniz:");
    scanf("%d", &sayi1);
    printf("2.Sayiyi Giriniz:");
    scanf("%d", &sayi2);
    printf("3.Sayiyi Giriniz:");
    scanf("%d", &sayi3);

    int carpim = (sayi1 * sayi2 * sayi3);

     printf("Girilen Sayilarin Carpimi: %d", carpim);
    printf("\n**************************");


}