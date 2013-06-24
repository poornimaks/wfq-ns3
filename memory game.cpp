/*
this is a game to test your memory skills.A sequence of letters is displayed
and the user is asked to input the same.The user's memory is graded
according to the level upto which he/she progresses
*/
#include<iostream.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
int pt=0;
void draw(void) //to draw a rectangular picture
{
settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
outtextxy(0,400,"        PROJECT WORK");
rectangle(600,10,400,400);
 settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
 outtextxy(420,10,"\"TO REMEMBER\"");
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
 line(600,60,400,60);
 outtextxy(400,60,"01)byheart chemistry");
 line(600,100,400,100);
 outtextxy(400,90,"02)revise portions");
 line(600,140,400,140);
 outtextxy(400,130,"03)...");
 line(600,180,400,180);
 outtextxy(400,170,"04)");
 line(600,220,400,220);
 outtextxy(400,210,"05)");
 line(600,260,400,260);
 outtextxy(400,250,"06)");
 line(600,300,400,300);
 outtextxy(400,290,"07)");
 line(600,340,400,340);
 outtextxy(400,330,"08)");
}


void td() //time delay loop
{
int i;
for(i=0;i<30000;i++)
 {
  for(int j=0;j<30000;j++);
 }
}
int f1()
{
clrscr();
setbkcolor(4);
cleardevice();
draw();
int flag=44;
char m[20];
char a[20][4]={"x4i","ty3","qtm","j6b","k9c","t0k","p4z","v5y","l8t","1p5"};
randomize();    //to select anyone string randomly
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 1");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nNow try to remember these letters");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++) //to display letters one by one
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 1");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0) //to compare the input with the displayed string
flag=1; //if input is correct
else if(strlen(a[r])==0)
flag=101;//if nothing if accepted
else
flag=-1; //if input is incorrect
return flag;
}
int f2()
{
clrscr();
cleardevice();
setbkcolor(2);
int flag=44;
draw();
char m[20];
char a[20][20]={"2x4i","z9y3","7qtz","9qw4","q1y8","t9uz","px4z","ev5y","ml8t","1p5n"};
randomize();
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 2");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nremember these letters once more");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 2");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)
flag=2;
else
flag=-2;
return flag;
}
int f3()
{
clrscr();
cleardevice();
int flag=44;
setbkcolor(8);
draw();
char m[20];
char a[20][20]={"2xg4i","z9uy3","7qwm9","j9zx6","xm6cz","vr2lk","ql4sz","ezv5y","vl8d6","1p5yn"};
randomize();
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 3");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nNow try to remember these letters again");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 3");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)
 flag=3;
else
 flag=-3;
return flag;
}
int f4()
{
clrscr();
cleardevice();
setbkcolor(0);
int flag=44;
char m[20];
char a[20][20]={"2x4fgi","t9y3ry","7qtgfm","j3zph6","k6devc","exlo2k","zapx4z","ev5qy","5lxt8","13up5n"};
randomize();
int r=random(10)+1;
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 4");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nyou can do it again!!!");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 4");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)

{
flag=4;
}
else
flag=-4;
return flag;
}

int f5()
{
clrscr();
cleardevice();
setbkcolor(6);
int flag=44;
char m[20];
char a[20][20]={"2x4fg5i","ty9z3rx","7jqzgfx","j3nxph6","k6ds4rz","tv4o2bk","x7pal4z","evt5qyp","mz5xt8v","13up5nb"};
randomize();
draw();
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 5");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nCOME ON AGAIN!!!!!!!");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 5");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)

{
 flag=5;
}
else
 flag=-5;
return flag;
}
int f6()
{
clrscr();
cleardevice();
setbkcolor(9);
int flag=44;
char m[20];
char a[20][20]={"2x4fgspi","tla9y3ry","bn7qtgfm","j9bph6aq","k6txdecc","eq8tlo2k","l19apl4z","xeskv5qy","mliet8tl","13up5zpn"};
randomize();
draw();
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 6");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nNow it should be difficult");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 6");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)

{
 flag=6;
}
else
 flag=-6;
return flag;
}
int f7()
{
clrscr();
cleardevice();
setbkcolor(10);
draw();
int flag=44;
char m[20];
char a[20][20]={"2x4qwfegi","rtyt9y3ry","7uipqtgfm","j9bpasdh6","kfgh6decc","etljklo2k","lzxcapl4z","ev5vbnqy","mlkmlmt8t","13iuyup5n"};
randomize();
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 7");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nso far so good ");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 7");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)

{
 flag=7;
}
else
 flag=-7;
return flag;
}
int f8()
{
clrscr();
cleardevice();
int flag=44;
setbkcolor(3);
draw();
char m[20];
char a[20][20]={"2xqwer4fgi","trewq9y3ry","yuip7qtgfm","jpiuy9bph6","klkjh6decc","etlhjklo2k","lasdfapl4z","efghjv5qy","mmjnhlmt8t","134rfvup5n"};
randomize();
int r=random(10)+1;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 8");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100,"\nplease this is the last time!!!");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
for(int i=0;a[r][i]!='\0';i++)
{
 cout<<a[r][i];
 td();
 cout<<" ";
 td();
}
clrscr();
cleardevice();
draw();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"level 8");
line(190,60, 300, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
outtextxy(0,100," please type the letters you saw earlier");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t";
gets(m);
if(strcmpi(m,a[r])==0)

{
 flag=8;
}
else
 flag=-8;
return flag;
}

