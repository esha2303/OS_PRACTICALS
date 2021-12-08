#include <unistd.h>
#include <bits/stdc++.h>
#include<sys/types.h>
using namespace std;
int main()
{
    int x, y;
    x = fork();
    cout << "\n x = " << x;
    y = fork();
    cout << "\n y = " << y;
    cout << "\n Bye" << endl;
    return 0;
}