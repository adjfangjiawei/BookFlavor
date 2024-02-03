// #include "systemsignal.h"

// #include <cstdlib>

// void signalHandler(const boost::system::error_code& error, int signal_number) {
//     if (!error) {
//         std::cout << "Received signal " << signal_number << "\n";
//         std::exit(0);
//     }
// }

// auto processSystemSignal() -> Util::RuntimeError {
//     boost::asio::io_context io;
//     boost::asio::signal_set signals(io, SIGINT, SIGTERM);

//     signals.async_wait(&signalHandler);

//     io.run();

//     return Util::RuntimeError("");
// }