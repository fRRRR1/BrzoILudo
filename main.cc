#include <drogon/drogon.h>
int main() {
    //Set HTTP listener address and port
    drogon::app().addListener("0.0.0.0", 5555);
    //Load config file
    //drogon::app().loadConfigFile("../config.json");
    //drogon::app().loadConfigFile("../config.yaml");
    //Run HTTP framework,the method will block in the internal event loop

    // example of using orm to query database
    // app().registerHandler("/arsa", [](HttpRequestPtr req) -> Task<HttpResponsePtr>
    // {
    //     auto clientPtr = drogon::app().getDbClient();
    //     clientPtr->execSqlAsync("select * from posts",
    //     [](const drogon::orm::Result &result) {
    //         std::cout << result.size() << " rows selected!" << std::endl;
    //         int i = 0;
    //         for (auto row : result)
    //         {
    //             std::cout << i++ << ": user name is " << row["user_name"].as<std::string>() << std::endl;
    //         }
    //     },
    //     [](const drogon::orm::DrogonDbException &e) {
    //         std::cerr << "error:" << e.base().what() << std::endl;
    //     },
    //     "default");
    // });

    LOG_INFO << "Server running on 127.0.0.1:5555";
    drogon::app().run();
    return 0;
}
