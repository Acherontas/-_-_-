#ifndef INTHEADER_H
#define INTHEADER_H
#include <iostream>
using namespace std;

class intheader
{
    public:
        intheader();
        virtual ~intheader();
        intheader(const intheader& other);
        intheader& operator=(const intheader& other);
        int inthead();
    protected:

    private:
};

#endif // INTHEADER_H
