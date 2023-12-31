//
//  DoraPlate.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef DoraPlate_hpp
#define DoraPlate_hpp

#include <vector>
#include "BaseProduct.hpp"
#include "BasePlate.hpp"

namespace dora {

    class DoraPlate : public BasePlate {
        
    public:
        virtual std::vector<BaseProduct*> GetProducts() override;
    };
}

#endif /* DoraPlate_hpp */
