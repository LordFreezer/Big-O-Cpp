#include <iostream>
using namespace std;

int main()
{
    int count = 0, N = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) 
    {
        for (int j = i + 1; j <= N; j++) 
        {
            for (int k = 1; k <= j; k++) 
            {
                count++;
            }
        }
    }

    cout << "N is: " << N << " and count is: " << count << endl;
}
