#include "Post.h"

// Add definition of your processing function here
void Post::getPosts(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Post::getPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Post::addPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Post::updatePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Post::deletePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{
    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}