/*
HANGMANGAME();
WORDSEARCHGAME();
SUDOKUGAME();
CRACKEDCODEGAME();
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <rlutil.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

void print(int l,char pr[l])
{
     for(int i=0;i<l;i++)
     {
         printf("%c",pr[i]);
         Sleep(33);
     }
}
void printgameover()
{
            setColor(YELLOW);
            FILE *fp5;
            char line9[256];
            fp5=fopen("gameover.txt","r");
            printf("\n\n");
            for(int n=1; n<=12; n++)
            {
                fgets(line9, 128, fp5);
                printf("\t\t\t\t\t%s", line9);
            }
            fclose(fp5);
            setColor(WHITE);
}

void printlevel1()
{
            FILE *fp5;
            char line9[128];
            fp5=fopen("level1.txt","r");
            for(int n=1; n<=12; n++)
            {
                fgets(line9, 128, fp5);
                printf("%s", line9);
            }
            fclose(fp5);
}
void printlevel2()
{
            FILE *fp5;
            char line9[128];
            fp5=fopen("level2.txt","r");
            for(int n=1; n<=7; n++)
            {
                Sleep(50);
                fgets(line9, 128, fp5);
                printf("%s", line9);
            }
            fclose(fp5);
}
void printlevel3()
{
            FILE *fp5;
            char line9[128];
            fp5=fopen("level3.txt","r");
            for(int n=1; n<=7; n++)
            {
                fgets(line9, 128, fp5);
                printf("%s", line9);
            }
            fclose(fp5);
}

void safe()
{
        char line9[128];
        FILE *fpsafe;
        fpsafe=fopen("safe.txt","r");
        for(int n=1; n<=16; n++)
        {
            Sleep(50);
            fgets(line9, 128, fpsafe);
            printf("\t\t%s", line9);
        }
        fclose(fpsafe);
        printf("\n\n\n\n");
}
void printcred()
{
        char line10[512];
        FILE *fpcred;
        fpcred=fopen("credits.txt","r");
        setColor(YELLOW);
        for(int n=1; n<=44; n++)
        {
            Sleep(50);
            fgets(line10, 512, fpcred);
            printf("\t\t%s", line10);
        }
        fclose(fpcred);
        setColor(WHITE);
}
struct test
{
    char naam[50]; //Shamsheer
    int score; //1000
};

void main()
{
    struct test s[100], t[100];
    char name[50],line1[128],line2[128];
    time_t start, end;
    double timetot=0;
    int minutes, seconds,datatime,row1=30, row2=20;
    setColor(GREEN);
    Sleep(2500);
    FILE *fpointer=  fopen("castle.txt", "r" );
    for(int n=1; n<=39; n++)
    {
        Sleep(50);
        fgets(line1, 128, fpointer);
        printf("\t\t\t\t\t%s", line1);
    }
    fclose(fpointer);
    Sleep(2500);
    setColor(WHITE);
    FILE *fpointer2= fopen("welcome.txt", "r");
    for(int j=1; j<=11; j++)
    {
        Sleep(50);
        fgets(line2, 128, fpointer2);
        printf("\t\t\t\t\t%s", line2);
    }
    fclose(fpointer2);
    getch();
    system("cls");

    mainmen:
    printf("");
    char line4[512];
    FILE *fpointer4= fopen("welcome.txt", "r");
    for(int j=1; j<=11; j++)
    {
        Sleep(50);
        fgets(line4, 512, fpointer4);
        printf("\t\t\t\t\t%s", line4);
    }
    Sleep(1500);
    for(int j=11; j<=41; j++)
    {
        fgets(line4, 512, fpointer4);
        printf("\t\t\t\t\t%s", line4);
    }
    fclose(fpointer4);

    char ch1,ch[20];
    printf("\n\n\n\t\t\tSelect an option to continue: ");
    def:
    scanf("%s", &ch);
    int len=strlen(ch);
    if(len!=1)
    {
        printf("\n\n\n\t\t\tEnter a correct option\n\n\n\t\t\t");
        goto def;
    }
    ch1=ch[0];
    switch(ch1)
    {
    case '1':

        printf("");
        validopt:
        system("cls");
        gotoxy(row1,row2);
        printf("Do you want to skip the story?");
        gotoxy(row1,row2+1);
        printf("1. Yes");
        gotoxy(row1,row2+2);
        printf("2. No");
        gotoxy(row1,row2+3);
        char inp, inp2[20];
        scanf("%s", &inp2);
        int inplen=strlen(inp2);
        inp=inp2[0];
        if(inp=='1' && inplen==1)
        {
            goto level1;
        }
        if(inp!='2')
        {
            gotoxy(row1,row2+4);
            printf("Enter a correct option");
            getch();
            goto validopt;
        }
        
    

        //STORY
        system("cls");
        gotoxy(row1,row2);
        Sleep(100);
        char p1[]=("As the protagonist sips on his morning coffee, he reads in the paper about the demise of a friend and fellow Archaeologist and explorer,");
        int l1=strlen(p1);
        print(l1,p1);
        gotoxy(row1,row2+1);
        Sleep(2000);
        char p2[]=("Dora Boots, which happened on her last expedition to Atlantis island. The island had been a topic of lengthy discussions because of its");
        int l2=strlen(p2);
        print(l2,p2);
        gotoxy(row1,row2+2);
        Sleep(2000);
        char p3[]=("mysterious location and appearance. Many had died trying to uncover its secrets, but none succeeded.");
        int l3=strlen(p3);
        print(l3,p3);
        gotoxy(row1,row2+4);
        Sleep(2000);
        char p4[]=("Having failed to gain recognition in all his journeys, the protagonist decides to try out his luck once more......");
        int l4=strlen(p4);
        print(l4,p4);
        gotoxy(row1, row2+6);
        Sleep(2000);
        char p5[]=("He decides to take on the dangers of Atlantis himself!!!!");
        int l5=strlen(p5);
        print(l5,p5);
        gotoxy(row1, row2+12);
        printf("(Press any key to continue) \n");
        getch();
        system("cls");
        setColor(BLUE);
        FILE *fp2 = fopen("ship.txt", "r");
        char line6[128];
        for(int j=11; j<=41; j++)
        {
            Sleep(50);
            fgets(line6, 128, fp2);
            printf("\t\t\t\t\t%s", line6);
        }
        fclose(fp2);
        setColor(WHITE);
        gotoxy(row1,row2+12);
        Sleep(2000);
        char p6[]=("After sailing for 4 and a half days from the East coast of Africa, the protagonist steps foot on the");
        int l6=strlen(p6);
        print(l6,p6);
        gotoxy(row1,row2+13);
        Sleep(2000);
        char p7[]=("dangerous yet beautiful Atlantis Island. There is absolute silence and cold wind, which spooks the protagonist.... ");
        int l7=strlen(p7);
        print(l7,p7);
        gotoxy(row1,row2+15);
        Sleep(2000);
        char p8[]=("But he stands firm and decides to step further into the mysteries of Atlantis...");
        int l8=strlen(p8);
        print(l8,p8);
        gotoxy(row1,row2+18);
        printf("(Press Enter to continue)");
        getch();
        system("cls");

        setColor(RED);
        FILE *fp3 = fopen("demon.txt", "r");
        char line7[128];
        for(int j=1; j<=23; j++)
        {
            Sleep(50);
            fgets(line7, 128, fp3);
            printf("\t\t\t\t\t\t%s", line7);
        }
        fclose(fp2);
        setColor(WHITE);
        gotoxy(row1,row2+10);
        Sleep(100);
        char p9[]=("Wandering through a deep and dense forest, he is attacked by a huge figure which turns out to be a hungry demon!");
        int l9=strlen(p9);
        print(l9,p9);
        gotoxy(row1,row2+11);
        Sleep(2000);
        char p10[]=("He runs for his life but ends up falling off a cliff!");
        int l10=strlen(p10);
        print(l10,p10);
        gotoxy(row1,row2+12);
        Sleep(2000);
        char p11[]=("Few hours later, the protagonist gains consciousness.");
        int l11=strlen(p11);
        print(l11,p11);
        gotoxy(row1,row2+14);
        Sleep(2000);
        char p12[]=("He gets back on his feet and finds himself on the doors of a ginormous castle!!!");
        int l12=strlen(p12);
        print(l12,p12);
        gotoxy(row1,row2+18);
        printf("(Press Enter to continue)");
        getch();
        system("cls");
        char line1[128];
        fpointer=  fopen("castle.txt", "r" );
        setColor(GREEN);
        for(int n=1; n<=39; n++)
        {
            Sleep(50);
            fgets(line1, 128, fpointer);
            printf("\t\t\t\t\t%s", line1);
        }
        fclose(fpointer);
        setColor(WHITE);
        getch();
        system("cls");

        gotoxy(row1,row2);
        Sleep(100);
        char p13[]=("He finds a sign which reads: ");
        int l13=strlen(p13);
        print(l13,p13);
        gotoxy(row1,row2+14);
        printf("(Press Enter to continue)");
        getch();
        system("cls");

        char line8[128];
        FILE *fp4=  fopen("sign.txt", "r" );
        setColor(GREEN);
        gotoxy(1,row2-10);
        for(int n=1; n<=27; n++)
        {
            Sleep(50);
            fgets(line8, 128, fp4);
            printf("\t\t\t\t\t%s", line8);
        }
        fclose(fp4);
        setColor(WHITE);
        gotoxy(1,row2+25);
        printf("(Press Enter to continue)");
        getch();
        system("cls");

        char line9[128];
        FILE *fp5=  fopen("anorak.txt", "r" );
        setColor(MAGENTA);
        gotoxy(1, row2-15);
        for(int n=1; n<=21; n++)
        {
            Sleep(50);
            fgets(line9, 128, fp5);
            printf("\t\t\t\t\t\t%s", line9);
        }
        fclose(fp5);
        setColor(WHITE);

        gotoxy(row1,row2+10);
        Sleep(100);
        char p14[]=("\"Welcome to my Castle!\" says a mysterious, deep voice which echoes across the long empty corridors of the throne room.");
        int l14=strlen(p14);
        print(l14,p14);
        gotoxy(row1,row2+11);
        Sleep(2000);
        char p15[]=("On the throne stood one skinny figure wearing a purple robe and holding a slender staff.");
        int l15=strlen(p15);
        print(l15,p15);
        gotoxy(row1,row2+12);
        Sleep(2000);
        char p16[]=("\"So, you are here to claim my treasure? Well, if you want to win then you have to beat me at my own awesome game!\" says the man with a smirk on his face.");
        int l16=strlen(p16);
        print(l16,p16);
        gotoxy(row1,row2+14);
        Sleep(2000);
        char p17[]=("\"Bring it on!\" says the protagonist.");
        int l17=strlen(p17);
        print(l17,p17);
        gotoxy(row1,row2+16);
        Sleep(2000);
        char p18[]=("\"I am Anorak and the treasure will forever remain mine even in my death unless you beat my score on this unique device that I have curated.\"");
        int l18=strlen(p18);
        print(l18,p18);
        gotoxy(row1,row2+17);
        Sleep(2000);
        char p19[]=("He points towards a box that looks awful lot like an arcade machine.");
        int l19=strlen(p19);
        print(l19,p19);
        gotoxy(row1,row2+19);
        Sleep(2000);
        char p20[]=("The protagonist walks towards it and hits START!");
        int l20=strlen(p20);
        print(l20,p20);
        gotoxy(row1,row2+24);
        printf("(Press any key to continue) \n");
        getch();




        level1:

        system("cls");
        start = time(NULL);
        HANGMANGAME();
        end = time(NULL);
        timetot=difftime(end,start);
        printf("\nLEVEL 1 CLEARED!\n");
        printf("Time taken is %.1f seconds\n",difftime(end,start));
        printf("\n\n\nPress any key to continue\n");
        getch();

        //level2:
        system("cls");
        start=time(NULL);
        WORDSEARCHGAME();
        end=time(NULL);
        timetot+=difftime(end,start);
        printf("\nLEVEL 2 CLEARED!");
        printf("\nTime taken is %.1f seconds\n",difftime(end,start));
        printf("\n\n\nPress any key to continue\n");
        getch();

        //level3:
        system("cls");
        start=time(NULL);
        SUDOKUGAME();
        end=time(NULL);
        timetot+=difftime(end,start);
        printf("\nLEVEL 3 CLEARED!");
        printf("\nTime taken is %.1f seconds\n",difftime(end,start));
        printf("\n\n\nPress any key to continue\n");
        getch();

        if(inp=='1')
        {
            goto plotskip1;
        }

        //level4:
        system("cls");
        gotoxy(row1,row2);
        char p21[]=("The protagonist wipes the sweat off of his brow thinking that he has finally finished the game");
        int l21=strlen(p21);
        print(l21,p21);
        gotoxy(row1,row2+1);
        char p22[]=("and looks over his shoulder to see Anorak standing right next to him with a toothy grin on his skeletal face.");
        int l22=strlen(p22);
        print(l22,p22);
        gotoxy(row1,row2+3);
        char p23[]=("He points towards his throne which slides away to reveal a locked safe..");
        int l23=strlen(p23);
        print(l23,p23);
        gotoxy(row1,row2+5);
        char p24[]=("\"For your final game you have to guess the code to my mighty safe!\"");
        int l24=strlen(p24);
        print(l24,p24);
        gotoxy(row1,row2+15);
        printf("(Press Enter to continue)");
        getch();

        plotskip1:
        system("cls");
        safe();
        start=time(NULL);
        CRACKEDCODEGAME();
        end=time(NULL);
        timetot+=difftime(end,start);
        printf("\nTime taken is %.1f seconds\n",difftime(end,start));
        printf("\n\n\nPress any key to continue\n");
        getch();

        if(inp=='1')
        {
            goto plotskip2;
        }

        system("cls");
        gotoxy(row1,row2);
        char psf[]=("THE SAFE CREAKS OPEN!");
        int lsf=strlen(psf);
        print(lsf,psf);
        gotoxy(row1,row2+5);
        char p25[]=("Anorak\'s dead face looks at you with his jaw open so wide that it feels as if his skeletal jaw will");
        int l25=strlen(p25);
        print(l25,p25);
        gotoxy(row1,row2+6);
        char p26[]=("drop down to the floor at any moment...");
        int l26=strlen(p26);
        print(l26,p26);
        gotoxy(row1,row2+8);
        char p27[]=("He drops his staff with an ominous thud and the few bits of skin remaining on his face peels");
        int l27=strlen(p27);
        print(l27,p27);
        gotoxy(row1,row2+9);
        char p28[]=("away as his deep voice turns into a shocked squeal which fades away while saying-");
        int l28=strlen(p28);
        print(l28,p28);
        gotoxy(row1,row2+12);
        char p29[]=("\"You have defeated me.\" ");
        int l29=strlen(p29);
        print(l29,p29);
        gotoxy(row1,row2+14);
        char p30[]=("His skeletal body crumbles leaving nothing but his robes and the staff which has now turned to wood...");
        int l30=strlen(p30);
        print(l30,p30);
        gotoxy(row1,row2+15);
        char p31[]=("The Protagonist looks at the chest which now lies open and smirks to himself and steps towards it to claim his prize!");
        int l31=strlen(p31);
        print(l31,p31);
        Sleep(700);
        gotoxy(row1,row2+25);
        printf("(Press Enter to continue)");
        getch();

        plotskip2:
        system("cls");
        for(int i=0;i<7;i++)
        {
            system("cls");
            gotoxy(row1,row2);
            printf("\t\t\t\t\tYOU HAVE WON");
            Sleep(300);
            system("cls");
            gotoxy(row1,row2+2);
            printf("\t\t\t\t\tYOU HAVE WON");
            Sleep(300);
        }
        system("cls");


        printgameover();
        int seconds=timetot;
        gotoxy(row1,row2);
        printf("\t\t\t\t Your time: %02d:%02d",seconds/60,seconds%60);
        printf("\t\tUsername: ");
        scanf(" %50[^\n]", &name);
        FILE *fp;
        fp=fopen("nameandscore.txt","a");
        fprintf(fp,"%s %d \n",name, seconds);
        fclose(fp);
        printf("\n\n\n\n\n\n\n\n\t\t\t(Press any key to continue) \n");
        getch();
        system("cls");
        goto mainmen;
        break;

    case '2':
        system("cls");
        setColor(YELLOW);
        printf("\n\tWordseach:-\n\tYou are given a mix of letters in matrix format. You are requested to");
        printf("\n\tfind 5 programming languages from the matrix. You have 5 lives.");
        printf("\n\tIf the word found isn't correct, you'll lose a life. If you lose all your lives the ");
        printf("\n\tgame will restart. Guessing all the words correctly will advance you to the next level.\n");
        printf("\n\tHangman:-\n\tIn this game you have to guess the letters of the word related to the HINT.");
        printf("\n\tGuessing the wrong letter will cost you lives. You have 3 lives. Losing all your lives ");
        printf("\n\twill restart the game with a different word. Guessing the letters of the word correctly");
        printf("\n\twill advance you to the next level.\n");
        printf("\n\tMini sudoku:-\n\tEach puzzle consists of a 4x4 grid containing given clues in various places.");
        printf("\n\tThe object is to fill all empty squares so that the numbers 1 to 4 (for 4x4 puzzles) appear");
        printf("\n\texactly once in each row, column and box. You have 3 lives initially. Losing all of them");
        printf("\n\twill restart the game with a new sudoku. Solving the sudoku will advance you to the next level\n");
        printf("\n\tCrack D code:-\n\tYou have to guess a 4 digit code. You can guess the digits from");
        printf("\n\tthe range of 0-9.You have 6 lives.If the digit is highlighted as RED,");
        printf("\n\tit means the digit is not present in the code.If the digit is highlighted in BLUE,");
        printf("\n\tit means the digit is present in the code but is in wrong position.");
        printf("\n\tIf the digit is highlighted in GREEN colour, it means the digit is");
        printf("\n\tcorrectly placed.Completing this level will advance you in the game.");
        setColor(WHITE);
        printf("\n\n\n\nPress any key to return\n");
        getch();
        system("cls");
        setColor(WHITE);
        goto mainmen;
        break;

    case '3':
        system("cls");
        printcred();
        printf("\n\n\n\nPress any key to return\n");
        getch();
        setColor(WHITE);
        system("cls");
        goto mainmen;
        break;

    case '4':
        system("cls");
        char line5[128];
        int x,count=0, row=8;

        //Taking all file inputs in structure
        fp=fopen("nameandscore.txt","r");
        for(int i=0;i<100;i++)
        {
            fscanf(fp,"%s %d",&s[i].naam,&s[i].score);
            count++;
            x=getc(fp);
            if(x==EOF)
            {
                break;
            }
        }
        fclose(fp);

        //sorting the structures
        for (int i = 0; i < count-1; ++i)
        {
            for (int j = i + 1; j < count-1; ++j)
            {
                if (s[i].score > s[j].score)
                {
                    t[i] = s[i];
                    s[i] = s[j];
                    s[j] = t[i];
                }
            }
        }

        //printing leaderboard (Sorted structures)
        FILE *fp1 = fopen("leaderboard.txt", "r");
        for(int j=1; j<=4; j++)
        {
            Sleep(50);
            fgets(line5, 128, fp1);
            printf("\t\t\t\t\t%s", line5);
        }
        fclose(fp1);
        gotoxy(60,6);
        printf("Username");
        gotoxy(82,6);
        printf("Time Taken");
        printf("\n\t\t\t\t\t  =====================================================================");
        for (int i = 0; i < count-1; ++i)
        {
            if(i==0)
            {
                setColor(YELLOW);
            }
            else
            {
                setColor(WHITE);
            }
            gotoxy(57, row);
            printf("%d.", i+1);
            gotoxy(60,row);
            printf("%s", s[i].naam);
            gotoxy(82,row);
            printf("%02d:%02d", s[i].score/60,s[i].score%60);
            row++;
        }

        getch();
        system("cls");
        goto mainmen;
        break;

    case '5':
        system("cls");
        printf("\n\n\t\t\tEXIT");
        break;
    default:
        printf("\n\n\t\t\tEnter a valid option to continue: \n\n\n\t\t\t");
        goto def;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                              WORDSEARCHGAME                          STARTS                              HERE */
