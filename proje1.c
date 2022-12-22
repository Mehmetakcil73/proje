#include <stdio.h>
#include <stdlib.h>
#include "soru.h"
//22181616063 Mehmet AKCIL
//22181616769 Ahmet Cihan ÇELİK
//22181616067 Murodjon OSTANAKULOV
int birinci_soru(){
    int cevap;
    do
    {
        karakterler();
        printf("karakteriniz kacinci katagoride ?\n1:1.Katagoride\n2:2.Katagoride\nCevabiniz:");
        scanf("%d",&cevap);
    
        switch(cevap){
            case 1:
            return 1;
            case 2:
            return 2;
            default:
            printf("yanlis bir tuslama yaptiniz\n");
        }
    }
     while(cevap!=1||cevap!=2);
    }
    int ikinci_soru(){
    int cevap;
    do
    {
        printf("karakteriniz erkek mi ?\n1:Evet\n2:Hayir\nCevabiniz:");
        scanf("%d",&cevap);
  
        switch(cevap){
            case 1:
            return 1;
            case 2:
            return 2;
            default:
            printf("yanlis bir tuslama yaptiniz\n");
        }
    }
     while(cevap!=1||cevap!=2);
    }
int ucuncu_soru(){
    int cevap; 
    do
    {
        printf("karakteriniz yabanci mi?\n1:Evet\n2:Hayir\nCevabiniz:");
        scanf("%d",&cevap); 

        switch(cevap){
            case 1:
            return 1;
            case 2:
            return 2;
            default:
            printf("yanlis bir tuslama yaptiniz\n");
        }
    }
     while(cevap!=1||cevap!=2);
    }
int dorduncu_soru(){
    int cevap;
    do
    {

        printf("karakteriniz oyuncu mu?\n1:Evet\n2:Hayir\nCevabiniz:");
        scanf("%d",&cevap);    
          switch(cevap){
            case 1:
            return 1;
            case 2:
            return 2;
            default:
            printf("yanlis bir tuslama yaptiniz\n");
        }
    }
     while(cevap!=1||cevap!=2);
    }
