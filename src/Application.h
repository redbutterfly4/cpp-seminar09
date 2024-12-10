#ifndef APPLICATION_H
#define APPLICATION_H

class Application
{
public:
    Application() = delete;

    static int main();

private:
    static void setUpLoggerWithRotatingFiles();
};

#endif // APPLICATION_H
