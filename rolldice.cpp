#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int main(int argc, char **argv)
{
    cout << "Enter number of dice rolls: ";
    int n;
    cin >> n;
    cout << "The values are: ( ";
    for (int i = 0; i < n; i++)
        cout << (rand() % 6) + 1<<" ";
    cout<<")";
}