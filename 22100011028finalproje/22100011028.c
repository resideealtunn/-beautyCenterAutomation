#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//RESIDE ALTUN 22100011028 / ALGORITMA ve PROGRAMLAMA DERSI FINAL PROJESI
//GUZELLIK MERKEZI OTOMASYONU
int sayac=0;
struct ogrenci
{
    char UniAdi[30];
    char BolumAdi[30];
};
struct kisi
{
    char kimlikno[12];
    char Ad[20];
    char Soyad[20];
    int yas;
    int kullanici_no;
    struct ogrenci ogr;
    int ucret;
};
void kisiekle(struct kisi *ptr1);
void kisilerilistele(struct kisi *ptr1);
void kisilerguncelle(struct kisi *ptr1);
void kisisil(struct kisi *ptr1);
void kisilerdeara(struct kisi *ptr1);
void ogrenci_ind(struct kisi *ptr1);

int main()
{
    struct kisi *ptr1;
    ptr1= (void*)malloc(sizeof(struct kisi));
    if (ptr1==NULL)
    {
        printf("YETERSIZ BELLEK!");
        exit(1);
    }
    printf("\n");
    printf("              -------------------ALTUN GUZELLIK MERKEZINE HOSGELDINIZ-------------------\n\n");

    int islem,secim;
    while(secim!=7)
    {
        printf("\n");
        printf("1-Yeni kayit ekleme\t\t2-Kayit listeleme\t\t\t3-Kayit guncelleme\n4-Kayit silme\t\t\t5-Kayitlarda arama\t\t\t6-Ogrenci Indirimi\n\t\t\t\t7-Cikis\n\nYapmak istediginiz islemi seciniz:");
        scanf("%d",&secim);
        if(secim!=1&&secim!=2&&secim!=3&&secim!=4&&secim!=5&&secim!=6&&secim!=7)
        {
            printf("Gecersiz tuslama yaptiniz. Menuye yonlendiriliyorsunuz..\n\n");
        }
        switch(secim)
        {
        case 1:
            kisiekle(ptr1);
            sayac++;
            break;
        case 2:
            kisilerilistele(ptr1);
            break;
        case 3:
            kisilerguncelle(ptr1);
            break;
        case 4:
            kisisil(ptr1);
            break;
        case 5:
            kisilerdeara(ptr1);
            break;
        case 6:
            ogrenci_ind(ptr1);
            break;
        case 7:
            exit(0);
        }
    }

    return 0;
}
//======================================================================================================================================================================
void kisiekle(struct kisi *ptr1)
NULL
{
    int boyut,eh,tik,i;
    char UniAdi2[30];
    char BolumAdi2[30];
    char kimlik[11];
    char Ad2[20];
    char Soyad2[20];

    printf("0-1000 arasi kullanici no belirleyiniz:");
    scanf("%d",&((ptr1+sayac)->kullanici_no));

    while((ptr1+sayac)->kullanici_no <=0 || (ptr1+sayac)->kullanici_no >=1000)
    {
        printf("Lutfen belirlenen aralikta bir sayi giriniz!\n");
        printf("0-1000 arasi kullanici no belirleyiniz:");
        scanf("%d",&((ptr1+sayac)->kullanici_no));
    }
a:
    for(i=0; i<sayac; i++)
    {
        if((ptr1+i)->kullanici_no==(ptr1+sayac)->kullanici_no)
        {
            printf("Bu numara alinmistir.Tekrar deneyiniz!\n");
            printf("Kullanici no giriniz:");
            scanf("%d",&((ptr1+sayac)->kullanici_no));
            goto a;
        }
    }
    printf("11 haneli kimlik numarasi giriniz:");
    scanf("%s",&kimlik);
    strcpy((ptr1+sayac)->kimlikno,kimlik);
    boyut=strlen(&(ptr1+sayac)->kimlikno);
    while(boyut!=11)
    {
        printf("Gecersiz numara girdiniz!");
        printf("\nKimlik numarasi giriniz:");
        scanf("%s",&kimlik);
        strcpy((ptr1+sayac)->kimlikno,kimlik);
        boyut=strlen(&(ptr1+sayac)->kimlikno);
    }
    printf("Isim giriniz:",sayac+1);
    scanf("%s",&Ad2);
    strcpy((ptr1+sayac)->Ad,Ad2);
    printf("Soyisim giriniz:",sayac+1);
    scanf("%s",&Soyad2);
    strcpy((ptr1+sayac)->Soyad,Soyad2);
    printf("Yas giriniz(+18 olmalidir!):",sayac+1);
    scanf("%d",&((ptr1+sayac)->yas));
    if((ptr1+sayac)->yas<18)
    {
        printf("Yasiniz +18 siniri altinda kalmaktadir :( \n");
        exit(0);
    }

    int islem;
    int cilt_bakimi=300;
    int kirpik_lifting=300;
    int protez=200;
    int sac_kesim=200;
    int sac_sekil=300;
    int makyaj=200;

    printf("\n1-Cilt bakimi-%d TL\t\t2-Kirpik Lifting-%d TL\t\t\t3-Protez Tirnak-%d TL\n4-Sac Kesimi-%d TL\t\t5-Sac Sekillendirme-%d TL\t\t6-Makyaj-%d TL\n\n",cilt_bakimi,kirpik_lifting,protez,sac_kesim,sac_sekil,makyaj);
    printf("Yapmak istediginiz islemi seciniz:");
    scanf("%d",&islem);
    while(islem<=0||islem>6)
    {
        printf("Gecersiz sayi girdiniz!\n");
        printf("1-Cilt bakimi-%d TL\t\t2-Kirpik Lifting-%d TL\t\t\t3-Protez Tirnak-%d TL\n4-Sac Kesimi-%d TL\t\t5-Sac Sekillendirme-%d TL\t\t6-Makyaj-%d TL\n\n",cilt_bakimi,kirpik_lifting,protez,sac_kesim,sac_sekil,makyaj);
        printf("Yapmak istediginiz islemi seciniz:");
        scanf("%d",&islem);
    }
    switch(islem)
    {
    case 1:
        (ptr1+sayac)->ucret=300;
        break;
    case 2:
        (ptr1+sayac)->ucret=300;
        break;
    case 3:
        (ptr1+sayac)->ucret=200;
        break;
    case 4:
        (ptr1+sayac)->ucret=200;
        break;
    case 5:
        (ptr1+sayac)->ucret=300;
        break;
    case 6:
        (ptr1+sayac)->ucret=200;
        break;
    }
    printf("Kayit basariyla olusturuldu.\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
    scanf("%d",&tik);
    while(tik!=1 && tik!=0)
    {
        printf("Gecersiz tuslama yaptiniz!");
        printf("Kayit basariyla olusturuldu.\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
        scanf("%d",&tik);
    }
    if(tik==1)
    {
        return;
    }
    else
    {
        exit(0);
    }
}
//======================================================================================================================================================================
void kisilerilistele(struct kisi *ptr1)
{
    if(sayac==0)
    {
        printf("Listede kisi bulunmamaktadir!  Menuye yonlendiriliyorsunuz.\n\n");
        return;
    }
    int secim2;
    int i;
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("NO\t\tTC KIMLIK NO\t\tISIM\t\tSOYISIM\t\tYAS\t\tUCRET\n");
    printf("-----------------------------------------------------------------------------------------------------\n");
    for(i=0; i<sayac; i++)
    {
        printf("%d",(ptr1 +i)->kullanici_no);
        printf("\t\t");
        printf("%.11s",(ptr1+i)->kimlikno);
        printf("\t\t");
        printf("%s",(ptr1+i)->Ad);
        printf("\t\t");
        printf("%s",(ptr1+i)->Soyad);
        printf("\t\t");
        printf("%d",(ptr1+i)->yas);
        printf("\t\t");
        printf("%d",(ptr1+i)->ucret);
        printf("\n");
    printf("-----------------------------------------------------------------------------------------------------\n");


    }
    printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
    scanf("%d",&secim2);
    while(secim2!=1&&secim2!=0)
    {
        printf("Gecersiz tuslama yaptiniz");
        printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
        scanf("%d",&secim2);
    }
    if(secim2==1)
    {
        return;
    }
    else
    {
        exit(0);
    }
}
//======================================================================================================================================================================
void kisilerguncelle(struct kisi *ptr1)
{
    if(sayac==0)
    {
        printf("Listede kisi bulunmamaktadir!  Menuye yonlendiriliyorsunuz.\n\n");
        return;
    }
    char Ad3[20],Soyad3[20],Kimlik3[11];
    int no,i=0,secim3,yas3,boyut;

    printf("Guncelleme yapmak istediginiz Kisi No :");
    scanf("%d",&no);
    while(i<sayac)
    {
        if((ptr1 + i)->kullanici_no != no)
        {
         i++;
            if(i==sayac)
            {
                printf("kullanici no bulunamadi...\n");
                printf("Guncelleme yapmak istediginiz Kisi No :");
                scanf("%d",&no);
                i=0;
            }
        }
        else
        i=sayac+1;
    }

    for(i=0 ; i<sayac ; i++)
    {

        if((ptr1 + i)->kullanici_no == no)
        {
            printf("1-Kimlik No\t\t2-Isim\t\t3-Soyisim\t\t4-Yas\n");
            printf("Degistirmek istediginiz bilgiyi tuslayiniz:");
            scanf("%d",&secim3);
            while(secim3!=1&&secim3!=2&&secim3!=3&&secim3!=4)
            {
                printf("Gecersiz tuslama yaptiniz.Tekrar deneyiniz!\n");
                printf("1-Kimlik No\t\t2-Isim\t\t3-Soyisim\t\t4-Yas\n");
                printf("Degistirmek istediginiz bilgiyi tuslayiniz:");
                scanf("%d",&secim3);
            }

            switch(secim3)
            {
            case 1:
                printf("\n11 haneli kimlik numarasi giriniz:");
                scanf("%s",&Kimlik3);
                strcpy((ptr1+i)->kimlikno,Kimlik3);
                boyut=strlen(&(ptr1+i)->kimlikno);
                while(boyut!=11)
                {
                    printf("Gecersiz numara girdiniz!");
                    printf("\nKimlik numarasi giriniz:");
                    scanf("%s",&Kimlik3);
                    strcpy((ptr1+i)->kimlikno,Kimlik3);
                    boyut=strlen(&(ptr1+i)->kimlikno);
                }
                break;
            case 2:
                printf("Yeni ismi giriniz:");
                scanf("%s",&Ad3);
                strcpy(((ptr1+i)->Ad),Ad3);
                break;
            case 3:
                printf("Yeni soyismi giriniz:");
                scanf("%s",&Soyad3);
                strcpy(((ptr1+i)->Soyad),Soyad3);
                break;
            case 4:
                printf("Yeni yas giriniz:");
                scanf("%d",&(ptr1 + i)->yas);

                break;
            }
        }
    }
    printf("Basariyla guncellendi!\n");
    printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
    scanf("%d",&secim3);
    while(secim3!=1&&secim3!=0)
    {
        printf("Gecersiz tuslama yaptiniz");
        printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
        scanf("%d",&secim3);
    }
    if(secim3==1)
    {
        return;
    }
    else
    {
        exit(0);
    }
}
//======================================================================================================================================================================
void kisisil(struct kisi *ptr1)
{
    if(sayac==0)
    {
        printf("Listede kisi bulunmamaktadir!  Menuye yonlendiriliyorsunuz.\n");
        return;
    }
    int no1,i;
    printf("Silmek istediginiz Kisi No :");
    scanf("%d",&no1);
    while(i<sayac)
    {
        if((ptr1 + i)->kullanici_no != no1)
        {
         i++;
            if(i==sayac)
            {
                printf("kullanici no bulunamadi...\n");
                printf("Guncelleme yapmak istediginiz Kisi No :");
                scanf("%d",&no1);
                i=0;
            }
        }
        else
        i=sayac+1;
    }

    for(i=0 ; i<sayac ; i++)
    {
        if((ptr1 + i)->kullanici_no == no1)
        {
            (ptr1+i)->kullanici_no='\0';
            strcpy((ptr1+i)->kimlikno,"NULL");
            strcpy(((ptr1+i)->Ad),"NULL");
            strcpy(((ptr1+i)->Soyad),"NULL");
            (ptr1+i)->yas='\0';
            (ptr1+i)->ucret='\0';

        }
    }
    printf("\nKisi bilgileri silinmistir. Menuye yonlendiriliyorsunuz..\n\n");
}
//======================================================================================================================================================================
void kisilerdeara(struct kisi *ptr1)
{
    if(sayac==0)
    {
        printf("Listede kisi bulunmamaktadir!  Menuye yonlendiriliyorsunuz.\n\n");
        return;
    }
    int no2,i,secim4;
    printf("Aradiginiz kisinin Kullanici No giriniz:");
    scanf("%d",&no2);
    while (i<sayac)
    {
        if((ptr1 + i)->kullanici_no != no2)
        {
            i++;
            if(i==sayac)
            {
                printf("Kullanici no bulunamadi..\n");
                printf("Aradiginiz kisinin Kullanici No giriniz:");
                scanf("%d",&no2);
                i=0;
            }
        }
        else
            i=sayac+1;
    }

    for(i=0 ; i<sayac ; i++)
    {
        if((ptr1 + i)->kullanici_no == no2)
        {
            printf("\n");
            printf("TC Kimlik No    :%.11s\n",(ptr1+i)->kimlikno);
            printf("Isim            :%s\n",(ptr1+i)->Ad);
            printf("Soyisim         :%s\n",(ptr1+i)->Soyad);
            printf("Yas             :%d\n",(ptr1+i)->yas);
            printf("Odenecek tutar  :%d\n",(ptr1+i)->ucret);
            printf("\n\n");
        }
    }
    printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
    scanf("%d",&secim4);
    while(secim4!=1&&secim4!=0)
    {
        printf("Gecersiz tuslama yaptiniz");
        printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
        scanf("%d",&secim4);
    }
    if(secim4==1)
    {
        return;
    }
    else
    {
        exit(0);
    }
}
//======================================================================================================================================================================
void ogrenci_ind(struct kisi *ptr1)
{
    if(sayac==0)
    {
        printf("Listede kisi bulunmamaktadir!  Menuye yonlendiriliyorsunuz.\n\n");
        return;
    }
    int boyut,eh,i,secim5,no3;
    char UniAdi2[30];
    char BolumAdi2[30];

    printf("Ogrenci misiniz? Evetse 1, Hayirsa 0 tuslayiniz.");
    scanf("%d",&eh);
    while(eh!=0 && eh!=1)
    {
        printf("Gecersiz numara girdiniz!");
        printf("Ogrenci misiniz? Evetse 1, Hayirsa 0 tuslayiniz.");
        scanf("%d",&eh);
    }
    if(eh==0)
    {
        printf("Ogrenci olmayanlar indirimden yararlanamaz! Menuye yonlendiriliyorsunuz..\n\n");
        return;
    }

    printf("Kullanici no giriniz :");
    scanf("%d",&no3);
    while(i<sayac)
    {
        if((ptr1 + i)->kullanici_no != no3)
        {
            i++;
            if(i==sayac)
            {
                printf("Kullanici no bulunamadi..");
                printf("Kullanici no giriniz :");
                scanf("%d",&no3);
                i=0;
            }
        }
        else
            i=sayac+1;
    }

    for(int i=0 ; i<sayac ; i++)
    {
        if((ptr1 + i)->kullanici_no == no3)
        {
            printf("Okudugunuz universiteyi giriniz:");
            scanf("%s",&UniAdi2);
            strcpy((ptr1+i)->ogr.UniAdi,UniAdi2);
            printf("Okudugunuz bolumu giriniz:");
            scanf("%s",&BolumAdi2);
            strcpy((ptr1+i)->ogr.BolumAdi,BolumAdi2);

            (ptr1+i)->ucret= (ptr1+i)->ucret*0.8;
            printf("Ogrenci indirimi basariyla uygulanmistir.\n");
            printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
            scanf("%d",&secim5);
            while(secim5!=1&&secim5!=0)
            {
                printf("Gecersiz tuslama yaptiniz");
                printf("\nMenuye donmek icin 1 tiklayiniz. Islemi sonlandirmak icin 0 tiklayiniz:");
                scanf("%d",&secim5);
            }
            if(secim5==1)
            {
                return;
            }
            else
            {
                exit(0);
            }
        }
    }
}

