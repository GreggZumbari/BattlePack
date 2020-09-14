/*
This file contains code for the wait() function. It detects whether the code is being run on Windows or not, and runs the appropriate code for what is effectively a sleep() function.

I have named the function to wait() instead of sleep() in order to differentiate it from Windows' Sleep() function.

Greggory Hickman, September 2020
*/
//Credit to GManNickG on Stack Overflow for very nicely showing the difference in functionality for the different OS regarding the Sleep vs. usleep on Windows vs. Unix
#ifdef _WIN32
    #include <windows.h>

    void wait(int milliseconds)
    {
        Sleep(milliseconds);
    }
#else
    #include <unistd.h>

    void wait(int milliseconds)
    {
        usleep(milliseconds * 1000); // takes microseconds
    }
#endif
