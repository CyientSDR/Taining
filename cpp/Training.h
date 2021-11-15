#ifndef TRAINING_I_IMPL_H
#define TRAINING_I_IMPL_H

#include "Training_base.h"

class Training_i : public Training_base
{
    ENABLE_LOGGING
    public:
        Training_i(const char *uuid, const char *label);
        ~Training_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // TRAINING_I_IMPL_H
