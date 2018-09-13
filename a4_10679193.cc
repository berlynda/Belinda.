#include <iostream>

using namespace std;

int gcd(int m,int n)
{
    if (m == n)
        return n;
    return gcd(n % m, m);
}

int main()
{
    // Ask the user to input two numbers
    int num_1, num_2;

    cout << "Input an integer" << endl;
    cin >> num_1;

    cout <<"Input another integer" << endl;
    cin >> num_2;

    cout << "GCD of (" << num_1 <<  " , " << num_2 << " ) is = " << gcd(num_1, num_2) << endl;

    return 0;
} 

