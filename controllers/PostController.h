#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class PostController : public drogon::HttpController<PostController>
{
  public:
    METHOD_LIST_BEGIN
    METHOD_ADD(PostController::getPosts, "/getPosts", Get);
    METHOD_ADD(PostController::getPost, "/getPost", Get);
    METHOD_ADD(PostController::addPost, "/addPost", Post);
    METHOD_ADD(PostController::updatePost, "/updatePost", Post);
    METHOD_ADD(PostController::deletePost, "/deletePost", Post);
    METHOD_LIST_END
    
    void getPosts(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void getPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void addPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void updatePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void deletePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
};
