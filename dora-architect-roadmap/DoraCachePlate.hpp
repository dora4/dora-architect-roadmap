//
//  dcache板块
//  DoraCachePlate.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef DoraCachePlate_hpp
#define DoraCachePlate_hpp

#include <vector>
#include "BaseProduct.hpp"
#include "BasePlate.hpp"

class DoraCachePlate : public BasePlate {
    
public:
    virtual std::vector<BaseProduct*> GetProducts() override;
};

#endif /* DoraCachePlate_hpp */
