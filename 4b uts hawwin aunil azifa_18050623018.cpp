#include <stdio.h>

using namespace std;
int main ()
{

    int data [100];
    int cari;
    int i;
    int random;
    int banyakRandom =0;

    for (i=0;i<100;i++)
    {
        data[i]=ran()%100;
    }
    printf("data yang dicari ");
    scanf("%d" ,&cari);

    for (i=0; 1<100; i++)
    {
        if (data[i]=cari)
        {
            banyakRandom++;
        }
        if (banyakRandom >0)
        {
            printf("banyak data = ");
            printf("banyak random");
        }
        else
            printf("tidak ada")
    }
}
