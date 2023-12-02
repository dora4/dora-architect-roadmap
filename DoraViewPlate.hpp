//
//  DoraViewPlate.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef DoraViewPlate_hpp
#define DoraViewPlate_hpp

#include <stdio.h>

class DoraViewPlate : public BasePlate {
    
public:
    virtual std::vector<BaseProduct*> GetProducts() override;
};

#endif /* DoraViewPlate_hpp */
