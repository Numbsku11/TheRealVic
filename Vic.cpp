#include "headers.h"

int main(){
    srand(time(NULL));
    
    std::cout << "Hello, I'm Vic :D\n"
    << "Whats your name?\n\n";
    
    std::string name;
    std::cin >> name;
    std::cout << "Haiiiiii " << name << " :3\n\n";

    int WhatIsVicGonnaSay = rand() % 10 + 1;
    while(0 == 0)
    {
    switch(WhatIsVicGonnaSay)
        {
        
        case 1:
            std::cout <<"Love you pookie bear :3\n";
        break;

        case 2:
            std::cout <<"I am so swagged up rn\n";
        break;

        case 3:
            std::cout <<"no?\n";
        break;

        case 4:
            std::cout <<"YIPPEE\n";
        break;

        case 5:
            std::cout <<"FUCK YOU\n";
        break;

        case 6:
            std::cout <<"i love you\n";
        break;

        case 7:
            std::cout <<"god sake\n";
        break;

        case 8:
            std::cout <<"SENJHRFTUIOJSTHSRJ\n";
        break;

        case 9:
            std::cout <<"uhhhh idk\n";
        break;

        case 10:
            std::cout <<"i had computer science and imedia\n";
        break;
        }

        Sleep(1000);
        WhatIsVicGonnaSay = rand() % 10 + 1;
        // std::cout << WhatIsVicGonnaSay << std::endl; incase of bug testing :P
    }
}