#pragma once

#include "Factory.h"
#include "legobrick.h"


class legobrickFactory : public Factory
{
public:
    std::vector<brick*> getBricks(int t_numberOfBricks)
    {
        std::vector<brick*> values;

        for(int i = 0; i < t_numberOfBricks; i++)
        {
            values.push_back(new legobrick());
        }

        return values;
    }
};