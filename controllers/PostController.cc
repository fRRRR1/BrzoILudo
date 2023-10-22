#include "PostController.h"

// Add definition of your processing function here
void PostController::getPosts(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void PostController::getPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void PostController::addPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void PostController::updatePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void PostController::deletePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}