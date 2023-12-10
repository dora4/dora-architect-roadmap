//
//  板块下的项目基类
//  BaseProduct.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#ifndef BaseProduct_hpp
#define BaseProduct_hpp

#include <string>


namespace dora {
    
    enum CompleteStatus {
        CS_SCHEDULE,    // 规划中，还未开发
        CS_DEV,         // 开发中
        CS_COMPLETED   // 开发完成
    };

    class BaseProduct {
        
    public:
        // 获取项目名称
        virtual std::string GetName() = 0;
        // 获取项目介绍
        virtual std::string GetIntroduce() = 0;
        // 获取示例代码
        virtual std::string GetSampleCode() = 0;
        // 获取项目开发状态
        virtual CompleteStatus GetCompleteStatus();
    };
}
#endif /* BaseProduct_hpp */
