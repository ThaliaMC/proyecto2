#include<iostream>
#include<conio.h>

using namespace std;

int main(){
   int m,n,num[10][10];

   cout<<"Digite el numero de filas :";
   cin>>m;
   cout<<"Digite el numero de columnas :";
   cin>>n;

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<"Digite un numero :";
        cin>>num[i][j];
    }
   }

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<num[i][j];
    }
    cout<<"\n";
   }




    getch();
    return 0;
}