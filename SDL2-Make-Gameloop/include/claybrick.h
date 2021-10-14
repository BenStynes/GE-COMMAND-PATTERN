#pragma once

#include "brick.h"


class claybrick : public brick
{
public:
    claybrick()
    {

    }

    std::string getType()
    {
       return "Clay";
    }
};