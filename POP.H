#include<iostream.h>
#include<conio.h>
#include"push.h"
void pop_display();
void pop()
{
        char ch='y';
        while(ch=='y' || ch=='Y')
        {
                clrscr();
                screen();
                scpart();
                gotoxy(56,5);cout<<"    STACK";
                gotoxy(56,21);cout<<"     ";
                gotoxy(12,5);cout<<"    ";
                gotoxy(15,6);cout<<"B. POP OPERATION";
                if(TOP==-1)
                {
                        gotoxy(25,13);cout<<"STACK UNDERFLOW!!!";
                        gotoxy(25,20);cout<<"Press any key...";
                        gotoxy(42,20);getch();
                        return;
                }
                else
                {
                        gotoxy(18,8);cout<<"Item deleted: "<<STACK[TOP];
                        hpop();
                        pop_display();
                        gotoxy(16,20);cout<<"Do you want to delete again(y/n): ";
                        gotoxy(50,20);cin>>ch;
                }
        }
        return;
}
void pop_display()
{
        for(int i= 0;i<=TOP;i++)
        {
                gotoxy(62,20-i);cout<<STACK[i];
        }
        gotoxy(57,21-i);cout<<"-->";
}