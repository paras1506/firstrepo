#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the total amount "<<endl;
    cin >> r;
    int note=100;
    
    switch(note){
        case 100 : cout<<"number of notes required of rupees 100 is"<<r/100<<endl;
                   r%=100;
        case 50  :cout<<"number of notes rewuired of rupees 50 is"<<r/50<<endl;
                   r%=50;
       case 20   :cout<<"number of notes rewuired of rupees 20 is"<<r/20<<endl;
                   r%=20;
      case   1   : cout<<"number of notes rewuired of rupees 1 is"<<r<<endl;
       break;
    
    }
}