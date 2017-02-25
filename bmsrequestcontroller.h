#ifndef BMSREQUESTCONTROLLER_H
#define BMSREQUESTCONTROLLER_H

#include "httprequesthandler.h"
#include "playerlistcontroller.h"
#include "memoryhandler.h"

using namespace stefanfrings;

class BMSRequestController : public HttpRequestHandler
{
    Q_OBJECT
public:
    BMSRequestController(QObject* parent=0, MemoryHandler* mH = NULL);
    void service(HttpRequest &request, HttpResponse &response);
private:
    MemoryHandler* mH;
    PlayerListController pLController;
};

#endif // BMSREQUESTCONTROLLER_H
