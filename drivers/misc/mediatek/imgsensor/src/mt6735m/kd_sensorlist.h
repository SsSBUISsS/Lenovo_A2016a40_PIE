//s_add new sensor driver here
//export funtions
/*IMX*/
/*OV*/
/*S5K*/
UINT32 S5K5E2YA_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 HI553_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
/*GC*/
UINT32 GC2355_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC5005_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC2365_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
/*SP*/
UINT32 SP2509_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);

//! Add Sensor Init function here
//! Note:
//! 1. Add by the resolution from ""large to small"", due to large sensor
//!    will be possible to be main sensor.
//!    This can avoid I2C error during searching sensor.
//! 2. This file should be the same as mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
ACDK_KD_SENSOR_INIT_FUNCTION_STRUCT kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR+1] =
{
/*IMX*/
/*OV (OmniVision)*/
/*S5K*/
#if defined(S5K5E2YA_MIPI_RAW)
    {S5K5E2YA_SENSOR_ID, SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW, S5K5E2YA_MIPI_RAW_SensorInit},
#endif
/*HI*/

#if defined(HI551_MIPI_RAW)
    {HI551_SENSOR_ID, SENSOR_DRVNAME_HI551_MIPI_RAW,HI551_MIPI_RAW_SensorInit},
#endif
#if defined(HI553_MIPI_RAW)
    {HI553_SENSOR_ID, SENSOR_DRVNAME_HI553_MIPI_RAW,HI553_MIPI_RAW_SensorInit},
#endif
#if defined(HI545_MIPI_RAW)
    {HI545MIPI_SENSOR_ID, SENSOR_DRVNAME_HI545_MIPI_RAW, HI545_MIPI_RAW_SensorInit},
#endif
/*MT*/
/*GC*/
#if defined(GC2355_MIPI_RAW)
    {GC2355_SENSOR_ID, SENSOR_DRVNAME_GC2355_MIPI_RAW,GC2355_MIPI_RAW_SensorInit},
#endif
#if defined(GC5005_MIPI_RAW)
    {GC5005_SENSOR_ID, SENSOR_DRVNAME_GC5005_MIPI_RAW,GC5005_MIPI_RAW_SensorInit},
#endif
#if defined(GC2365_MIPI_RAW)
    {GC2365_SENSOR_ID, SENSOR_DRVNAME_GC2365_MIPI_RAW,GC2365_MIPI_RAW_SensorInit},
#endif
/*SP*/
#if defined(SP2509_MIPI_RAW)
    {SP2509_SENSOR_ID, SENSOR_DRVNAME_SP2509_MIPI_RAW, SP2509_MIPI_RAW_SensorInit},
#endif
/*A*/
/*LCA Test*/

/*  ADD sensor driver before this line */
    {0,{0},NULL}, //end of list
};
//e_add new sensor driver here

