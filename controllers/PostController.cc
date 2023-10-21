#include "PostController.h"

void PostController::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    Json::Value ret;
    ret["result"] = "posts page";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
