#include "positioning.h"
void positioning::start()
{
    connect(source, SIGNAL(positionUpdated(QGeoPositionInfo)),
            this, SLOT(positionUpdated(QGeoPositionInfo)));
    source->startUpdates();
}
void positioning::stop()
{
    source->stopUpdates();
}
