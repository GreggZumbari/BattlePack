//Credit to GManNickG on Stack Overflow for very nicely showing the difference in functionality for the different OS
#ifdef _WIN32
    #include <windows.h>

    void sleep(int milliseconds)
    {
        Sleep(milliseconds);
    }
#else
    #include <unistd.h>

    void sleep(int milliseconds)
    {
        usleep(milliseconds * 1000); // takes microseconds
    }
#endif
