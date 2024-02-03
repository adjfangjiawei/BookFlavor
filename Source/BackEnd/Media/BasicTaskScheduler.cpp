// #include "BasicTaskScheduler.h"

// // #include <Poco/Timestamp.h>
// #include <sys/select.h>

// #include <any>

// namespace MediaServer {

//     auto BasicTaskScheduler0::scheduleDelayedTask(int64_t microseconds, std::function<void(std::any)> proc, std::any clientData) -> std::any {
//         if (microseconds < 0) {
//             microseconds = 0;
//         }
//     }

//     auto BasicTaskScheduler::createNew(unsigned maxSchedulerGranularity) -> BasicTaskScheduler* { return nullptr; }

//     BasicTaskScheduler::BasicTaskScheduler(unsigned maxSchedulerGranularity) {
//         FD_ZERO(&fReadSet);
//         FD_ZERO(&fWriteSet);
//         FD_ZERO(&fExceptionSet);
//     }

//     void BasicTaskScheduler::schedulerTickTask(std::any clientData) { std::any_cast<BasicTaskScheduler*>(clientData)->schedulerTickTask(); }

//     void BasicTaskScheduler::schedulerTickTask() {}
// }  // namespace MediaServer