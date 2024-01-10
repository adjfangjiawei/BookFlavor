#include <Poco/URI.h>

#include <iostream>
#include <string>

int parseUriByByPoco() {
    std::string httpUri = "http://example.com/path?query=param";
    std::string wsUri = "ws://example.com/path";
    std::string rtspUri = "rtsp://example.com/stream";

    Poco::URI httpUriObj(httpUri);
    Poco::URI wsUriObj(wsUri);
    Poco::URI rtspUriObj(rtspUri);

    std::cout << "HTTP URI:\n";
    std::cout << "Scheme: " << httpUriObj.getScheme() << "\n";
    std::cout << "Host: " << httpUriObj.getHost() << "\n";
    std::cout << "Path: " << httpUriObj.getPath() << "\n";
    std::cout << "Query: " << httpUriObj.getQuery() << "\n";

    std::cout << "\nWebSocket URI:\n";
    std::cout << "Scheme: " << wsUriObj.getScheme() << "\n";
    std::cout << "Host: " << wsUriObj.getHost() << "\n";
    std::cout << "Path: " << wsUriObj.getPath() << "\n";

    std::cout << "\nRTSP URI:\n";
    std::cout << "Scheme: " << rtspUriObj.getScheme() << "\n";
    std::cout << "Host: " << rtspUriObj.getHost() << "\n";
    std::cout << "Path: " << rtspUriObj.getPath() << "\n";

    return 0;
}

#include <uriparser/Uri.h>

#include <iostream>

void parseUri(const std::string& uriString) {
    UriParserStateA state;
    UriUriA uri;

    state.uri = &uri;
    if (uriParseUriA(&state, uriString.c_str()) != URI_SUCCESS) {
        uriFreeUriMembersA(&uri);
        std::cout << "Failed to parse URI\n";
        return;
    }

    std::cout << "Scheme: " << uri.scheme.first << "\n";
    std::cout << "Host: " << uri.hostText.first << "\n";
    std::cout << "Path: " << uri.pathHead->text.first << "\n";

    uriFreeUriMembersA(&uri);
}

int uriParse() {
    std::string httpUri = "http://example.com/path?query=param";
    std::string wsUri = "ws://example.com/path";
    std::string rtspUri = "rtsp://example.com/stream";

    std::cout << "HTTP URI:\n";
    parseUri(httpUri);

    std::cout << "\nWebSocket URI:\n";
    parseUri(wsUri);

    std::cout << "\nRTSP URI:\n";
    parseUri(rtspUri);

    return 0;
}