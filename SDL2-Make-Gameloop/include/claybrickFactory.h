#pragma once

#include "Factory.h"
#include "claybrick.h"


class claybrickFactory : public Factory
{
public:
    std::vector<brick*> getBricks(int t_numberOfBricks)
    {
        std::vector<brick*> values;

        for(int i = 0; i < t_numberOfBricks; i++)
        {
            values.push_back(new claybrick());
        }

        return values;
    }
};