#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class HomeController : public drogon::HttpController<HomeController>
{
  public:
    METHOD_LIST_BEGIN
    METHOD_ADD(HomeController::get, "/", Get);
    METHOD_LIST_END

    void get(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
};
