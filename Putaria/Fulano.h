#pragma once
#include "Outro.h"


class Fulano :
    public Outro
{
public:
    void setEnder();
    float getEnder();
private:
    float ender = 13;
};

