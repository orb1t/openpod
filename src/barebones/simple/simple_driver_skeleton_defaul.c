
#include "simple_driver_skeleton.h"


//-------------------------------------------------------------------
//
// Driver code - default implementation, possibly won't be modified
//
//-------------------------------------------------------------------



errno_t		simple_driver_activate( struct pod_driver *drv )
{
	// Register dev

	errno_t	rc;
	struct pod_device *dev	= drv->private_data; // we are very simple

	if( dev == 0 ) return ENOENT;

	// TODO update flag in device struct?

	rc = pod_dev_link( drv, dev );
	if( rc ) return rc;

	rc = pod_dev_event( drv, dev, POD_EVENT_LOG, "device activated" );
	if( rc ) return rc;

	return 0;
}


errno_t		simple_driver_deactivate( struct pod_driver *drv )
{
	// De-register dev

	errno_t	rc;
	struct pod_device *dev	= drv->private_data; // we are very simple

	if( dev == 0 ) return ENOENT;

	rc = pod_dev_event( drv, dev, POD_EVENT_LOG, "device deactivated" );
	if( rc ) return rc;

	// TODO update flag in device struct?


	rc = pod_dev_unlink( drv, dev );
	if( rc ) return rc;


	return 0;
}