void WORDSEARCHGAME()
{
    int flag=0;
    level1:
    printf("");
    if(flag==1)
    {
        system("cls");
    }
    char line3[128];
    printlevel2();
    FILE *fpointer3= fopen("WORDSEARCHGAME.txt", "r");
    for(int m=1; m<=10; m++)
    {
        fgets(line3, 128, fpointer3);
        printf("%s", line3);
    }
    fclose(fpointer3);

    char python[]={"PYTHON"};
    char pearl[]={"PERL"};
    char java[]={"JAVA"};
    char ruby[]={"RUBY"};
    char pas[]={"PASCAL"};
    char chr;
    char name[100];

    printf("\n\nFind FIVE PROGRAMMING LANGUAGES:\nCaution! Guessing the wrong word will cost you a life(even typos)!\n");
    printf("\nCaution! C is not one of the answers!");
    printf("\nYou have 5 lives\n");
    int cnt=0;
    int g;
    int x=0, y=0, z=0, a=0, b=0;
    int life=4;
    char ch;
    while(1)
    {
        printf("\nEnter the word: ");
        scanf("%s", &name);
        printf("\n");
        int g= strlen(name);
        for(int e=0; e<g; e++)
        {
            chr=toupper(name[e]);
            name[e]=chr;
        }
        if(x>=0)
        {

            if(strcmp(name, python)==0)

            {

                if(x==0)
                {
                    cnt++;
                    printf("\nExcellent! You have found %d word(s)\n", cnt);
                    x++;
                }
                else
                {
                    printf("\nYou have already found this word!\n");
                }
            }
        }

        if(y>=0)
        {
            if(strcmp(name,pearl)==0)
            {
                if(y==0)
                {
                    cnt++;
                    printf("\nExcellent! You have found %d word(s)\n", cnt);
                    y++;
                }
                else
                {
                    printf("\nYou have already found this word!\n");
                }
            }
        }
        if(z>=0)
        {

            if(strcmp(name,java)==0)
            {
                if(z==0)
                {
                    cnt++;
                    printf("\nExcellent! You have found %d word(s)\n", cnt);
                    z++;
                }
                else
                {
                    printf("\nYou have already found this word!\n");
                }
            }
        }
        if(a>=0)
        {
           if(strcmp(name,ruby)==0)
            {
                if(a==0)
                {
                    cnt++;
                    printf("\nExcellent! You have found %d word(s)\n", cnt);
                    a++;
                }
                else
                {
                    printf("\nYou have already found this word!\n");
                }
            }
        }
        if(b>=0)
        {
                if(strcmp(name,pas)==0)
                    {
                    if(b==0)
                    {
                        cnt++;
                        printf("\nExcellent! You have found %d word(s)\n", cnt);
                        b++;
                    }
                    else
                    {
                        printf("\nYou have already found this word!\n");
                    }
                }
        }
        if(life==0)
        {
            printf("\nYou're out of lives!\nLevel will now restart\n");
            flag=1;
            printf("\n");
            printf("\nEnter any key to continue\n");
            scanf("%s", &ch);
            if(ch=='1')
            {
                goto level1;
            }
            else
            {
                goto level1;
            }


        }
        if(strcmp(name, python)!=0 &&
           strcmp(name,pearl)!=0 &&
           strcmp(name,java)!=0 &&
           strcmp(name,pas)!=0 &&
           strcmp(name,ruby)!=0 )
        {
            printf("\nWrong Word! Try again\n");
            life--;
            printf("\nLives left=%d\n", life+1);
        }
        if(x==1 &&
           y==1 &&
           z==1 &&
           a==1 &&
           b==1)
        {
            printf("\nYou found all words!");
            break;

        }
    }
}
/*                                                      WORDSEARCHGAME ENDS HERE                                          */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                          HANGMAN STARTS HERE                      */
void lyf(int life)
{
    printf("Remaining lives are %d !\n",life);
}
void printcrap1()
{
        printlevel1();
        printf("\nGuess a 5 lettered word\nHint: You use this while writing\n\n");
        printf("\nEnter a letter \n");
}

