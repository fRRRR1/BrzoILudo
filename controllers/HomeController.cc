#include "HomeController.h"

// Add definition of your processing function here
void HomeController::get(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}