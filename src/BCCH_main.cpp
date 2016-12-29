//
// Created by Neil Connatty on 2016-11-01.
//

#include "BCCH_app.h"

using namespace std;

int main (int argc, char** argv)
{
    int width; int height;
    if (argc <= 2) {
        cout << "No screen width and height specified. Using default 960 x 960 pixels." << endl;
        width = 960;
        height = 960;
    } else {
        width = atoi(argv[1]);
        height = atoi(argv[2]);
    }

    if (width == 0 || height == 0) {
        cout << "invalid width or height given. Using default 960 x 960 pixels." << endl;
        width = 960;
        height = 960;
    }

    BCCH_app app(width, height);
    app.Run();
    return 0;
}

