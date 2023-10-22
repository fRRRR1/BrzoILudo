#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class Post : public drogon::HttpController<Post>
{
  public:
    METHOD_LIST_BEGIN
    METHOD_ADD(Post::getPosts, "/getPosts", Get);
    METHOD_ADD(Post::getPost, "/getPost", Get);
    METHOD_ADD(Post::addPost, "/addPost", Post);
    METHOD_ADD(Post::updatePost, "/updatePost", Post);
    METHOD_ADD(Post::deletePost, "/deletePost", Post);
    METHOD_LIST_END
    
    void getPosts(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void getPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void addPost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void updatePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void deletePost(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
};
