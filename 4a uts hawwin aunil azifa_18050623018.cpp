#include <stdio.h>
#include <conio.h>

using namespace std;
int main(void)
{

    int data[1000];
    int cari;
    int flag=0;

    printf("masukkan data yang dicari = ");
    scanf("%d", cari);

    for (int i=0;i<1000;i++)
    {
        if (data[i] == cari)
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("data ada");
    }
    else
        printf("data tidak ada");
}
