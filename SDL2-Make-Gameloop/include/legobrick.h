#pragma once

#include "brick.h"


class legobrick : public brick
{
public:
    legobrick()
    {

    }

    std::string getType()
    {
       return "Lego";
    }
};