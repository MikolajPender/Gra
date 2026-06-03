
#include <iostream>;
using namespace std;
int main()
{



  char t[11][21];
  for(int i=0;i<11;i++)
  {
        cout<<endl;
        if(i==0 || i==10){
        for(int j=0;j<21;j++)
        cout<<"#";}
        else{
            cout<<"#";
            for(int y=1;y<20;y++)
                cout<<" ";
            cout<<"#";}

  }




}
