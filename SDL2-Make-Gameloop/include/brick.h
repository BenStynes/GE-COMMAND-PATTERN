#pragma once
#include <iostream>

class brick
{
public:
    brick(){};
    
    virtual ~brick(){};
    virtual std::string getType() = 0;
  
};