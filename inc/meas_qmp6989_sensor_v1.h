#ifndef __MEAS_QMP6989_SENSOR_V1_H__
#define __MEAS_QMP6989_SENSOR_V1_H__

#include <stdint.h>
#include <rtdef.h>
#include "qmp6989.h"

#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

int rt_hw_qmp6989_init(const char *name, struct rt_sensor_config *cfg);


#endif /* __MEAS_QMP6989_SENSOR_V1_H__ */
