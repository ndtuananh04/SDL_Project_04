#include <iostream>
#include<cstdlib>

using namespace std;

int generaterandomnumber();
int getplayernumber(){
    int guess;
    cout<<"Hay nhap lua chon ";
    cin>>guess;
    return guess;
}
void printanswer(int guess1, int secretnumber1){
    if(guess1<secretnumber1){
        cout<<"So lon hon co! ";
    }
    if(guess1>secretnumber1){
        cout<<"So be hon co! ";
    }
    if(guess1==secretnumber1){
        cout<<"Dung roi, chuc mung!";
    }
}
int main()
{
    int secretnumber = generaterandomnumber();
    int guess;
    do{
        guess=getplayernumber();
        printanswer(guess, secretnumber);
    } while(guess!=secretnumber);
    return 0;
}
int generaterandomnumber(){
    return rand() % 100 + 1;
}
