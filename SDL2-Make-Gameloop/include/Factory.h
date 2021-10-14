#pragma once

#include "brick.h"
#include <vector>

class Factory
{
public:
    virtual std::vector<brick*> getBricks(int t_numberOfBricks) = 0;
};