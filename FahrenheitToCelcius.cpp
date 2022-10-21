#include <iostream>
using namespace std;
#include <conio.h>

void fToC(int s, int e, int w)
{
    int celcius = 0;
    for (s; s <= e; s = s + w)
    {
        celcius = ((s - 32) * 5) / 9;
        cout << s << ":"
             << " " << celcius << endl;
    }
}
main()
{
    int s, e, w;
    cout << "Enter Start, End ,and Gap: " << endl;
    cin >> s >> e >> w;
    fToC(s, e, w);
}