#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilih; system("cls");

    printf("====================\n");
    printf("   Tugas Quis ASD   \n");
    printf("====================\n");
    printf(" 1. Level 1\n");
    printf(" 2. Level 2\n");
    printf(" 3. Level 3\n");
    printf(" 4. Exit   \n");
    printf("====================\n");
    printf("\n");
    printf("\n");

    printf("Masukan Angka Menu :");
    scanf("%d", &pilih);

    switch(pilih){

case 1:
    system("cls");

    int angka,a,k,n,i,j,panjang;
    printf("Masukan Angka :");
    scanf ("%5d",&angka);
    printf("\n");

    for(i=0;i<=angka;i++){
        for(a=0;a<=i;a++){k++; printf("%5d",a+i);}
        printf("\n");}
    break;

case 2:
    system("cls");

    printf("Masukan Angka :");
    scanf ("%d",&n);

    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            int z=i*(1+j);
            if(z<10){printf("%5d",z);}
        else{printf("%5d",z);}
        }printf("\n");
    }
    break;

case 3:
    system("cls");

    printf("Masukan Angka 1-9\n");
    printf("Input :");
    scanf("%d",&panjang);

    for(int i=0;i<panjang;i++){
        for(int j=i;j<panjang-1;j++) {printf(" ");}
        for(int j=0;j<=i;j++)        {printf("%d", j+1);}
        for(int j=i;j>0;j--)         {printf("%d",j);}
        printf("\n");
    }
    break;

case 4:
    system("cls");
    exit (0);
    break;

    }
    return 0;
}


