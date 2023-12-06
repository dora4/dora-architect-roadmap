//
//  DoraViewSkinsSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/6.
//

#ifndef DoraViewSkinsSDK_hpp
#define DoraViewSkinsSDK_hpp

#include "BaseProduct.hpp"
#include <string>

class DoraViewSkinsSDK : public BaseProduct {
public:
    virtual std::string GetName() override;
    virtual std::string GetIntroduce() override;
    virtual std::string GetSampleCode() override;
};

#endif /* DoraViewSkinsSDK_hpp */
