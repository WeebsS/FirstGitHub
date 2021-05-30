#include <iostream>
#include <conio.h>
#define MaxS 10
using namespace std;

struct stack
{
  char Isi[MaxS];
  unsigned int Top;
};
void INITS (stack &S)
{
  S.Top = 0;
}
void PUSH(stack &S, char Data)
{
  if (S.Top < MaxS)
  {
    S.Top++;
    S.Isi[S.Top] = Data;
  }
  else
    cout<<"stack Penuh ......";
}
void CETAK(stack S)
{
  int i;
  cout<<endl<<"Isi stack	: ";
  if (S.Top != 0)
  {
    for(i=1;i<=S.Top;i++)
    {
      cout<<S.Isi[i];
    }
  }
  else
    cout<<"stack Kosong ....";
}
void POP(stack &S, char &Hsl)
{
  if (S.Top != 0)
  {
    Hsl = S.Isi[S.Top];
    S.Top--;
  }
  else
    cout<<"stack Kosong ....";
}



main()
{
  char huruf;
  stack S;
    INITS(S);
    cout<<"Masukkan Karakter	:";
    cin>>huruf;
    PUSH(S,huruf);
    cout<<"Masukkan Karakter	:";
    cin>>huruf;
    PUSH(S,huruf);
    cout<<"Masukkan Karakter	:";
    cin>>huruf;
    PUSH(S,huruf);
    CETAK(S);
    POP(S,huruf);
    cout<<endl<<"Yang Dihapus ...."<<huruf;
    CETAK(S);
    cout<<endl<<"Masukkan Karakter	:";
    cin>>huruf;
    PUSH(S,huruf);
    cout<<"Masukkan Karakter	:";
    cin>>huruf;
    PUSH(S,huruf);
    cout<<"Masukkan Karakter	:";
    cin>>huruf;
    PUSH(S,huruf);
    CETAK(S);
    POP(S,huruf);
    cout<<endl<<"Yang Dihapus .... "<<huruf;
    CETAK(S);
  getchar();
}
