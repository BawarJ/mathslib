#include "adder.h"
#include "prodder.h"
#include "subtractor.h"
#include "divider.h"
// As said before, the declaration of add is
// needed also here, where the function is used.
// Good thing we set it aside in a header file.
#include <sstream>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 3) return 1;
    int a, b;
    string sa(argv[1]);
    string sb(argv[2]);
    stringstream ssa(sa);
    stringstream ssb(sb);
    ssa >> a;
    ssb >> b;
    int c = add(a, b);
    cout << "The two numbers you entered added together = " <<  c << endl;
    int d = multiply(a,b);
    cout << "The two numbers you entered multiplied together = " << d << endl;
    int e = subtractor(a,b);
    cout << "The two numbers you entered subtracted from one another = " << e << endl;
    int f = divide(a,b);
    cout<< "The two numbers you entered divided = " << f << endl;

return 0;
}