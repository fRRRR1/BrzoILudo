#include "HomeController.h"

void HomeController::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    Json::Value ret;
    ret["result"] = "home page";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);

    // auto resp = HttpResponse::newHttpResponse();
    // resp->setBody("<p>Hello, World!</p>");
    // callback(resp);
}
