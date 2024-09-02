#include <bits/stdc++.h>

// 信号处理函数
void signalHandler(int signal) {
    switch (signal) {
        case SIGSEGV:
            std::cout << "Received SIGSEGV (Segmentation Fault)" << std::endl;
            break;
        case SIGABRT:
            std::cout << "Received SIGABRT (Abort Signal)" << std::endl;
            break;
        case SIGINT:
            std::cout << "Received SIGINT (Ctrl+C)" << std::endl;
            break;
        default:
            std::cout << "Received signal: " << signal << std::endl;
            break;
    }
    std::exit(signal); // 退出程序
}

int main() {
    // 注册信号处理函数
    std::signal(SIGSEGV, signalHandler);
    std::signal(SIGABRT, signalHandler);
    std::signal(SIGINT, signalHandler);

    // 触发 SIGSEGV 信号（段错误）
    // int *p = nullptr;
    // *p = 42; // 取消注释可测试段错误


    // 触发 SIGABRT 信号（程序中止）
    // std::abort(); // 取消注释可测试直接调用 abort() 函数


    // 触发 SIGKILL 信号（无法捕获）
    // 好像死不掉不知道为啥 氵
    // try {
    //     // 尝试分配大量内存
    //     std::vector<int> largeVector;
    //     // 以巨大的步幅不断扩展 vector 容量
    //     while (true) {
    //         largeVector.resize(largeVector.size() + 1000000); // 每次增加一百万个元素
    //     }
    //     } catch (const std::bad_alloc& e) {
    //     std::cerr << "Allocation failed: " << e.what() << std::endl;
    // }

    while(true);

    return 0;
}