void main()
{
/* request auto detection */
int gdriver = DETECT, gmode, errorcode;

/* initialize graphics mode */
initgraph(&gdriver, &gmode, "");

/* read result of initialization */
errorcode = graphresult();

if (errorcode != grOk)  /* an error occurred */
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1);             /* return with error code */
}
setbkcolor(5);      //for background
rectangle(0, 0, getmaxx(), getmaxy());//to draw border
char ch;
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"Memory game");
setlinestyle(DOTTED_LINE,1, 1);
line(190,60, 450, 60);
settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
outtextxy(0,400,"        PROJECT WORK");
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"\nThis is an activity to test your";
cout<<"\n retention powers and to calculate your memory.";
cout<<"\nAll you have to do is remember the letters displayed and \ntype them correcrly.";
cout<<"\nPlease press \"enter\" to proceed";
cout<<".";
td();cout<<".";
td();cout<<".";
getch();  //to accept enter from the user
do
{
int pt=f1();
while(pt>=1)
 {
switch(pt) //to call the appropriate function
  {
case 1: pt=f2();
 break;
case 2:pt=f3();
 break;
case 3:pt=f4();
 break;
case 4:pt=f5();
 break;
case 5:pt=f6();
 break;
case 6:pt=f7();
 break;
case 7:pt=f8();
 break;
case -1:break;
default:break;
  }
 }
cleardevice();  //to clean up graphics
setbkcolor(1);
rectangle(0, 0, getmaxx(), getmaxy());
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"Memory game");
setlinestyle(DOTTED_LINE,1, 1);
line(190,60, 450, 60);
settextstyle(SCRIPT_FONT, HORIZ_DIR, 1);
if(pt==-1)      //if loop to display appropriate message
   {
    outtextxy(0,100,"Your memory is too poor and you have to  improve!!!");
 getch();
   }
else if(pt==-2)
   {
 outtextxy(0,100,"your memory is below average.But there is some scope for improvement");
 getch();
   }
else if(pt==-3)
   {
 outtextxy(0,100,"Your memory level is not satisfactory.So try out some retention excercises");
 getch();
   }
else if(pt==-4)
   {
 outtextxy(0,100,"Your memory  level  is  just average.But you can improve!!!");
 getch();
   }
else if(pt==-5)
   {
 outtextxy(0,100,"Your memory is average.Most of us cant remember more than this");
 getch();
   }
else if(pt==-6)
   {
 outtextxy(0,100,"You have a good memory.But you could have done better!!");
 getch();
   }
else if(pt==-7)
   {
 outtextxy(0,100,"You are good in this.EXTRAORDINARY !!!");
 getch();
   }
else if(pt==-8)
   {
 outtextxy(0,100,"You are outstanding and its impossible \nfor a normal person.GREAT JOB");
 getch();
   }
else
{
if(pt==-1)      //if loop to display appropriate message
   {
    outtextxy(0,100,"\n\tYour memory is too poor and \nyou have to  improve!!!");
 getch();
   }
else if(pt==-2)
   {
 outtextxy(0,100,"\nyour memory is below average.\nBut there is some scope for improvement");
 getch();
   }
else if(pt==-3)
   {
 outtextxy(0,100,"\nYour memory level is not satisfactory.\nSo try out some retention excercises");
 getch();
   }
else if(pt==-4)
   {
 outtextxy(0,100,"\nYour memory  level  is  just average.\nBut you can improve!!!");
 getch();
   }
else if(pt==-5)
   {
 outtextxy(0,100,"\nYour memory is average.\nMost of us cant remember more than this");
 getch();
   }
else if(pt==-6)
   {
 outtextxy(0,100,"\nYou have a good memory.\nBut you could have done better!!");
 getch();
   }
else if(pt==-7)
   {
 outtextxy(0,100,"\nYou are good in this.EXTRAORDINARY !!!");
 getch();
   }
else if(pt==-8)
   {
 outtextxy(0,100,"\nYou are outstanding and its \nimpossible for a normal person.GREAT JOB");
 getch();
   }

}
clrscr();
cleardevice();
settextstyle(SCRIPT_FONT, HORIZ_DIR, 5);
outtextxy(190,0,"Memory game");
setlinestyle(DOTTED_LINE,1, 1);
line(190,60, 450, 60);
setbkcolor(6);
outtextxy(0,100,"\nPLAY AGAIN??(Y/N):");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');
clrscr();
 cleardevice();
 setbkcolor(1);
 int midx=getmaxx()/2;
 int midy=getmaxy()/2;
 settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(midx,midy-30,"THANK YOU");
 outtextxy(midx,midy,"~~~~~~ ~~~");
 outtextxy(midx,midy+30,"PROJECT BY POORNIMA AND DIVYA.S");
 outtextxy(midx,midy+60,"~~~~~~~ ~~ ~~~~~~~~ ~~~ ~~~~~~~");
 getch();

closegraph();  //close graphics
}


