//
//  DoraModule.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef DoraModule_hpp
#define DoraModule_hpp

#include <stdio.h>

class DoraModule : public BaseModule {
    
public:
    virtual std::vector<BaseProduct*> GetProducts() override;
};

#endif /* DoraModule_hpp */
