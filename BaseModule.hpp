//
//  BaseModule.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef BaseModule_hpp
#define BaseModule_hpp

#include <stdio.h>
#include <vector>

class BaseModule {
protected:
    std::string name;
    int productNum;
public:
    virtual std::vector<BaseProduct*> GetProducts();
};

#endif /* BaseModule_hpp */
