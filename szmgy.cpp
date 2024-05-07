#include <iostream>
#include <string>
#include <vector>
using namespace std;
int faktrek(int n)
{
    if (n == 1)
    return 1;
    return n * faktrek(n-1);
}

struct konyv
{
    string cim;
    int oldal;
    konyv(int Oldal, string Cim){
        cim = Cim;
        oldal = Oldal;
    }
};
ostream& operator << (ostream& COUT,konyv& kv) 
{
    COUT << kv.cim << " " << kv.oldal << endl;
    return COUT;
}
struct konyveim{
    vector<konyv> konyvek;
    void operator += (konyv& kv){
        konyvek.push_back(kv);
    }
};

ostream& operator << (ostream& COUT, konyveim& Konyveim){
    for (konyv kov : Konyveim.konyvek)
        COUT << kov << endl;    
    return COUT;
}
int* sekelymasolas(int* t, int size) {
	int* t2 = t; //t2 = &t[0]
	return t2;
}

int* melymasolat(int* t, int size) {
	int* t2 = new int[size];
	for (int i = 0; i<size; i++)
		t2[i] = *(t + i);
	return t2;
}

int main()
{

    konyveim Mybooks;
    konyv kv = konyv( 5, "stormlgiht");
    konyv kv2 = konyv(600, "fitz");
    konyv kv3 = konyv(69, "Megolom magam");
    Mybooks += kv;
    Mybooks += kv2;
    Mybooks += kv3;
    cout << Mybooks;
    
    int tomb[5] = {5,13,43,3,5};
    int* masolas = sekelymasolas(tomb,5);
    for (int i = 0; i < 5; i++)
    {
        cout << masolas[i] << " ";
    }
    cout<< endl;
    int* melymasolatt = melymasolat(tomb,5);
    for (int i = 0; i < 5; i++)
    {
        cout << melymasolatt[i] << " ";
    }
    cout << endl;
    tomb[0] = 0;
     for (int i = 0; i < 5; i++)
    {
        cout << masolas[i] << " ";
    }
    cout<< endl;
    
    

}