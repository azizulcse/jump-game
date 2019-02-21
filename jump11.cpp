#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<ctime>

using namespace std;
int qx[100],qy[100];

int gameover,level,highscore,h=0;
int score=0;
char sc[50],lev[50],hs[50];
char ch;
int screengameover(int score,int highscore)
{
    int i,j,j1,cond;
    for(i=50,j=1310,j1=650,cond=1; cond<=5; cond++,i=i-10,j=j+10,j1=j1+10)
        rectangle(i,i,j,j1);
    setfillstyle(SOLID_FILL,9);
    floodfill(5,5,WHITE);
    setfillstyle(SOLID_FILL,RED);
    floodfill(15,15,WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(25,25,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(35,35,WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(45,45,WHITE);
    setfillstyle(SOLID_FILL,6);
    floodfill(51,51,WHITE);
    setcolor(BLUE);
    settextstyle(6,0,10);
    setbkcolor(6);
    outtextxy(120,100,"GAMEOVER");
    settextstyle(6,0,5);
    sprintf(sc,"%d",score);
    setcolor(GREEN);
    outtextxy(480,250,"SCORE:");
    setcolor(WHITE);
    outtextxy(720,250,sc);
    sprintf(hs,"%d",highscore);
    setcolor(GREEN);
    outtextxy(400,330,"HIGHSCORE:");
    setcolor(WHITE);
    outtextxy(800,330,hs);
    setcolor(GREEN);
    settextstyle(6,0,3);
    outtextxy(340,550,"Press 'RIGHT ARROW' key to RESTART.");

    setcolor(RED);
    outtextxy(380,590,"Press 'LEFT ARROW' key to EXIT.");
    setcolor(WHITE);
    while(1)
    {
        ch=getch();
        if(ch==77||ch==75)
        {
            if(ch==77)
            {
                ch=0;
                return 1;
            }
            else
                return 0;
            break;
        }
    }

}
void screen1()
{
    int i,j,j1,col,cond,p,q;
    while(1)
    {
        for(i=50,j=1310,j1=650,cond=1; cond<=5; cond++,i=i-10,j=j+10,j1=j1+10)
            rectangle(i,i,j,j1);
        setfillstyle(SOLID_FILL,9);
        floodfill(5,5,WHITE);
        setfillstyle(SOLID_FILL,RED);
        floodfill(15,15,WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(25,25,WHITE);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(35,35,WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(45,45,WHITE);
        setfillstyle(SOLID_FILL,6);
        floodfill(51,51,WHITE);
        line(50,500,1310,500);
        line(50,520,1310,520);
        line(410,520,410,650);
        line(910,520,910,650);
        line(50,300,1310,300);
        line(50,340,1310,340);
        line(650,300,650,340);//start
        line(900,300,900,340);//start
        settextstyle(6,0,1);
        setbkcolor(6);
        outtextxy(60,310,"CLICK THE START BUTTON TO START !!!.");
        setfillstyle(SOLID_FILL,RED);
        floodfill(651,301,WHITE);
        setbkcolor(RED);
        outtextxy(730,310,"START");


        circle(100,475,25);
        rectangle(300,440,310,500);
        rectangle(500,400,510,460);
        rectangle(700,440,710,500);
        rectangle(900,400,910,460);
        rectangle(1100,440,1110,500);
//rectangle(50,50,1310,650);
//rectangle(40,40,1320,660);
        line(410,50,410,300);//highscore
        line(910,50,910,300);//tips
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(55,55,WHITE);
        setfillstyle(SOLID_FILL,8);
        floodfill(915,55,WHITE);
        setbkcolor(GREEN);
        settextstyle(6,0,3);
        outtextxy(120,60,"HIGHSCORE");
        line(50,110,410,110);
        setbkcolor(8);
        outtextxy(1080,60,"TIPS");
        line(910,110,1310,110);
        settextstyle(6,0,5);
        setbkcolor(6);
        setcolor(9);
        outtextxy(530,70,"S U P E R");
        outtextxy(500,150,"J U M P E R");
        settextstyle(6,0,5);
        outtextxy(70,530,"CREATED");
        outtextxy(170,580,"BY");
        settextstyle(6,0,2);
        outtextxy(1050,530,"Computer");
        outtextxy(980,560,"Science & Engineering,");
        settextstyle(6,0,5);
        outtextxy(975,590,"BSMRSTU");
        setcolor(WHITE);
        settextstyle(6,0,3);
        outtextxy(530,530,"AZIZUL ISLAM");
        outtextxy(535,570,"ID: 20141201019");



        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN,p,q);
        if(p>=650&&p<=900&&q>=300&&q<=340)
        {
            setcolor(BLUE);
            outtextxy(730,310,"START");
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(652,302,WHITE);


            delay(100);
            cleardevice();
            setbkcolor(BLACK);
            setcolor(WHITE);
            break;
        }
        delay(0);

    }

}
void piller(int x1,int pos)
{
    int ud;
    ud=rand()%10;
    if(ud%3==0)
    {
        rectangle(x1,460,x1+10,520);
        setfillstyle(SOLID_FILL,8);
        floodfill(x1+5,510,WHITE);
        qy[pos]=460;
    }
    else
    {
        rectangle(x1,500,x1+10,560);
        setfillstyle(SOLID_FILL,8);
        floodfill(x1+5,510,WHITE);
        qy[pos]=500;
    }
    qx[pos]=x1;

}
void upside()
{


    int i;
    setcolor(GREEN);
    rectangle(-10,-10,1500,800);
    line(-10,230,1500,230);
    line(-10,250,1500,250);
    setfillstyle(XHATCH_FILL,GREEN);
    floodfill(10,240,GREEN);
//arc(55,260,30,150,60);

    line(1365,200,1365,230);

    for(i=55; i<1500; i+=120)
    {
        arc(i,260,30,150,60);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(i+10,220,GREEN);
    }
    floodfill(1360,220,GREEN);
    setfillstyle(SOLID_FILL,9);
    floodfill(10,10,GREEN);
    setcolor(BLUE);
    rectangle(1,1,1360,60);
    line(500,1,500,60);
    line(680,1,680,60);
    line(1180,1,1180,60);
    settextstyle(6,0,5);
    setbkcolor(9);
    outtextxy(200,5,"SCORE:");
    outtextxy(730,5,"HIGHSCORE:");
}
void downside()
{
    setcolor(WHITE);
    line(-10,600,1500,600);
    line(-10,562,1500,562);

    setfillstyle(XHATCH_FILL,GREEN);
    floodfill(10,570,WHITE);
}
int main()
{
    int gm=DETECT,gd;
    initgraph(&gm,&gd,"C:\\TC\\BGI");
    screen1();
    while(1)    //play again loop
    {
        srand ( time(NULL) );
        cleardevice();
        //screen1();
        score=0,ch=0,gameover=0;
        FILE *fp;
        fp=fopen("best.txt","r");
        if(fp==NULL)
        {
            fp=fopen("best.txt","w");
            fprintf(fp,"0");
            fclose(fp);
            highscore=0;
        }
        else
        {
            fscanf(fp,"%d",&highscore);
            fclose(fp);
        }
        sprintf(hs,"%d",highscore);

        int p[10];
        int c=500,i=1,j,cc;
        upside();
        setfillstyle(SOLID_FILL,6);
        floodfill(10,350,GREEN);
        downside();
        setfillstyle(SOLID_FILL,8);
        floodfill(10,680,WHITE);

        int x=50,y=535,r=25;
        for(i=1; i<=5; i++)
        {
            setcolor(WHITE);
            c=c+rand()%200+200;
            p[i]=c;
            piller(p[i],i);
        }
        circle(x,y,r);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(x,y,WHITE);

        while(1)
        {

            setcolor(6);
            score++;
            for(i=1; i<=5; i++)
            {
                if(qy[i]==460)
                {
                    rectangle(qx[i],460,qx[i]+10,520);
                    setfillstyle(SOLID_FILL,8);
                    floodfill(qx[i]+5,510,6);
                }
                else
                {
                    rectangle(qx[i],500,qx[i]+10,560);
                    setfillstyle(SOLID_FILL,8);
                    floodfill(qx[i]+5,510,6);
                }
                //qx[i]=qx[i]-5;
            }
            setcolor(WHITE);
            for(i=1; i<=5; i++)
            {
                if(qy[i]==460)
                {
                    rectangle(qx[i],460,qx[i]+10,520);
                    setfillstyle(SOLID_FILL,8);
                    floodfill(qx[i]+5,510,WHITE);
                }
                else
                {
                    rectangle(qx[i],500,qx[i]+10,560);
                    setfillstyle(SOLID_FILL,8);
                    floodfill(qx[i]+5,510,WHITE);
                }

            }


            circle(x,y,r);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y,WHITE);





            if(score<3000)
            {
                level=1;
                delay(30);
            }
            else if(score<5000)
            {
                level=2;
                delay(25);
            }
            else if(score<7000)
            {
                level=3;
                delay(20);
            }
            else if(score<10000)
            {
                level=1;
                delay(15);
            }
            else
            {
                level=5;
                delay(10);
            }
            // delay(10);//delay for all(speed)
            setcolor(6);
            for(i=1; i<=5; i++)
            {
                if(qy[i]==460)
                {
                    rectangle(qx[i],460,qx[i]+10,520);
                    setfillstyle(SOLID_FILL,6);
                    floodfill(qx[i]+5,510,6);
                }
                else
                {
                    rectangle(qx[i],500,qx[i]+10,560);
                    setfillstyle(SOLID_FILL,6);
                    floodfill(qx[i]+5,510,6);
                }
                qx[i]=qx[i]-5;
            }
            //
            if(qx[1]<=-10)
            {

                qx[1]=qx[5]+rand()%200+200;
                c=rand()%2;
                if(c==0)
                    qy[1]=460;
                else
                    qy[1]=500;
            }
            if(qx[2]<=-10)
            {

                qx[2]=qx[1]+rand()%200+200;
                if(c==0)
                    qy[2]=460;
                else
                    qy[2]=500;
            }
            if(qx[3]<=-10)
            {

                qx[3]=qx[2]+rand()%200+200;
                if(c==0)
                    qy[3]=460;
                else
                    qy[3]=500;
            }
            if(qx[4]<=-10)
            {

                qx[4]=qx[3]+rand()%200+200;
                if(c==0)
                    qy[4]=460;
                else
                    qy[4]=500;
            }
            if(qx[5]<=-10)
            {

                qx[5]=qx[4]+rand()%200+200;
                if(c==0)
                    qy[5]=460;
                else
                    qy[5]=500;
            }
            //
            if(qy[1]==qy[2]==qy[3]==460)
                qy[4]=500;
            else if(qy[2]==qy[3]==qy[4]==460)
                qy[5]=500;
            else if(qy[3]==qy[4]==qy[5]==460)
                qy[1]=500;
            else if(qy[3]==qy[4]==qy[1]==460)
                qy[2]=500;
            else
            {
                qy[3]=500;
            }

            //
            if(ch==0)
            {
                if(kbhit())
                {
                    ch=getch();
                    if(ch==72)
                    {
                        // outtext("yes");up
                        cc=1;
                    }
                    else if(ch==80)
                    {
                        cc=1;
                        setcolor(6);
                        circle(x,y,r);
                        setfillstyle(SOLID_FILL,6);
                        floodfill(x,y,6);
                    }
                    else
                    {
                        ch=0;
                    }
                }
            }
            if(ch==72)
            {
                if(cc<=20&& y>=450)
                {
                    setcolor(6);

                    circle(x,y,r);
                    setfillstyle(SOLID_FILL,6);
                    floodfill(x,y,6);
                    y=y-5;
                    if(y==450)
                        y=y+5;

                }
                else if(cc<=40 && y<=535)
                {
                    setcolor(6);
                    circle(x,y,r);
                    setfillstyle(SOLID_FILL,6);
                    floodfill(x,y,6);
                    y=y+5;
                }
                else
                    ch=0;
                cc++;


            }
            if(ch==80)
            {

                if(cc<=30)
                {
                    y=550,r=10;
                    setcolor(WHITE);
                    circle(x,y,r);
                    setfillstyle(SOLID_FILL,WHITE);
                    floodfill(x,y,WHITE);
                }
                else
                {
                    setcolor(6);
                    circle(x,y,r);
                    setfillstyle(SOLID_FILL,6);
                    floodfill(x,y,6);
                    setcolor(WHITE);
                    y=535,r=25;
                    circle(x,y,r);
                    setfillstyle(SOLID_FILL,6);
                    floodfill(x,y,6);
                    ch=0;
                }
                cc++;
            }
            for(i=1; i<=5; i++)
            {
                if(y>=485&&qy[i]==500)
                {
                    if(qx[i]>=25&&qx[i]<=70)
                    {
                        // setcolor(WHITE);
                        // circle(x,y,r);
                        // delay(1000);
                        while(r!=0)
                        {
                            setcolor(WHITE);
                            rectangle(qx[i],500,qx[i]+10,560);
                            circle(x,y,r);
                            setfillstyle(SOLID_FILL,WHITE);
                            floodfill(x,y,WHITE);
                            delay(50);
                            setcolor(6);
                            circle(x,y,r);
                            setfillstyle(SOLID_FILL,6);
                            floodfill(x,y,6);
                            r--;

                        }
                        cleardevice();
                        gameover=1;
                    }
                }
                if(qy[i]==460&&r==25&&qx[i]>=25&&qx[i]<=70)
                {
                    while(r!=0)
                    {
                        setcolor(WHITE);
                        rectangle(qx[i],460,qx[i]+10,520);

                        circle(x,y,r);
                        setfillstyle(SOLID_FILL,WHITE);
                        floodfill(x,y,WHITE);
                        delay(50);
                        setcolor(6);
                        circle(x,y,r);
                        setfillstyle(SOLID_FILL,6);
                        floodfill(x,y,6);
                        r--;

                    }
                    cleardevice();
                    gameover=1;
                }
            }

            /* if(y>=475){
             if(qx[1]>=25&&qx[1]<=75){
                  circle(x,y,r);
                     delay(1000);
             }
             }*/
            for(i=0; i<=5; i++)
            {
                if(qx[i]>0&&qx[i]<=5)
                {
                    score+=100;
                }
            }
            setcolor(WHITE);
            settextstyle(6,0,4);
            sprintf(sc,"%d",score);
            outtextxy(530,10,sc);
            if(score>=highscore)
            {
                highscore=score;
                h=1;
            }
            sprintf(hs,"%d",highscore);
            outtextxy(1200,10,hs);
            settextstyle(6,0,5);
            sprintf(lev,"%d",level);
            outtextxy(550,120,"LEVEL:");
            outtextxy(780,120,lev);
            if(gameover==1)
                break;
        }
        cleardevice();
        if(h==1)
        {
            //new highscore
            fp=fopen("best.txt","w");
            fprintf(fp,"%d",highscore--);
            fclose(fp);

        }
        score--;

        c=screengameover(score,highscore);
        if(c==0)
            break;


    }
    //getch();
    //getch();
    closegraph();
    return 0;
}
