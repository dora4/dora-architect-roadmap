//
//  DoraCacheSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/6.
//

#ifndef DoraCacheSDK_hpp
#define DoraCacheSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraCacheSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
    };
}

#endif /* DoraCacheSDK_hpp */
