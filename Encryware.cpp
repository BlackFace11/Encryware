#include <iostream>
using namespace std;

//copyright 2023 2024 by glox studio and @Black face 11

int main()
{
    cout<<"secure your message \n\n\n";
    int i,k;
    char a[100];
    cout<<"Enter 1 for encryption \n";
    cout<<"Enter 2 for decryption \n";
    cin>> k;
    cout<<"please enter text : ";
    cin>>a;
    switch(k){
      case 1:
        for(i=0; (i<100 && a[i]!= '\0'); i++)
    a[i]+=2;
    cout<<"encrypted text : "<< a <<endl;
    break;
      case 2:
        for(i=0; (i<100 && a[i]!= '\0'); i++)
    a[i]-=2;
    cout<<"decrypted text : "<< a <<endl;
    break;
      default :
        cout<< "invalid input! choose 1 or 2 only.";
    }
    
}