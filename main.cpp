#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    for(int i1=0; i1<10; i1++)
    {

    int pl1;
    cout << "Enter:  Paper(1), Scissors(2) or Rock(3)" << endl;
    cin >> pl1;

    srand(time(NULL));

    int pl2;
    pl2 = rand() % 3 + 1;
    cout << pl1 << "and " << pl2 << endl;

    if(pl1 == pl2) cout << "no winners" << endl;
    else if ((pl1 ==1) && (pl2 == 2)) cout <<  "you loose" << endl;
    else if((pl1 ==1) && (pl2==3)) cout << "you win " << endl;
    else if((pl1 == 2) && (pl2 == 1)) cout << "you win" << endl;
    else if((pl1 == 2) && (pl2 == 3)) cout << "you loose" << endl;
    else if((pl1 == 3) && (pl2 == 1)) cout << "you loose" << endl;
    else if((pl1 == 3) && (pl2 == 2)) cout << "you win" << endl;
    }

    cout << "Thanks for the game" << endl;
}

