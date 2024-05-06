#include <iostream>
#include <ctime>
#include <random>
#include <vector>
using namespace std;

void randomnumgen(int *num){
    *num = rand() %89 + 10;

}

void foatlo(int tomb[][6],int size){
    for (int i = 0; i < size; i++)
    {
        cout << tomb[i][i] << " ";
    }
    
}

void mellekatlo(int tomb[][6], int size){
    for (int i = 0; i < size; i++)
    {
        cout << tomb[i][5-i] << " ";
    }
    
}
int fomellosszeg (int tomb[][6], int size){
    int osszeg = 0;
    for (int i = 0; i < size; i++)
    {
        osszeg += tomb[i][i];
    }
    for (int i = 0; i < size; i++)
    {
        osszeg += tomb[i][5-i];
    }
    return osszeg;
}
int fomellosszegnagyobb (int tomb[][6], int size){
    int A = 0;
    int B = 0;
    for (int i = 0; i < size; i++)
    {
        A += tomb[i][i];
    }
    for (int i = 0; i < size; i++)
    {
        B += tomb[i][5-i];
    }
    if(A > B)
    return 1;
    else if (B > A)
    return -1;
    else 
    return 0;
}

int main(){
    
    //foatlo elemeinek kiiratasa + random elemekkel feltoltese a matrixnak
    srand(time(nullptr));
    int tomb[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            randomnumgen(&tomb[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << tomb[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int sum1 = 0;
    foatlo(tomb,6);
    cout << endl;
    //mellekatlo
    mellekatlo(tomb,6);
    cout << endl;
    //mellekatlo es foatlo osszege
    cout << fomellosszeg(tomb,6) << endl;
    //Főátló és mellékátló. Vajon melyikben nagyobb az elemek összege?
    cout << fomellosszegnagyobb(tomb,6) << endl;



}