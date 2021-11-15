#ifndef TRAINING_BASE_IMPL_BASE_H
#define TRAINING_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>


class Training_base : public Component, protected ThreadedComponent
{
    public:
        Training_base(const char *uuid, const char *label);
        ~Training_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

    private:
};
#endif // TRAINING_BASE_IMPL_BASE_H
