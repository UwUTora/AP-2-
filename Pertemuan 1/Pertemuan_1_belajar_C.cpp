#include <stdio.h> // header standar untuk c
#include <conio.h>

int main() 
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("hello world\n"); //printf untuk fungsi keluaran output pada C

    printf("Masukkan nama: ");
    gets(nama); //gets -> get string

    printf("masukkan Nim : ");
    scanf("%d", &nim);

    getchar();

    printf("masukkan Kom : ");
    gets(kom);

    printf("masukkan Ip : ");
    scanf("%f", &ip);

    /* ini untuk output */
    printf("Nama: ");
    puts(nama); // puts -> put string, untuk string dalam bentuk array char

    printf("Nim: %d\n", nim);

    printf("Kom: ");
    puts(kom);

    printf("Ip: %.1f\n", ip);

    printf("press any botton to continue: ");
    getch();
}