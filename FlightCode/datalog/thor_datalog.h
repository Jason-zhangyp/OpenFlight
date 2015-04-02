/*! \file thor_datalog.h
 *	\brief Thor data logging setup
 *
 *	\details Defines what variables are logged for the Thor aircraft.
 *	\ingroup datalog_fcns
 *
 * \author University of Minnesota
 * \author Aerospace Engineering and Mechanics
 * \copyright Copyright 2011 Regents of the University of Minnesota. All rights reserved.
 *
 * $Id$
 */
#ifndef THOR_DATALOG_H_
#define THOR_DATALOG_H_
	
// Datalogging setup
#define LOG_ARRAY_SIZE 90000 ///< Number of data points in the logging array. 50 Hz * 60 sec/min * 30 minutes = 90000

#define NUM_DOUBLE_VARS 6	///< Number of variables that will be logged as doubles
#define NUM_FLOAT_VARS 70	///< Number of variables that will be logged as floats
#define NUM_INT_VARS 2		///< Number of variables that will be logged as ints
#define NUM_SHORT_VARS 6	///< Number of variables that will be logged as shorts

//Names of matlab variables MUST match pointers!!

/// char array of variable names for doubles
char* saveAsDoubleNames[NUM_DOUBLE_VARS] = {
		"lat", "lon","alt",
		"navlat", "navlon", "navalt"};

/// double pointer array to variables that will be saved as doubles
double* saveAsDoublePointers[NUM_DOUBLE_VARS] = {
		&gpsData.lat, &gpsData.lon, &gpsData.alt,
		&navData.lat, &navData.lon, &navData.alt};

/// char array of variable names for floats
char* saveAsFloatNames[NUM_FLOAT_VARS] = {
 			"time",
			"p", "q", "r", 
			"ax", "ay", "az", 
			"hx", "hy", "hz",
			"h", "ias", 
			"h_filt","ias_filt",
			"Ps","Pd", 
			"Pd_aoa", "Pd_aos", 
			"aoa", "aos", 
			"vn", "ve", "vd",
			"GPS_TOW",
			"navvn", "navve","navvd",
			"phi", "theta", "psi",
			"p_bias", "q_bias", "r_bias",
			"ax_bias", "ay_bias", "az_bias",
			"phi_cmd","theta_cmd","psi_cmd",
			"p_cmd", "q_cmd", "r_cmd",
			"ias_cmd","h_cmd",
			"gndtrk_cmd","gamma_cmd",
			"dthr_in","de_in", "dr_in",
			"da_l_in", "da_r_in","df_l_in","df_r_in",
			"de", "da_l", "da_r",
			"df_l", "df_r", "dr", "dthr",
			"etime_daq", "etime_nav", "etime_guidance",
			"etime_sensfault","etime_control", "etime_sysid",
			"etime_surffault","etime_actuators","etime_datalog","etime_telemetry"};
								
/// double pointer array to variables that will be saved as floats
double* saveAsFloatPointers[NUM_FLOAT_VARS] = {
			&imuData.time,
			&imuData.p, &imuData.q, &imuData.r,
			&imuData.ax, &imuData.ay, &imuData.az,
			&imuData.hx, &imuData.hy, &imuData.hz,
			&adData.h, &adData.ias, 
			&adData.h_filt, &adData.ias_filt,
			&adData.Ps, &adData.Pd, 
			&adData.Pd_aoa, &adData.Pd_aos,
			&adData.aoa, &adData.aos,
			&gpsData.vn, &gpsData.ve, &gpsData.vd, 
			&gpsData.GPS_TOW, 
			&navData.vn, &navData.ve, &navData.vd,
			&navData.phi, &navData.the, &navData.psi,
			&navData.gb[0], &navData.gb[1], &navData.gb[2],
			&navData.ab[0], &navData.ab[1], &navData.ab[2],
			&controlData.phi_cmd, &controlData.theta_cmd, &controlData.psi_cmd,
			&controlData.p_cmd, &controlData.q_cmd, &controlData.r_cmd,
			&controlData.ias_cmd, &controlData.h_cmd,
			&controlData.gndtrk_cmd, &controlData.gamma_cmd,
			&controlData.dthr_in, &controlData.de_in, &controlData.dr_in,
			&controlData.da_l_in, &controlData.da_r_in, &controlData.df_l_in, &controlData.df_r_in,
			&controlData.de, &controlData.da_l, &controlData.da_r, 
			&controlData.df_l, &controlData.df_r, &controlData.dr, &controlData.dthr,
			&etime_daq, &etime_nav, &etime_guidance,
			&etime_sensfault, &etime_control, &etime_sysid,
			&etime_surffault, &etime_actuators, &etime_datalog, &etime_telemetry};

/// char array of variable names for ints
char* saveAsIntNames[NUM_INT_VARS] = {"imuStatus","gpsStatus"};

/// int32_t pointer array to variables that will be saved as ints
int32_t* saveAsIntPointers[NUM_INT_VARS] = {(int32_t *)&imuData.err_type,(int32_t *)&gpsData.err_type};


/// char array of variable names for shorts
char* saveAsShortNames[NUM_SHORT_VARS] = {"mode", "satVisible", "navValid","cpuLoad","adStatus","run_num"};

/// uint16_t pointer array to variables that will be saved as shorts
uint16_t* saveAsShortPointers[NUM_SHORT_VARS] = {&missionData.mode, &gpsData.satVisible,
												  &gpsData.navValid,&cpuLoad,&adData.status,&missionData.run_num};
#endif	