int main(){
    struct katilimci{
	char name[20];
	char surname[20];
};	
	struct katilimci o1;
	printf("katilimci adini giriniz:\n");
	scanf("%s",&o1.name);
	
	printf("katilimci soyadini giriniz:\n");
	scanf("%s",&o1.surname);
	
	system("CLS");

    int tekrar,a,b,c,d;
    do{
    a = birinci_soru();
    b = ikinci_soru();
    c = ucuncu_soru();
    d = dorduncu_soru();
        if(a==1){
            if(b==1){
                if(c==1){
                    if(d==1){
                        int cevap;
                        do{
                            printf("Karakteriniz marvelde rolu var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("İron man rolunde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz robert downey jr dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz cris hemsworth tur");
                                     break;
                                     default:
                                     printf("Yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakteriniz karayip korsanlarinda oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz johnny depp tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("leonardo di caprio dur");
                                     break;
                                     default:
                                     printf("Yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("Yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==1,b==1,c==1d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz amerikali mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("karakterinizin en cok dinlenilen sarkisi 'love the way you lie'  mi?\n1:evet\n2:hayir\nCevabiniz: ");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz eminem dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz bruno mars tir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("karakteriniz en cok dinlenen sarkisi 'shape of you' mu?\n1:evet\n2:hayir:\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz ed sheeran dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz harry styles tir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }
                //a==1,b==1,c==2
                else{
                    if(d==1){
                        int cevap;
                        do{
                            printf("karakterinizin 'Ezel' dizisinde rolu var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("karakteriniz 'Karadayi' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz Kenan İmirzalioglu'dur");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz Tuncel Kurtiz'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("karakteriniz 'Ramo' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Murat Yildirim'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Ahmet Kural'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==1,b==1,c==2,d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz rap sanatcisi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin 'Baytar' adli sarkisi var mi\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Sagopa Kajmer'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Ceza'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakterinizin 'Martilar' adli sarkisi var mi?\n1:Evet\n2:hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Edis'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Murat Boz'dur");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }    
            }
            //a==1,b==2
            else{
                if(c==1){
                    if(d==1){
                        int cevap;
                        do{
                            printf("karakterinizin marvelde rolu var mi?\n1:evet\n2:hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("black widow rolunde oynadi mi?\n1:evet\n2:hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karaktriniz scarlett johansson dur");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz elizabet olsen dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("karakteriniz titanic te oynadi mi?\n1:evet\n2:hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz kate winslet tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz jennifer aniston dur");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==1,b==2,c==1,d==2
                    else{
                        int cevap;
                        do{
                            printf("karakterin ingiliz mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("karakterinizin 'hello' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz adele dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("karakteriniz anne marie dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("karakterinizin en cok dinlenen sarkisi 'shake it of' mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz taylor swift tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz halsey dir");
                                     break;
                                     default:
                                     printf("Yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }
                //a==1,b==2,c==2
                else{
                    if(d==1){
                        int cevap;
                        do{
                            printf("Karakteriniz 'Ezel' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakteriniz 'Poyraz Karayel' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Burcin Terzioglu'dur");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Cansu Dere'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakteriniz 'Kurtlar Vadisi' dizisinde oynadi mi?\n1:Evet\n2:Hayir");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Ozgu Namal'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Hande Ercel'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==1,b==2,c==2,d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz arabesk sarkicisi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin 'Cingenem' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Ebru Gundes'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Sibel Can'dir ");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakterinizin 'Ara' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Zeynep Bastik'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Sila Gencoglu'dur");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }    
            }
        }
        //a==2
        else{
            if(b==1){
                if(c==1){
                    if(d==1){
                        int cevap;
                        do{
                            printf("Karakteriniz 'Matrix' serisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakteriniz 'John wick' serisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Keanu Reeves'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Laurence Fishburne'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakteriniz 'Yesil Yol' filminde oynadi mi?\n1:Evet\n2:hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Tom Hanks'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Tom Cruise'tur");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==2,b==1,c==1,d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz Amerikali mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin 'Smooth Criminal' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Michael Jackson'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Usher'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakterinizin 'Baby' adli sarkisi var mi?\n1:Evet2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Justin Bieber'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Drake'tir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }
                //a==2,b==1,c==2
                else{
                    if(d==1){
                        int cevap;
                        do{
                            printf("Karakteriniz 'Hababam Sinifi' serisinde oynadi mi?1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin lakabi'Damat Ferit' miydi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Tarik Akan'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Kemal Sunal'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakteriniz 'Kurulus Osman' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakterinzi Burak Ozcivit'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Can Yaman'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==2,b==1,c==2,d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz arabesk sanatcisi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin 'Nilufer' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Muslum Gurses'tir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Orhan Gencebay'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakterinizin 'Geccek' isimli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Tarkan'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Serdar Ortac'tir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }    
            }
            //a==2,b==2
            else{
                if(c==1){
                    if(d==1){
                        int cevap;
                        do{
                            printf("Karakterin bir süper kahraman rolunde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakteriniz 'Wonder Women' rolunde mi oynadi?\n1:Evet\n2:Hayir\nCevabiniz");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Karakteriniz Gal Gadot'tur");
                                     break;
                                     case 2:
                                     printf("Karakteriniz Brie Larson'dur");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakteriniz 'Harry Potter' serisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz: ");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Emma Watson'dur");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Ana De Armas'tir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==2,b==2,c==1,d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz Amerikali mi?\n1:Evet\n2:Hayir\nCevabiniz");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin 'Nothing Breaks Like a Heart' isimli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Miley Cyrus'tur");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Selena Gomez'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakterinizin 'Havana' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Camila Cabello'dur");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Dua Lipa 'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }
                //a==2,b==2,c==2
                else{
                    if(d==1){
                        int cevap;
                        do{
                            printf("Karakteriniz 'Ask-i Memnu' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakteriniz 'Adini Feriha Koydum' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Hazal Kaya'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Beren Saat'tir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakteriniz 'Medcezir' dizisinde oynadi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Serenay Sarikaya'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Fahriye Evcen'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                    //a==2,b==2,c==2,d==2
                    else{
                        int cevap;
                        do{
                            printf("Karakteriniz pop muzik sanatcisi mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                            scanf("%d",&cevap);
                            switch(cevap){
                                case 1:
                                do{
                                    printf("Karakterinizin 'Bangir Bangir' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Gülsen'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Hadise'dir");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                case 2:
                                do{
                                    printf("Karakterinizin 'Don Gel Birtanem' adli sarkisi var mi?\n1:Evet\n2:Hayir\nCevabiniz:");
                                    scanf("%d",&cevap);
                                    switch(cevap){
                                     case 1:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Selda Bagcan'dir");
                                     break;
                                     case 2:
                                     printf("Sayin katilimci %s %s  verdiginiz cevaplara gore ",o1.name,o1.surname);printf("Karakteriniz Fatma Turgut'tur");
                                     break;
                                     default:
                                     printf("yanlis bir tuslama yaptiniz\n");    
                                    }
                                }while(cevap!=1&&cevap!=2);
                                break;
                                default:
                                printf("yanlis bir tuslama yaptiniz\n");
                            }
                        }while(cevap!=1&&cevap!=2);    
                    }
                }    
            }
        }
        printf("\nTekrar oynamak isterseniz 1' basiniz");
        scanf("%d",&tekrar);
        system("CLS");
  }while(tekrar==1);

  return 0;
     
}
