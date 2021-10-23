#include <iostream>
using namespace std;
int main()
{
    int smallr, bigr;
    const int cost_sr=25;
    const int cost_br=30;
    const double tax=0.06;
    cout << "entimation of price\n";
    cout << "enter no. of small room: ";
    cin >> smallr;
    cout << "enter no. of big room room: ";
    cin >>bigr;
    cout<<"cost for small room "<<smallr*cost_sr<<endl;
    cout<<"cost for big room "<<bigr*cost_br<<endl;
    cout<<"tax= "<<(smallr*cost_sr+bigr*cost_br)*tax<<endl;
    cout<<"total cost = "<<((smallr*cost_sr+bigr*cost_br)*tax)+(smallr*cost_sr+bigr*cost_br)<<endl;
    



    return 0;
}