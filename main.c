#include<conio.h>
#include<stdio.h>
#include<string.h>
void login()
{
   char userid[]="admin",password[]="admin",p[15],u[15];
   int n=1,a,b;
   printf("\nSilahkan Masukkan USER ID dan Password anda\n");
   while(n<=3)
   {

      printf("USER ID: ");
      scanf("%s",u);
      printf("PASSWORD: ");
      scanf("%s",p);
      a=strcmp(u,userid);
      b=strcmp(p,password);
      if(a==0&&b==0)
      {
         printf("\nSelamat Datang ^.^\n");break;
      }
      else
      {
         printf("\nMohon Maaf USERID/PASSWORD anda salah. anda mempunyai %d kesempatan.",3-n);
         printf("\n");
      };
      n++;
   }
   if(n==4)
      printf("\nMohon Maaf, Anda Tidak Bisa Masuk.");
   getch();
}
void menuadmin()
{
    printf("Menu Utama: \n1. Biodata Anggota \n2.Jadwal Anggota \n");
    printf("\n");
}
void menuanggota()
{
void anggota()
{
   printf("Menu Utama: \n1.Biodata Saya \n2.Jadwal Saya");
}
    printf("~~Selamat Datang di Aplikasi I-Kamling~~ \n1. Belum Anggota \n2.Sudah Anggota");
}
void regist()
{

}
//*program utama*//
int main()
{
int mainmenu;
printf("~~Selamat Datang di Aplikasi I-Kamling~~\n");
printf("Silahkan Pilih Menu: \n1.Admin \n2.Anggota\nPilih: ");
scanf("%d",&mainmenu);

login();
menuadmin();
menuanggota();
regist();
anggota();
}
