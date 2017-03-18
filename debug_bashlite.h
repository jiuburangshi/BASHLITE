#ifndef __debug_bashlite__
#define __debug_bashlite__

#define debug 1

#define DEBUG(msg) \
	if (debug) \
		printf("[debug]=====[%s]- %s \n", __FUNCTION__, msg);
#endif
