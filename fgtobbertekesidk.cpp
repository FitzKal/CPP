#include<iostream>
#include <cstdlib>
#include <ctime>
#include<cmath>
using namespace std;
void randomnumgen(int arr[], int size){
    srand(time(nullptr));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() %90 + 10;
    }
    
}

void maxminav(int* max, int* min, float* avrg, int arr[],int size){
    *min = arr[0];
    *max = 0;
    for (int i = 0; i < size; i++)
    {
        *avrg += arr[i];
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }
    *avrg = *avrg / size;

}
struct igen
{
    int min ;
    int max ;
    float avrg; 
};

typedef struct 
{
    int x;
    int y;
}pont;

double tavolsag(pont p1, pont p2){
    double tav;
    tav = sqrt((p1.x-p2.x)*(p1.x-p2.x)-(p1.y-p2.y)*(p1.y-p2.y));
    return tav;
}



int main(){    
//randomszamfeltoltestombsfasz
const int size = 10;
int tomb[size];
randomnumgen(tomb,size);
int min,max;
float avrg;
struct igen m1;
for (int i = 0; i < size; i++)
{
    cout << tomb[i] << " ";
}
cout << endl;
maxminav(&m1.max,&m1.min,&m1.avrg,tomb,size);
//cout << max << " " << min << " " << avrg << endl;
cout << m1.max << " " << m1.min << " " << m1.avrg << endl;

//ponttav
pont a = {1, 2};
pont b = {6, 5};
cout << tavolsag(a,b);



}