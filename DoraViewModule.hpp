//
//  DoraViewModule.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef DoraViewModule_hpp
#define DoraViewModule_hpp

#include <stdio.h>

class DoraViewModule : public BaseModule {
    
public:
    virtual std::vector<BaseProduct*> GetProducts() override;
};

#endif /* DoraViewModule_hpp */
