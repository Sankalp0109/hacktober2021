#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :" << endl;
    cin >> num;
    int dollars = num / 100;
    num = num - (dollars * 100);
    int quaters = num / 25;
    num = num - (quaters * 25);
    int dines = num / 10;
    num = num - (dines * 10);
    int nickels = num / 5;
    num = num - (nickels * 5);
    int penny = num / 1;
    num = num - (penny * 1);
    cout << dollars << endl
         << quaters << endl
         << dines << endl
         << nickels << endl
         << penny;
    return 0;
}
