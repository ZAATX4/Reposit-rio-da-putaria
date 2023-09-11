#pragma once
#include "eleMesmo.h"
class Outro :
    public eleMesmo
{
public:
    void setSobre();
    string getSobre();
private:
    string sobrenome = "Ferreira";
};

