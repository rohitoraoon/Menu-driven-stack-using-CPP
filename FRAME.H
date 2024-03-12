#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void mainframe()
{
        //clrscr();
        //----------horizontal components---------------
        for(unsigned short int i=11;i<=69;i++)
        {
                gotoxy(i,4);cout<<"Ä";  //196
                gotoxy(i,6);cout<<"Ä";
                gotoxy(i,20);cout<<"Ä";
                gotoxy(i,23);cout<<"Ä";
        }
        gotoxy(39,5);cout<<"39,5";
        gotoxy(12,7);cout<<"12,7";
        gotoxy(12,21);cout<<"12,21";
        //---------vertical components-------------------
        for(i= 5;i<=22;i++)
        {
                gotoxy(10,i);cout<<"³";  //179
                gotoxy(70,i);cout<<"³";  //179
        }
        //----------------edges--------------------------
        gotoxy(10,4);cout<<"Ú";  //218
        gotoxy(70,4);cout<<"¿";  //191
        gotoxy(10,6);cout<<"Ã";  //195
        gotoxy(70,6);cout<<"´";  //180
        gotoxy(10,20);cout<<"Ã";
        gotoxy(70,20);cout<<"´";
        gotoxy(10,23);cout<<"À";  //192
        gotoxy(70,23);cout<<"Ù";  //217
        //getch();
}

void screen()
{
        //clrscr();
        //------------horizontal components---------------
        for(unsigned short int i=11;i<=69;i++)
        {
                gotoxy(i,4);cout<<"Ä";  //196
                gotoxy(i,22);cout<<"Ä";
        }
        gotoxy(12,5);cout<<"12,5";
        //------------virtical components-----------------
        for(i=5;i<=21;i++)
        {
                gotoxy(10,i);cout<<"³";
                gotoxy(70,i);cout<<"³";
        }
        //-------------------edges------------------------
        gotoxy(10,4);cout<<"Ú";
        gotoxy(70,4);cout<<"¿";
        gotoxy(10,22);cout<<"À";
        gotoxy(70,22);cout<<"Ù";
        //getch();

}

void scpart()
{
        for(unsigned short int i=5;i<=21;i++)
        {
                gotoxy(55,i);cout<<"³";
        }
        gotoxy(55,4);cout<<"Â";   //194
        gotoxy(55,22);cout<<"Á";  //193
        gotoxy(56,5);cout<<"56,5";
        gotoxy(56,21);cout<<"56,21";
}