void printcrap2()
{
        printlevel1();
        printf("\nGuess a 5 lettered word\nHint: You use this for FPS games\n\n");
        printf("\nEnter a letter \n");
}
void printcrap3()
{
        printlevel1();
        printf("\nGuess a 6 lettered word\nHint: Often used by hackers in FPS games\n\n");
        printf("\nEnter a letter \n");
}
void HANGMANGAME()
{
    srand(time(0));
    int num, upper=3, lower=1;
    num = (rand() % (upper - lower + 1)) + lower;
    switch(num)
    {
        case 1:
        {
            rstrt1:
            system("cls");
            printlevel1();
            //printf("Welcome to level 1: Hangman");
            int life=3;
            char name[]={'W','R','I','S','T','\0'};
            printf("Welcome to level 1: HANGMAN\n");
            printf("\nGuess a 5 lettered word\nHint: You use this while writing\nYou have a total of 3 lives!!\n");
            printf("\nEnter a letter \n");
            char blank[]={'_','_','_','_','_','\0'};
            char chr[50];
            char ch;
            lwr1:
            while(1)
                {
                    for(int i=0;i<5;i++)
                    {
                        printf("%c \t",blank[i]);
                    }
                    printf("\n");
                    printf("");
                    scanf(" %s",&chr);
                    int lch=strlen(chr);
                    if(lch!=1)
                    {
                        printf("Enter only 1 letter\n\n");
                        Sleep(100);
                        goto lwr1;
                    }
                    ch=toupper(chr[0]);
                    if(ch=='W'||ch=='R'||ch=='I'||ch=='S'||ch=='T')
                    {
                        if(ch=='W')
                        {
                            blank[0]=ch;
                        }
                        if(ch=='R')
                        {
                            blank[1]=ch;
                        }
                        if(ch=='I')
                        {
                            blank[2]=ch;
                        }
                        if(ch=='S')
                        {
                            blank[3]=ch;
                        }
                        if(ch=='T')
                        {
                            blank[4]=ch;
                        }
                        system("cls");
                        printcrap1();

                    }
                    else
                    {
                        printf("Wrong character inputted! \a \n");
                        life--;
                        printf("\n\n\nPress any key to continue\n");
                        getch();
                        system("cls");
                        printcrap1();
                        lyf(life);
                    }

                    printf("\n");
                    if(life==0)
                    {
                        printf("You have lost!\n");
                        printf("Level will now restart! \n");
                        printf("\n\n\nPress any key to continue\n");
                        getch();
                        goto rstrt1;
                    }
                    if(strcmp(blank,name)==0)//0 is same
                    {
                        printf("You have won!\n");
                        break;
                    }
                }
            break;
        }

        case 2:
        {
            rstrt2:
            system("cls");
            printlevel1();
            printf("Welcome to level 1: HANGMAN\n");
            int life=3;
            char name[]={'M','O','U','S','E','\0'};
            printf("\nGuess a 5 lettered word\nHint: You use this for FPS games\nYou have a total of 3 lives!!\n");
            printf("\nEnter a letter \n");
            char blank[]={'_','_','_','_','_','\0'};
            char chr[50];
            char ch;
            lwr2:
            while(1)
                {
                    for(int i=0;i<5;i++)
                    {
                        printf("%c \t",blank[i]);
                    }
                    printf("\n");
                    printf("");
                    scanf(" %s",&chr);
                    int lch=strlen(chr);
                    if(lch!=1)
                    {
                        printf("Enter only 1 letter\n");
                        Sleep(100);
                        goto lwr2;
                    }
                    ch=toupper(chr[0]);
                    if(ch=='M'||ch=='O'||ch=='U'||ch=='S'||ch=='E')
                    {
                        if(ch=='M')
                        {
                            blank[0]=ch;
                        }
                        if(ch=='O')
                        {
                            blank[1]=ch;
                        }
                        if(ch=='U')
                        {
                            blank[2]=ch;
                        }
                        if(ch=='S')
                        {
                            blank[3]=ch;
                        }
                        if(ch=='E')
                        {
                            blank[4]=ch;
                        }
                        system("cls");
                        printcrap2();

                    }
                    else
                    {
                        printf("Wrong character inputted! \a \n");
                        life--;
                        printf("\n\n\nPress any key to continue\n");
                        getch();
                        system("cls");
                        printcrap2();
                        lyf(life);
                    }

                    printf("\n");
                    if(life==0)
                    {
                        printf("You have lost!\n");
                        printf("Level will now restart! \n");
                        printf("\n\n\nPress any key to continue\n");
                        getch();
                        goto rstrt2;
                    }
                    if(strcmp(blank,name)==0)//0 is same
                    {
                        printf("You have won!\n");
                        break;
                    }
                }
            break;
        }

        case 3:
        {
            rstrt3:
            system("cls");
            printlevel1();
            printf("Welcome to level 1: HANGMAN\n");
            int life=3;
            char name[]={'A','I','M','B','O','T','\0'};
            printf("\nGuess a 6 lettered word\nHint: Often used by hackers in FPS games\nYou have a total of 3 lives!!\n");
            printf("\nEnter a letter \n");
            char blank[]={'_','_','_','_','_','_','\0'};
            char chr[50],ch;
            lwr3:
            while(1)
                {
                    for(int i=0;i<6;i++)
                    {
                        printf("%c \t",blank[i]);
                    }
                    printf("\n");
                    printf("");
                    scanf(" %s",&chr);
                    int lch=strlen(chr);
                    if(lch!=1)
                    {
                        printf("Enter only 1 letter\n");
                        Sleep(100);
                        goto lwr3;
                    }
                    ch=toupper(chr[0]);
                    if(ch=='A'||ch=='I'||ch=='M'||ch=='B'||ch=='O'||ch=='T')
                    {
                        if(ch=='A')
                        {
                            blank[0]=ch;
                        }
                        if(ch=='I')
                        {
                            blank[1]=ch;
                        }
                        if(ch=='M')
                        {
                            blank[2]=ch;
                        }
                        if(ch=='B')
                        {
                            blank[3]=ch;
                        }
                        if(ch=='O')
                        {
                            blank[4]=ch;
                        }
                        if(ch=='T')
                        {
                            blank[5]=ch;
                        }
                        system("cls");
                        printcrap3();

                    }
                    else
                    {
                        printf("Wrong character inputted! \a \n");
                        life--;
                        printf("\n\n\nPress any key to continue\n");
                        getch();
                        system("cls");
                        printcrap3();
                        lyf(life);
                    }

                    printf("\n");
                    if(life==0)
                    {
                        printf("You have lost!\n");
                        printf("Level will now restart! \n");
                        printf("\n\n\nPress any key to continue\n");
                        getch();
                        goto rstrt3;
                    }
                    if(strcmp(blank,name)==0)//0 is same
                    {
                        printf("You have won!\n");
                        break;
                    }
                }
            break;
        }

        default:
        {
            break;
        }
    }
}
/*                                              HANGMAN          ENDS           HERE             */
//////////////////////////////////////////////////////////////////////////////////////////////////
/*      CODEBREAKER STARTS HERE             */
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// A function to generate a random permutation of arr[]
void randomize ( int arr[], int n )
{
    // Use a different seed value so that we don't get same
    // result each time we run this program
    srand ( time(NULL) );

    // Start from the last element and swap one by one. We don't
    // need to run for the first element that's why i > 0
    for (int i = n-1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i+1);

        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}
