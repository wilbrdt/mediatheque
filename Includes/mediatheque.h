#include <iostream>

#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

using namespace std;

class Mediatheque
{
protected :
    string nomMed;

public:
    Mediatheque();
    Mediatheque(string _nomMed);
    ~Mediatheque();
};

#endif // MEDIATHEQUE_H
