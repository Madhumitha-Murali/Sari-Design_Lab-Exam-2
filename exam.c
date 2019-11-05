#include<stdio.h>
#include<math.h>
#include<graphics.h>

void design(int x,int y)
{

       setcolor(RED);
       circle(x,y,5);
       floodfill(x,y,RED);

       setcolor(GREEN);
       circle(x+10,y+10,5);
       floodfill(x+10,y+10,GREEN);

       circle(x-10,y-10,5);
       floodfill(x-10,y-10,GREEN);

       circle(x-10,y+10,5);
       floodfill(x-10,y+10,GREEN);

       circle(x+10,y-10,5);
       floodfill(x+10,y-10,GREEN);

       setcolor(LIGHTBLUE);
       circle(x,y-20,7);
       floodfill(x,y-20,LIGHTBLUE);

       circle(x,y+20,7);
       floodfill(x,y+20,LIGHTBLUE);

       circle(x-20,y,7);
       floodfill(x-20,y,LIGHTBLUE);

       circle(x+20,y,7);
       floodfill(x+20,y,LIGHTBLUE);

}

int main()
    
{
       int gd = DETECT, gm;
     
       initgraph(&gd, &gm, NULL);
       setcolor(YELLOW);
       rectangle(50,50,550,350);
       floodfill(100,100,BLACK);

       setcolor(LIGHTCYAN);
       rectangle(70,50,90,350);
       floodfill(71,51,LIGHTRED);

      setcolor(LIGHTRED);
      rectangle(90,50,110,350);
      floodfill(100,100,LIGHTRED);

      setcolor(BROWN);
      rectangle(110,50,130,350);
      floodfill(111,100,BROWN);


       setcolor(LIGHTCYAN);
       rectangle(130,50,150,350);
       floodfill(131,51,LIGHTRED);

      setcolor(LIGHTRED);
      rectangle(150,50,170,350);
      floodfill(151,100,LIGHTRED);

      setcolor(BROWN);
      rectangle(170,50,550,350);
      floodfill(171,100,BROWN);


      int x,y;

      x=200;
      y=200;
	     
       design(x,y);

     x=400;
     y=200;

      design(x,y);


     x=300;
     y=200;

      design(x,y);

     x=100;
     y=200;

      design(x,y);

     x=500;
     y=200;

      design(x,y);

     x=500;
     y=100;

      design(x,y);

     x=500;
     y=300;

      design(x,y);

     x=400;
     y=300;

      design(x,y);

     x=400;
     y=100;

      design(x,y);

     x=300;
     y=100;

      design(x,y);

     x=300;
     y=300;

      design(x,y);

     x=200;
     y=300;

      design(x,y);

     x=200;
     y=100;

      design(x,y);

     x=100;
     y=100;

      design(x,y);

     x=100;
     y=300;

      design(x,y);

  setcolor(YELLOW);

   for(int l=50;l<=350;l=l+10)

    line(50,l,30,l);

   for(int l=50;l<=350;l=l+10)

    line(550,l,570,l);

    rectangle(50,50,70,350);
    floodfill(51,51,YELLOW);
    
    rectangle(530,50,550,350);
    floodfill(531,51,YELLOW);



      
      
       //getch();
       delay(1000);
       getch();
       closegraph();
       
       return 0;
}
