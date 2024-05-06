#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int osztokszama(int n){
    int osztokszama = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        osztokszama ++;
    }
    return osztokszama;
}

void kettoparameteres(int a, int b){
    int osztokszama = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << " ";
        }
        
    }
    
}

int maxtomb(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}

int maxtombkind(int arr[], int size){
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
        
    }
    return  index;
}

int mintomb(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    return min;
}
int gyakorisag(int arr[], int size){
    map<int,int> m;
    int gyakori = 0;
    int elem = 0;
    for (int i = 0; i < size; i++)
    {
        m[arr[i]] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        m[arr[i]] ++;
    }
    for(auto a : m){
        if (a.second  > gyakori){
            gyakori = a.second;
            elem = a.first;
        }

    }
    return elem;
}
void sort(int arr[], int honnan){
    if (honnan == 0)
    honnan += 1;
    for (int i = honnan-1; i < 10-1; i++)
    {
        for (int j = honnan-1; j < 10-1; j++)
        {
            int temp;
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
        
    }
}

void reversesort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            int temp;
            if ( arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}
    
void refcser(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
struct labdak
{
    string szin;
    int meret;
};


int main(){
//Írjon függvényt, amely paramétere egy integer, és megszámolja, hogy az adott számot hány nála kisebb számmal tudjuk osztani úgy, hogy 0 maradék képződjön
cout << osztokszama(15) << endl;
//Írjon függvényt, amelynek 2 integer paramétere van, és kiírja 100-ig azokat a számokat, amelyek oszthatóak a megadott 2 számmal.
kettoparameteres(5,10);
cout << endl;
//Írjon függvényt, amelynek egy 10 méretű integer tömb a paramétere, és visszaadja a maximumot.
int tomb[10] = {1,2,55,7,8,4,2,2,87,-5};
cout << maxtomb(tomb,10) << endl;
//Írjon függvényt, amelynek egy 10 méretű integer tömb a paramétere, és visszaadja a maximum indexét.
cout << maxtombkind(tomb,10) << endl;
//Írjon függvényt, amelynek egy 10 méretű integer tömb a paramétere, és visszaadja a minimumot.
cout << mintomb(tomb,10) << endl;
//Írjon függvényt, amelynek egy 10 méretű integer tömb a paramétere, és visszaadja a leggyakoribb elemet.
cout << gyakorisag(tomb,10) << endl;
//Írjon függvényt, amelynek egy 10 méretű integer tömb és egy egész szám a paramétere, majd rendezi a második paramétertől a tömböt. Pl 5, akkor a tömb 5.elemétől rendezi.
sort(tomb,0);
for (int i = 0; i < 10; i++)
{
    cout << tomb[i] << " ";
}
cout << endl;
//Írjon függvényt, amelynek egy 10 méretű integer tömb a paramétere, és csökkenő sorrendben rendezi azt.
reversesort(tomb,10);
for (int i = 0; i < 10; i++)
{
    cout << tomb[i] << " ";
}
cout << endl;

//Írjon függvényt, amelyben referencia szerinti paraméterátadást használ, és csökkenti a paraméter értékét. void dec(int& i){ i - -  ;}
int a = 5;
int b = 4;
refcser(&a, &b);
cout << a << " " << b << endl;

//Kérjünk be 5 számot a felhasználótól és írjuk ki az átlag felettieket.
/*vector <int> bekeres;
int osszeg = 0;
for (int i = 0; i < 5; i++)
{
    int a;
    cout << "Adj meg egy szamot" << endl;
    cin >> a;
    bekeres.push_back(a);
    osszeg += a;
}
float atlag = osszeg / bekeres.size();
cout << atlag << endl;
for (int i : bekeres)
{
    if (i > atlag)
    cout << i << " ";
}*/
   

//Hozzon létre egy osztályt vagy struktúrát labda néven, amelynek mérete és színe van. Kérjen be a felhasználótól 5 labdát, majd tárolja tetszőleges adatszerkezetben.
//Hozzon létre 2 tömböt (más adatszerk. is megfelel), egyikbe a piros labdák, másikba a nem piros labdák kerüljenek.

/*vector <labdak> piros;
vector <labdak> nempiros;
labdak temp;
for (int i = 0; i < 5; i++)
{
    cout << "Adj meg a labdat" << endl;
    cin >> temp.meret >> temp.szin;
    if (temp.szin == "piros")
    piros.push_back(temp);
    else
    nempiros.push_back(temp);
}

cout << "Pirosak:" << endl;
for(labdak l : piros) {
    cout << l.szin << " " << l.meret << endl;
}
cout << "Nem Pirosak: " << endl;
for(labdak l : nempiros) {
    cout << l.szin << " " << l.meret << endl;
}*/
///Mely 5 szám volt legritkábban?
//A számok gyakoriságát írjuk ki a gyakorisag.txt-be
ifstream in("zhgyakk.txt");
ofstream out("kirawr.txt");
map <int,int> lottos;
int t;
vector <int> lotto;
while (in >> t)
{
    lotto.push_back(t);
}

for (int t : lotto){
    lottos[t] = 0;
}

for (int t : lotto){
    lottos[t] ++;
}

for(auto a : lottos){
    out << a.first << " " << a.second << endl;
}


in.close();
out.close();
}