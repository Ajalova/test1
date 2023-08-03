#include <iostream>
using namespace std;

void return_money(int* a,int * cash, int sdatha)
{
    int l = 11;
    int coin;
    for (int i = 0; sdatha != 0; i++)
    {
        coin = cash[l - i-1];
        if (sdatha >= coin) 
        {
            *(a + l - i - 1) = sdatha / coin;
            sdatha = sdatha % coin;
        }
    }
}


int main()
{
    int sdatcha[11]={0};
    int cash[] = { 1, 2, 5, 10, 50, 100, 200, 500, 1000, 2000, 5000 };
    int price;
    int money;
    cout << "Price:\n";
    cin >> price;
    cout << "Money:\n";
    cin >> money;
    if (money >= price)
    {
        return_money(sdatcha, cash, money - price);
        for (int i = 0; i < 11; i++)
        {
            cout << cash[i] << " rubels: " << sdatcha[i] << "pieces" << endl;
        }
    }
    else { cout << "not enough money\n"; }
        
}

