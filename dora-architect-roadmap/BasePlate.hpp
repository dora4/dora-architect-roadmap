//
//  BasePlate.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef BasePlate_hpp
#define BasePlate_hpp

#include <string>
#include <vector>
#include "BaseProduct.hpp"

class BasePlate {

protected:
    std::string name;
    int productNum;
public:
    virtual std::vector<BaseProduct*> GetProducts() = 0;

    virtual void PrintProductsInfo();
};

#endif /* BasePlate_hpp */
