#pragma once

#include "brick.h"


class woodbrick : public brick
{
public:
    woodbrick()
    {

    }

     std::string getType()
    {
       return "Wood";
    }
};