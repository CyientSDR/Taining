#include <iostream>
#include "ossie/ossieSupport.h"

#include "Training.h"
int main(int argc, char* argv[])
{
    Training_i* Training_servant;
    Component::start_component(Training_servant, argc, argv);
    return 0;
}

