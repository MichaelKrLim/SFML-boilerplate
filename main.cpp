#include <iostream>

#include "src/Wrapper.h"

int main()
{
    Wrapper wrapper;

    while(wrapper.is_running())
    {
        wrapper.update();
        wrapper.render();

    }
    return 0;
}
