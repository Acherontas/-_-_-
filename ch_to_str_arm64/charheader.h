#ifndef CHARHEADER_H
#define CHARHEADER_H
#include <iostream>
using namespace std;

class charheader
{
    public:
        charheader();
        virtual ~charheader();
        charheader(const charheader& other);
        charheader& operator=(const charheader& other);
        int xchar();

    protected:

    private:
};

#endif // CHARHEADER_H
