//
//  DoraCacheModule.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef DoraCacheModule_hpp
#define DoraCacheModule_hpp

#include <stdio.h>

class DoraCacheModule : public BaseModule {
    
public:
    virtual std::vector<BaseProduct*> GetProducts() override;
};

#endif /* DoraCacheModule_hpp */
