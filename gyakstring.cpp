#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <ctime>
using namespace std;

int my_string(const string s){
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        n++;
    }
    return n;
}

int is_palindrome(const string s){
    int hossz = s.length();
    int szamlalo = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == s[hossz-1-i]){
            szamlalo++;
        }
    }
   if (hossz == szamlalo)
   return 1;
   else
   return 0;
   
}

int find_char(const string s, char c){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == c)
        return i;
    }
    return -1;
}

int find_char2(const string s, char c){
    int nr = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == c)
        nr = i;
    }
   
   if(nr != -1 && nr !=0)
   return nr;
   else
   return -1;
}

int contains_char(const string s, char c){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == c){
            return 1;
        }
    }
    return 0;
    
}

int char_count (const string s, char c){
    int nr = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == c)
        nr++;
    }
    return nr;

}

bool elsob(const string s){
    int hossz = s.length();
    if (s[0]==s[hossz-1])
    return true;
    else
    return false;
    
}

int match_ends(int n, string words[]){
    int charszam = 0;
    int szoszam = 0;
    int egyezike = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <words[i].length(); j++){
            charszam++;
        }
        if (charszam >= 2 && elsob(words[i]) == 1)
        szoszam++;
        charszam = 0;

    }
    return szoszam;
}

bool erosjelszo(const string s){
    int kisb = 0;
    int szamj = 0;
    int nagyb = 0;
    int hossz= s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i])){
        nagyb++;
        }
        else if (islower(s[i]))
        {
            kisb++;
        }
        else if (isdigit(s[i]))
        {
            szamj++;
        }
    }
    if (hossz >= 8 && nagyb != 0 && kisb != 0 && szamj != 0)
    return true;
    else
    return false;

}

int is_valid_identifier(const char* input){

    for (int i = 0; i <= 9; i++)
    {
        if (*input == i)
        {
            return 1;
        }
        
    }
    
    for (int i = 65 ; i < 91; i++)
    {
        if(*input == i)
        return 1;
        
    }
    for(int i = 97; i < 123; i++){
        if(*input == i)
        return 1;
    }
    if (*input == 95)
    return 1;

    return 0;

}
//szar
int random(int value){
    srand(time(NULL));
    int szam = rand() %126 + 21+value;
    return szam;
}

int hamming_distance(const char* s1, const char* s2){
    if (*s1 == *s2)
    return 0;
    else 
    return 1;
}

int main(){

    cout << my_string("rawr") << endl;
    cout << is_palindrome("fasz")<< endl;

    //karakter elofordulas

    cout << find_char("Abba", 'b') << endl;
    cout << find_char("Abba", 'a') << endl;
    cout << find_char("Abba", 'x') << endl;
    cout << find_char2("Abba", 'b') << endl;
    cout << find_char2("Abba", 'a') << endl;
    cout << find_char2("Abba", 'x') << endl;
    cout << find_char2("Aladar",'a') << endl;

    //
     cout << contains_char("Abba", 'x') << endl;
     cout << contains_char("Abba", 'b') << endl;

    //
    cout << char_count("Abba", 'b') << endl;
    cout << char_count("Abba", 'a') << endl;
    cout << char_count("Abba", 'x') << endl;
    
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    string szavak2[] = {"", "x", "xy", "xyx", "xx"}; 
    string szavak3[] = {"aaa", "be", "abc", "hello"};
    int szavak1_meret = 5;
    int hossz = sizeof(szavak1)/ sizeof(szavak1[1]);
    cout << match_ends(5,szavak1) << endl;
    cout << match_ends(5,szavak2) << endl;
    cout << match_ends(5,szavak3) << endl;  
    vector<char> charvec = {};
    char j ;
    for (int i = 97; i < 123; i++){
        j = char(i);
        charvec.push_back(j);
    }
    
    for (char i : charvec)
    {
        cout << i << " ";
    }
    cout << endl;

    //leghosszabb szo
    /*vector <string> szavak;
    int szoszam = 0;
    do{
        string szo;
        cout << "Add meg a szot: ";
        cin >> szo;
        if (szo == "*")
        break;
        else{
            szoszam++;
            szavak.push_back(szo);

        }

    }while(true);
    int elsoszo = my_string(szavak[0]);
    for(string i : szavak){
        cout << i << endl;
        if (elsoszo < my_string(i))
        elsoszo = my_string(i);
    }
    cout <<"A szavak szama = " << szoszam << endl;
    cout << "A leghosszab szo = " << elsoszo << endl;*/
    

    /*erosjelszo
    do
    {
        string szo;
        cout << "Add meg a szot: ";
        cin >> szo;
        if (szo == "*")
        break;
        else if (erosjelszo(szo) == true)
        {
            cout << "Eros jelszo" << endl;
        }
        else
        cout << "Gyengye jelszo" << endl;
        

    } while (true);    
    */
    
    /*c
    do
    {
        string s;
        cout <<"Adj meg egy szot: ";
        cin >> s;
        if (s == "*")
        break;
        for (int i = 0; i <= 9; i++)
        {
            if (s[0] == i)
            cout << "No" << endl;
            continue;
            
        }
        int hossz = s.length();
        int osszeg = 0;
        for (int i = 0; i < s.length(); i++)
        {
            osszeg += is_valid_identifier(&s[i]);
        }
        if (osszeg == hossz)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    } while (true);
    */

    //randomjelszo szar

    for (int i = 0; i < 12; i++)
    {
        cout << char(random(i));
    }
    cout << endl;

    //Hamming-távolság
    string s1;
    string s2;
    cout << "add meg az elso stringet:  ";
    cin >> s1;
    cout << "add meg a masodik stringet:  ";
    cin >> s2;
    int osszeg = 0;
    if (s1.length() != s2.length())
    cout << "A ketto string merete nem egyforma";
    else{
        for (int i = 0; i <s1.length(); i++)
        {
            osszeg += hamming_distance(&s1[i],&s2[i]);
        }
        cout << "A ketto string kozotti tav: " << osszeg;
        
    }

    
    
    
    
    
   


}