
#include <iostream>
#include <string>
#include <vmime/vmime.hpp>

int parseEmail() {
    // Create an email address
    vmime::string input = "user@example.com";

    // Parse the email address
    vmime::shared_ptr<vmime::mailbox> mailbox = vmime::make_shared<vmime::mailbox>(input);

    // Output the parsed results
    std::cout << "Local part: " << mailbox->getLocalName().getBuffer() << std::endl;
    std::cout << "Domain: " << mailbox->getDomain().getBuffer() << std::endl;

    return 0;
}

#include <boost/msm/back/state_machine.hpp>
#include <boost/msm/front/state_machine_def.hpp>

namespace msm = boost::msm;
namespace mpl = boost::mpl;

// 事件定义
struct Event1 {};
struct Event2 {};

// 状态机定义
struct StateMachine_ : msm::front::state_machine_def<StateMachine_> {
    // 状态定义
    struct State1 : msm::front::state<> {};
    struct State2 : msm::front::state<> {};
    struct State3 : msm::front::state<> {};

    // 初始状态
    typedef State1 initial_state;

    // 转换表
    struct transition_table : mpl::vector<msm::front::Row<State1, State2, Event1, msm::front::none, msm::front::none>, msm::front::Row<State2, State3, Event2, msm::front::none, msm::front::none> > {};
};

// 状态机后端
typedef msm::back::state_machine<StateMachine_> StateMachine;

int main() {
    StateMachine sm;
    sm.start();  // 开始状态机

    sm.process_event(Event1());  // 处理事件1
    sm.process_event(Event2());  // 处理事件2

    sm.stop();  // 停止状态机
    return 0;
}