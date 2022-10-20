
#include <sys/prx.h>

// Moved this to an header because i don't like the way it looks :p
#pragma diag_suppress 77
SYS_MODULE_INFO(module_action_sample, 0, 1, 1);
SYS_MODULE_START(module_start);
SYS_MODULE_STOP(module_stop);