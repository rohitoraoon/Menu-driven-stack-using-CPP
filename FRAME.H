#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void mainframe()
{
        //clrscr();
        //----------horizontal components---------------
        for(unsigned short int i=11;i<=69;i++)
        {
                gotoxy(i,4);cout<<"�";  //196
                gotoxy(i,6);cout<<"�";
                gotoxy(i,20);cout<<"�";
                gotoxy(i,23);cout<<"�";
        }
        gotoxy(39,5);cout<<"39,5";
        gotoxy(12,7);cout<<"12,7";
        gotoxy(12,21);cout<<"12,21";
        //---------vertical components-------------------
        for(i= 5;i<=22;i++)
        {
                gotoxy(10,i);cout<<"�";  //179
                gotoxy(70,i);cout<<"�";  //179
        }
        //----------------edges--------------------------
        gotoxy(10,4);cout<<"�";  //218
        gotoxy(70,4);cout<<"�";  //191
        gotoxy(10,6);cout<<"�";  //195
        gotoxy(70,6);cout<<"�";  //180
        gotoxy(10,20);cout<<"�";
        gotoxy(70,20);cout<<"�";
        gotoxy(10,23);cout<<"�";  //192
        gotoxy(70,23);cout<<"�";  //217
        //getch();
}

void screen()
{
        //clrscr();
        //------------horizontal components---------------
        for(unsigned short int i=11;i<=69;i++)
        {
                gotoxy(i,4);cout<<"�";  //196
                gotoxy(i,22);cout<<"�";
        }
        gotoxy(12,5);cout<<"12,5";
        //------------virtical components-----------------
        for(i=5;i<=21;i++)
        {
                gotoxy(10,i);cout<<"�";
                gotoxy(70,i);cout<<"�";
        }
        //-------------------edges------------------------
        gotoxy(10,4);cout<<"�";
        gotoxy(70,4);cout<<"�";
        gotoxy(10,22);cout<<"�";
        gotoxy(70,22);cout<<"�";
        //getch();

}

void scpart()
{
        for(unsigned short int i=5;i<=21;i++)
        {
                gotoxy(55,i);cout<<"�";
        }
        gotoxy(55,4);cout<<"�";   //194
        gotoxy(55,22);cout<<"�";  //193
        gotoxy(56,5);cout<<"56,5";
        gotoxy(56,21);cout<<"56,21";
}