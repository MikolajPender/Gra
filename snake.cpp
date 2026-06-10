
#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
using namespace std;
int szer= 30;
int wys= 15;
int x= 7;
int y= 16;
int owocx= 4;
int owocy= 17;
int wynik=0;
int scianax=1;
int scianay= 1;
int scianax2=2;
int scianay2= 2;

bool koniec = false;

void mapa(){
system("cls");
for(int i=0;i<wys;i++){
if(i>=1){
    cout<<endl;
}


    for(int j=0;j<szer;j++){
        if(i==0 || j==szer-1 || j==0 || i==wys-1)
            cout<<"#";
        else if(j==y && i==x)
            cout<<"%";
        else if(j==owocy && i==owocx)
            cout<<"O";
        else if(j==scianay && i==scianax)
            cout<<"#";
        else if(j==scianay2 && i==scianax2)
            cout<<"#";
        else
            cout<<" ";
    }


  }
cout<<endl<<"wynik"<<wynik;
}
char kierunek='w';
void input (){

 if(_kbhit())
    {
        kierunek = _getch();
    }
}

void zwrot (){
if(kierunek =='w') x--;
if(kierunek =='s') x++;
if(kierunek =='a') y--;
if(kierunek =='d') y++;
if(x==0 || x==14 || y==0 || y==29)
    koniec = true;

if(x==owocx && y==owocy) {
        wynik++;
        owocx= (rand() % 13)+1;
        owocy= (rand() % 28)+1;
        scianax= (rand() % 13)+1;
        scianay= (rand() % 28)+1;
        scianax2= (rand() % 13)+1;
        scianay2= (rand() % 28)+1;


}



if (scianax==x && scianay==y){
    koniec = true;
}
if (scianax2==x && scianay2==y){
    koniec = true;
}




}
int main(){
srand(time(0));
while(!koniec){
    system("cls");
    mapa();
    input();
    zwrot();
    Sleep(150);


}


}