void startprint(int difficulty, int life)
{
    printf("You have %d attempts to crack the code.\n",life);
    printf("To crack the code you must enter %d unique digits.\n\n",difficulty);
    setColor(RED);
    printf("RED - Wrong number, wrong position.\n");
    setColor(BLUE);
    printf("BLUE - Right number, wrong position.\n");
    setColor(GREEN);
    printf("GREEN - Right number, right position.\n\n\n");
    setColor(WHITE);
}
void CRACKEDCODEGAME()
{
    loss:
    printf("");
    /* MAGIC VARIABLES!!!! */
    int difficulty=4, life=6,arr[]={0,1,2,3,4,5,6,7,8,9},sizearr=10,ctr=difficulty+1,upper=9,lower=0,m[50]; //Difficulty can be set between 1-9
    char code[50];
    srand(time(0));
    randomize(arr, sizearr);

    for(int i=0;i<difficulty;i++)//converting m[] from int to char and store in code[]
    {
        m[i]=arr[i];
        code[i]=m[i]+'0';
        //printf("M[%d] is %d\n",i,m[i]);
        //printf("Code[%d] is %c\n",i,code[i]);
    }

    startprint(difficulty,life); //crap print statements
    char inp[50];
    winp:
    while(1)
    {
        printf("Enter the code:\n");
        scanf("%s",&inp);
        int ulen=strlen(inp);
        if(ulen!=difficulty) //check string length
        {
            printf("Enter only %d digit code!\n\n\n",difficulty);
            goto winp;
        }
        for(int i=0;i<difficulty;i++) //Check if all digits are unique
        {
            for(int j=i;j<difficulty-1;j++)
            {
                if(inp[i]==inp[j+1])
                {
                    printf("Enter %d unique digits!\n\n\n",difficulty);
                    goto winp;
                }
            }
        }
        for(int i=0;i<difficulty;i++)
        {
            if(inp[i]==code[i])
            {
                //printf("Gr");
                setColor(GREEN);
                printf("%c",inp[i]);
                setColor(WHITE);
                //cond[i]=0;
            }
            else
            {
                for(int j=0;j<difficulty;j++)
                {
                    if(inp[i]==code[j])
                    {
                        ctr=i;
                    }
                }
                if(ctr<difficulty)
                {
                    setColor(BLUE);
                    printf("%c",inp[i]);
                    setColor(WHITE);
                }
                else
                {
                    setColor(RED);
                    printf("%c",inp[i]);
                    setColor(WHITE);
                }
                ctr=difficulty+1;
            }
        }
        int flag=0; //check how many digits are green
        for(int i=0;i<difficulty;i++)
        {
            /*if (inp[0]==code[0] && inp[1]==code[1] &&
                inp[2]==code[2] && inp[3]==code[3])*/
            if(inp[i]==code[i])
            {
                flag++;
            }
        }
        if(flag==difficulty)
        {
            printf("\n\nYou have successfully decoded! \n");
            break;
        }
        else
        {
            life--;
            printf("\nRemaining attempts: %d",life);
            if (life==0)
            {
                printf("\n\nYou have run out of lives!\nCode was %s!\nLevel will now restart\nPress any key to continue\n",code);
                getch();
                system("cls");
                goto loss;
            }
            printf("\n\n\n");
        }
    }
}
/* CODEBREAKER ENDS HERE */
//////////////////////////
/* SUDOKU STARTS HERE */
void SUDOKUGAME()
{
    system("cls");
    int upper=4,lower=1;
    sudreset: //Sudoku Reset
    printf("");
    int haras,life3=3,g01,g02,g10,g20,g21,g22;
    int arr[4][4]={  {0,3,2,0},
                     {2,0,0,0},
                     {4,2,3,0},
                     {0,0,0,0}};
    srand(time(0));
    do{
        g01 = (rand() % (upper - lower + 1)) + lower;   //num = (rand() % (upper – lower + 1)) + lower; "Number in certain range formula"
        g02 = (rand() % (upper - lower + 1)) + lower;   //num = (rand() % (upper – lower + 1)) + lower; "Number in certain range formula"
        g10 = (rand() % (upper - lower + 1)) + lower;   //num = (rand() % (upper – lower + 1)) + lower; "Number in certain range formula"
        g20 = (rand() % (upper - lower + 1)) + lower;   //num = (rand() % (upper – lower + 1)) + lower; "Number in certain range formula"
        g21 = (rand() % (upper - lower + 1)) + lower;   //num = (rand() % (upper – lower + 1)) + lower; "Number in certain range formula"
        g22 = (rand() % (upper - lower + 1)) + lower;   //num = (rand() % (upper – lower + 1)) + lower; "Number in certain range formula"
    }while(g01==g02 || g01==g21 || g01==g10 || g02==g22 || g10==g20 ||
           g20==g21 || g20==g22 || g21==g22 || g20==g01 || (g01+g02+g10+g20==10)||g10==g01||g02==g20);
    arr[0][1]=g01;
    arr[0][2]=g02;
    arr[1][0]=g10;
    arr[2][0]=g20;
    arr[2][1]=g21;
    arr[2][2]=g22;
    wrc: //Print and enter R and C again
    printlevel3();
    setColor(BLUE);
    printf("\n\t      Cols: 1     2      3     4\n");setColor(YELLOW);
    printf(" \t\t============================\n");
    setColor(BLUE);printf("      Rows: 1");setColor(YELLOW);printf("\t||  %d  |  %d  ||  %d  |  %d  ||\n",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
    printf(" \t\t||-----------||-----------||\n");
    setColor(BLUE);printf("\t    2   ");setColor(YELLOW);printf("||  %d  |  %d  ||  %d  |  %d  ||\n",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
    printf(" \t\t||========================||\n");
    setColor(BLUE);printf("\t    3   ");setColor(YELLOW);printf("||  %d  |  %d  ||  %d  |  %d  ||\n",arr[2][0],arr[2][1],arr[2][2],arr[2][3]);
    printf(" \t\t||-----------||-----------||\n");
    setColor(BLUE);printf("\t    4   ");setColor(YELLOW);printf("||  %d  |  %d  ||  %d  |  %d  ||\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3]);
    printf(" \t\t============================\n\n\n");
    setColor(WHITE);
    while(1)
    {
        printf("\tEnter row number in which you want to store the number:\n");
        int row;
        printf("\t");
        scanf("%d",&row);
        printf("\n\n\tEnter the column number in which you want to store the number:\n");
        int column;
        printf("\t");
        scanf("%d",&column);
        if((row==2&&column==1)||(row==1&&column==2)||(row==1&&column==3)||
           (row==3&&column==1)||(row==3&&column==2)||(row==3&&column==3)) //Predefined grids
           {
               wi: //Jump for R and C wrong val
               printf("\tEnter valid row and/or column!\n\n");
               printf("\n\n\n\n\tPress any key to continue\n");
               getch();
               system("cls");
               goto wrc; //Print board and enter R and C
           }
        if(row>=5||column>=5) //R and C cant exceed 4
        {
            goto wi;
        }
        wval: //wrong value entered for grid input
        printf("\n\n\tEnter the value:\n\t");
        int temp=arr[row-1][column-1];
        scanf("%d",&arr[row-1][column-1]);
        if(arr[row-1][column-1]<1||arr[row-1][column-1]>4)  //Check grid input value
        {
            printf("\tEntered value must be between 1-4!");
            printf("\n\n\n\n\tPress any key to continue\n");
            getch();
            arr[row-1][column-1]=temp;
            system("cls");
            sudoku(4,4,arr);
            goto wval;
        }
        Sleep(1000);
        system("cls");
        wrongInput: //Neither Y or N entered by user
        sudoku(4, 4, arr);
        if(arr[0][0]!=0 && arr[0][1]!=0 && arr[0][2]!=0 && arr[0][3] !=0 && //Check all grid not equal to zero to show Y/N prompt
           arr[1][0]!=0 && arr[1][1]!=0 && arr[1][2]!=0 && arr[1][3] !=0 &&
           arr[2][0]!=0 && arr[2][1]!=0 && arr[2][2]!=0 && arr[2][3] !=0 &&
           arr[3][0]!=0 && arr[3][1]!=0 && arr[3][2]!=0 && arr[3][3] !=0 )
        {
            printf("\n\tType 'Y' if you think you have solved the sudoku!..\n");
            printf("\n\tType 'N' if you want to change the numbers..\n");
            printf("\t");
            char dec;
            scanf(" %c",&dec); // Y/N input
            if(dec=='Y'||dec=='y') //Check victory
            {
                system("cls");
                sudoku(4, 4, arr);
                haras=check(4, 4, arr);
                if(haras==1) //check returned 1
                {
                    break; //VICTORY
                }
                else //Thought I won but I lost //Haras returned zero
                {
                    --life3; //Life lost
                    if(life3==0) //End of lives
                    {
                        printf("\n\tYOU HAVE RUN OUT OF LIVES!\n\t SUDOKU WILL NOW BE RESET!\n");
                        printf("\n\n\n\n\tPress any key to continue\n");
                        getchar();
                        system("cls");
                        goto sudreset; //Reset Sudoku Board
                    }
                    else //Lost life but not zero
                    {
                        printf("\n\tNot SOLVED! You have lost a life!\n\tRemaining life is %d ! \n\tTry again!!\n\t",life3);
                        printf("\n\n\n\n\tPress any key to continue\n");
                        getchar();
                        system("cls");
                        goto wrc; //Go back to entering R and C
                    }
                }
            }
            else if(dec=='N'||dec=='n') //Edit numbers
            {
                Sleep(1000);
                system("cls");
                goto wrc; ////Print board and enter R and C
            }
            else
            {
                printf("\n\n\tWrong Input, try again. \n\n");
                printf("\n\n\n\n\tPress any key to continue\n");
                getchar();
                system("cls");
                goto wrongInput; //Jump back to Y/N
            }
        }
    }
}

void sudoku(int n, int m, int arr[n][m]) //Call updated board
{
    printlevel3();
    setColor(BLUE);
    printf("\n\t      Cols: 1     2      3     4\n");setColor(YELLOW);
    printf(" \t\t============================\n");
    setColor(BLUE);printf("      Rows: 1");setColor(YELLOW);printf("\t||  %d  |  %d  ||  %d  |  %d  ||\n",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
    printf(" \t\t||-----------||-----------||\n");
    setColor(BLUE);printf("\t    2   ");setColor(YELLOW);printf("||  %d  |  %d  ||  %d  |  %d  ||\n",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
    printf(" \t\t||========================||\n");
    setColor(BLUE);printf("\t    3   ");setColor(YELLOW);printf("||  %d  |  %d  ||  %d  |  %d  ||\n",arr[2][0],arr[2][1],arr[2][2],arr[2][3]);
    printf(" \t\t||-----------||-----------||\n");
    setColor(BLUE);printf("\t    4   ");setColor(YELLOW);printf("||  %d  |  %d  ||  %d  |  %d  ||\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3]);
    printf(" \t\t============================\n\n\n");
    setColor(WHITE);
}

int check(int n, int m, int arr2[n][m]) //Check all rows and column sumation conditions + victory/defeat
{
    int sumr=0;//for sum of elemnts in one row
    int ctrr=0;
    int sumc=0;
    int ctrc=0;
    int flag=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sumr+=arr2[i][j];
        }
        if(sumr==10)
        {
            ++ctrr;//ye hua for one ROW
        }
        sumr=0;
    }

    if(ctrr==4)
    {
        ++flag;
    }
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<4;i++)
        {
            sumc+=arr2[i][j];
        }
        if(sumc==10)
        {
            ++ctrc;//ye hua for one COL
        }
        sumc=0;
    }
    if(ctrc==4)
    {
        ++flag;
    }
    if(arr2[0][0]+arr2[0][1]+arr2[1][0]+arr2[1][1]==10)
    {
        ++flag;
    }
    if(arr2[0][2]+arr2[0][3]+arr2[1][2]+arr2[1][3]==10)
    {
        ++flag;
    }
    if(arr2[2][0]+arr2[2][1]+arr2[3][0]+arr2[3][1]==10)
    {
        ++flag;
    }
    if(arr2[2][2]+arr2[2][3]+arr2[3][2]+arr2[3][3]==10)
    {
        ++flag;
    }
    if(flag==6)
    {
        system("cls");
        printf("\nYou have won the game!!!\n");
        return 1; //Game won! Loop will break
    }
    else
    {
        printf("\n\tYour answer is wrong!!!\n");
        Sleep(1500);
    }
    return 0; //Game continues
}
