#include <stdio.h>
https://github.com/MetehanSimsek/Calculator/blob/main/Calculator/Calculator/Calculator.c

int main()
{
	int sayi1, sayi2, islem;
	printf("Lutfen 1.sayiyi giriniz \n");
	scanf_s("%d", &sayi1);
	printf("\nLutfen 2.sayiyi giriniz \n");
	scanf_s("%d", &sayi2);
	printf("\nLutfen yapilacak islemi seciniz  \n");
	printf(" 1. Toplama \n 2. Cikarma \n 3. Carpma \n 4. Bolme\n");
	scanf_s("%d", &islem);

    switch (islem) {
    case 1:
        printf("Toplama isleminin sonucu : %d", sayi1 + sayi2);
        break;
    case 2:
        printf("Cıkarma isleminin sonucu : %d", sayi1 - sayi2);
        break;
    case 3:
        printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
        break;
    case 4:
        printf("Bolme isleminin sonucu : %d", sayi1 / sayi2);
        break;
    default:
        printf("Lutfen gecerli bir sayi giriniz..");
    }

	return 0;
}
