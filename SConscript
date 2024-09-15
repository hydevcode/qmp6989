# RT-Thread building script for bridge
from building import *
Import('rtconfig')

cwd = GetCurrentDir()
src   = []

# add qmp6989 src files.
src += ['src/qmp6989.c']

if GetDepend('PKG_QMP6989_USING_SENSOR_V1'):
    src += ['src/meas_qmp6989_sensor_v1.c']

if GetDepend('PKG_QMP6989_SENSOR_V1_DEMO'):
    src += ['demo/qmp6989_sensor_v1_sample.c']

# add ms5805 include path.
path  = [cwd + '/inc']

# add src and include to group.
group = DefineGroup('qmp6989', src, depend = ['PKG_USING_QMP6989'], CPPPATH = path)

Return('group')