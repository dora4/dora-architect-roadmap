//
//  DoraBuglySDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/16.
//

#ifndef DoraBuglySDK_hpp
#define DoraBuglySDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraBuglySDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}

#endif /* DoraBuglySDK_hpp */
