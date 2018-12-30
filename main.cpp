#include <iostream>
using namespace std;
int main ()
{
    int bil,negatif,positif;
    cout<<"*********PROGRAM BILANGAN POSITIF DAN NEGATIF********\n";
    cout<<"=====================================================\n";
    cout<<"\nMasukkan Bilangan : ";
    cin>>bil;
    if (bil<=0){
            negatif;
            cout<<"\nAngka "<<bil<<"Adalah Bilangan Negatif\n";
    }else if (bil>=0){
    positif;
    cout<<"\nAngka "<<bil<<"Adalah Bilangan Positif \n";
    }else{
    cout<<"\nAngka"<<bil<<"Adalah Bilangan Nol \n";
    }
    return 0;
}
