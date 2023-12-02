//
//  BasePlate.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef BasePlate_hpp
#define BasePlate_hpp

#include <stdio.h>
#include <vector>

class BasePlate {
protected:
    std::string name;
    int productNum;
public:
    virtual std::vector<BaseProduct*> GetProducts();
};

#endif /* BasePlate_hpp */
