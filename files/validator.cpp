#include <string>
 
#include "testlib.h"
 
int main(int argc, char* argv[])
{
    int T;

    registerValidation(argc, argv);

    T = inf.readInt(1, 1000, "T");

    inf.readEoln();

    for (int i = 1; i <= T; i++)
    {
        long long N, a, b;
        
        setTestCase(i);
        
        N = inf.readLong(2LL, 1'000'000'000'000'000'000LL, "N");

        inf.readSpace();

        a = inf.readLong(0LL, N-1, "a");
    
        inf.readSpace();

        b = inf.readLong(0LL, N-1, "b");
    
        inf.readEoln();
        
        ensure(a != b);
    }

    inf.readEof();
}
