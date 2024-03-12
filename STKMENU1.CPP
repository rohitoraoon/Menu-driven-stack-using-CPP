#include <iostream.h>
#include <conio.h>
#include "display.h"
void main()
{
        unsigned short int ch=0;
        lable:
        clrscr();
        mainframe();
        gotoxy(39,5);cout<<"MENU";
        gotoxy(12,7);cout<<"    ";
        gotoxy(22,10);cout<<"A. Enter 1 to PUSH item in STACK";
        gotoxy(22,12);cout<<"B. Enter 2 to POP item from STACK";
        gotoxy(22,14);cout<<"C. Enter 3 to DISPLAY items of STACK";
        gotoxy(22,16);cout<<"D. Enter 4 to EXIT ";
        gotoxy(12,21);cout<<"    Enter your choice  ";
        gotoxy(34,21);cin>>ch;
        if(cin.fail())
        {
                cin.clear();
                cin.sync();
                gotoxy(50,21);cout<<"WRONG CHOICE!!!";
                gotoxy(33,24);cout<<"Press any key...";
        }
        switch(ch)
        {
                case 1:
                        push(10);
                        goto lable;

                case 2:
                        pop();
                        goto lable;

                case 3:
                        display();
                        goto lable;

                case 4:
                        return;

                default:
                        gotoxy(50,21);cout<<"WRONG CHOICE!!!";
                        gotoxy(33,24);cout<<"Press any key...";
                        cin.sync();
                        getch();
                        goto lable;
        }

}