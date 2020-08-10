#include <bits/stdc++.h>
using namespace std;

int X,Y,K, maggiore, minore;
bool caso;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

    cin >> X >> Y;
    K=0;

    if(X>Y)
    {
        maggiore=X;
        minore=Y;
        caso=true;
    }
    else
    {
        maggiore=Y;
        minore=X;
        caso=false;
    }
    if(maggiore%minore==0 || minore*2>maggiore)
    {
        K=0;
    }
    else
    {
        while(maggiore%minore!=0)
        {
            maggiore++;
            minore++;
        }

    }
    if(caso)
        K=maggiore-X;
    else
        K=maggiore-Y;
    cout << K <<endl;

    return 0;
}
