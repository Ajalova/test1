#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N;
    vector <int> cyclopses_eyes;
    cout << "Enter the number of cyclops\n";
    cin >> N;
    cout << "Enter cyclops vision\n";
    for (int i = 0; i < N; i++) 
    {
        int input;
        cin >> input;
        cyclopses_eyes.push_back(input);
    }
    sort(cyclopses_eyes.begin(), cyclopses_eyes.end());

    
    if(N%2!=0)
    {
        cyclopses_eyes.push_back(cyclopses_eyes[N-1]);
    }
    int count_glasses=0;
    for (int i = 0; i < N; i++ )
    {
        if (abs(cyclopses_eyes[i] - cyclopses_eyes[i + 1])<=1)
        {
            count_glasses++;
            i++;
        }
        else 
        {
            count_glasses++;
        }
    }
    cout <<endl<< count_glasses;
    return 0;
}

