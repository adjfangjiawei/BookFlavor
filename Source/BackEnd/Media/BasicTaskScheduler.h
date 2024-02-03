// #pragma once
// #include <any>

// #include "TaskScheduler.h"
// namespace MediaServer {
//     class BasicTaskScheduler0 : public TaskScheduler {
//       public:
//         virtual std::any scheduleDelayedTask(int64_t microseconds, std::function<void(std::any)> proc, std::any clientData) override;
//     };

//     class BasicTaskScheduler : public BasicTaskScheduler0 {
//       public:
//         static BasicTaskScheduler *createNew(unsigned maxSchedulerGranularity = 10000);

//       protected:
//         BasicTaskScheduler(unsigned maxSchedulerGranularity);
//         virtual ~BasicTaskScheduler();
//         static void schedulerTickTask(std::any clientData);
//         void schedulerTickTask();

//       protected:
//         unsigned fMaxSchedulerGranularity;
//         fd_set fReadSet, fWriteSet, fExceptionSet;
//     };
// }  // namespace MediaServer