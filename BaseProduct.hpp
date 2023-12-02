//
//  BaseProduct.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef BaseProduct_hpp
#define BaseProduct_hpp

#include <stdio.h>

class BaseProduct {
    
public:
    virtual std::string GetName();
    virtual std::string GetIntroduce();
    virtual std::string GetSampleCode();
};

#endif /* BaseProduct_hpp */
