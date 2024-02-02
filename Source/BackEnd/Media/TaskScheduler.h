// #pragma once

// #include <any>
// #include <functional>
// namespace MediaServer {
//     class TaskScheduler {
//       public:
//         virtual ~TaskScheduler();

//         virtual std::any scheduleDelayedTask(int64_t microseconds, std::function<void(std::any)> proc, std::any clientData) = 0;

//         virtual void unscheduleDelayedTask(std::any task) = 0;

//         virtual void rescheduleDelayedTask(std::any task, int64_t microseconds, std::function<void(std::any)> proc, std::any clientData) = 0;
//     };
// }  // namespace MediaServer
