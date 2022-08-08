//* Nana Kwame Biney (10949743)
//* Prime Number Assignment


#include <iostream>
using namespace std;

int main() 
{
    for (int s=2; s<100; s++) 
        for (int t=2; t*t<=s; t++)
        {
            if (s % t == 0) 
                break;
            else if (t+1 > sqrt(s)) {
                cout << s << " ";

            }

        }   

    return 0;
}
