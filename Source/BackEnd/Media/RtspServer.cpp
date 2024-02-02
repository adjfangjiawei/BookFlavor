#include <unicode/calendar.h>
#include <unicode/smpdtfmt.h>

#include <sstream>

icu::UnicodeString dateHeader() {
    UErrorCode status = U_ZERO_ERROR;
    icu::Calendar* cal = icu::Calendar::createInstance(status);
    cal->setTime(icu::Calendar::getNow(), status);

    icu::SimpleDateFormat* fmt = new icu::SimpleDateFormat("EEE, dd MMM yyyy HH:mm:ss 'GMT'", icu::Locale("en_US_POSIX"), status);

    icu::UnicodeString dateStr;
    fmt->format(cal->getTime(status), dateStr, status);

    delete fmt;
    delete cal;

    return dateStr;
}

class RtspServer {
  public:
    auto allowedCommandNames() { return "OPTIONS, DESCRIBE, SETUP, TEARDOWN, PLAY, PAUSE, GET_PARAMETER, SET_PARAMETER"; }
};

class RtspSession {
    auto handleOption() {
        std::ostringstream oss;
        auto uDateHeader = dateHeader();
        std::string utf8DateHeader;
        uDateHeader.toUTF8String(utf8DateHeader);
        oss << "RTSP/1.0 200 OK\r\nCSeq: " << fCurrentCSeq << "\r\n" << utf8DateHeader << "Public: " << fOurRTSPServer.allowedCommandNames() << "\r\n\r\n";

        std::string response = oss.str();
    }
    std::string fCurrentCSeq;
    RtspServer& fOurRTSPServer;
};