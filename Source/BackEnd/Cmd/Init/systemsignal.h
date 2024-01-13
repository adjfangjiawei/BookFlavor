#pragma once

#include <RuntimeError.h>

#include <boost/asio.hpp>
#include <iostream>

extern auto processSystemSignal() -> Util::RuntimeError;