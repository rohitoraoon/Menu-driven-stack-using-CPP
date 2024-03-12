int STACK[100]={31,22,43,46,56,69};
int TOP=5;
void hpush(int n)
{
        STACK[++TOP]=n;
}
void hpop()
{
        TOP--;
}
void display();