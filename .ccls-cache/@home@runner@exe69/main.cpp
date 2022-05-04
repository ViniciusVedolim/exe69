#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
  system("clear");
  srand(time(NULL));
  int i, x, n1, maior=0, menor=1000, soma=0;
  float media=0;
  cout<<"Digite um número para ser a quantidade:\n";
  cin>>x;
  for(i=1;i<=x;i++)
    {
      n1 = rand()%1000;
      cout<<i<<"º número="<<n1<<"\n";
      if (n1>maior)
      {
        maior=n1;
        cout<<"Maior="<<maior<<"\n";
      }
      if (n1<menor)
      {
        menor=n1;
        cout<<"Menor="<<menor<<"\n";
      }
      soma = soma+n1;
    }
  media = soma/x;
  cout<<"menor = " <<menor<<", maior = "<<maior<<" e "<<soma;
}