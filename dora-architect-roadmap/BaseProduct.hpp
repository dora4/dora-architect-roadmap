//
//  BaseProduct.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef BaseProduct_hpp
#define BaseProduct_hpp

#include <string>

class BaseProduct {
    
public:
    virtual std::string GetName() = 0;
    virtual std::string GetIntroduce() = 0;
    virtual std::string GetSampleCode() = 0;
};

#endif /* BaseProduct_hpp */
