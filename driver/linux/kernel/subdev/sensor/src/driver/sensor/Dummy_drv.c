/*
*
* SPDX-License-Identifier: GPL-2.0
*
* Copyright (C) 2011-2018 ARM or its affiliates
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; version 2.
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
*/

//-------------------------------------------------------------------------------------
//STRUCTURE:
//  VARIABLE SECTION:
//        CONTROLS - dependence from preprocessor
//        DATA     - modulation
//        RESET     - reset function
//        MIPI     - mipi settings
//        FLASH     - flash support
//  CONSTANT SECTION
//        DRIVER
//-------------------------------------------------------------------------------------

#include "acamera_types.h"
#include "acamera_logger.h"
#include "acamera_command_api.h"
#include "acamera_sbus_api.h"
#include "acamera_command_api.h"
#include "acamera_sensor_api.h"
#include "acamera_firmware_config.h"


typedef struct _sensor_context_t {
    uint8_t address; // Sensor address for direct write (not used currently)
    acamera_sbus_t sbus;
    sensor_param_t param;
    sensor_mode_t supported_modes[ISP_MAX_SENSOR_MODES];
} sensor_context_t;

static sensor_context_t s_ctx[FIRMWARE_CONTEXT_NUMBER];
static int ctx_counter = 0;

//*************************************************************************************
//--------------------DATA-------------------------------------------------------------
//--------------------RESET------------------------------------------------------------
static void sensor_hw_reset_enable( void )
{
}

static void sensor_hw_reset_disable( void )
{
}

//--------------------FLASH------------------------------------------------------------

static int32_t sensor_alloc_analog_gain( void *ctx, int32_t gain )
{
    return 0;
}

static int32_t sensor_alloc_digital_gain( void *ctx, int32_t gain )
{
    return 0;
}

static void sensor_alloc_integration_time( void *ctx, uint16_t *int_time, uint16_t *int_time_M, uint16_t *int_time_L )
{
}

static void sensor_update( void *ctx )
{
}

static void sensor_set_mode( void *ctx, uint8_t mode )
{
    sensor_context_t *p_ctx = ctx;
    sensor_param_t *param = &p_ctx->param;

    param->active.width = 1920;
    param->active.height = 1080;
    param->total.width = 2200;
    param->total.height = 1125;
    param->pixels_per_line = param->total.width;
    param->integration_time_min = 1;
    param->integration_time_max = 1000;
    param->integration_time_limit = 1000;
    param->mode = mode;
    param->lines_per_second = 0;
    param->sensor_exp_number = param->modes_table[mode].exposures;
}

static uint16_t sensor_get_id( void *ctx )
{
    return 0xFFFF;
}

static const sensor_param_t *sensor_get_parameters( void *ctx )
{
    sensor_context_t *p_ctx = ctx;
    return (const sensor_param_t *)&p_ctx->param;
}

static void sensor_disable_isp( void *ctx )
{
}

static uint32_t read_register( void *ctx, uint32_t address )
{
    return 0;
}

static void write_register( void *ctx, uint32_t address, uint32_t data )
{
}

static void stop_streaming( void *ctx )
{
}

static void start_streaming( void *ctx )
{
}

void sensor_deinit_dummy( void *ctx )
{
}
//--------------------Initialization------------------------------------------------------------
void sensor_init_dummy( void **ctx, sensor_control_t *ctrl )
{

    if ( ctx_counter < FIRMWARE_CONTEXT_NUMBER ) {
        sensor_context_t *p_ctx = &s_ctx[ctx_counter];
        ctx_counter++;

        p_ctx->param.sensor_exp_number = 1;
        p_ctx->param.again_log2_max = 0;
        p_ctx->param.dgain_log2_max = 0;
        p_ctx->param.integration_time_apply_delay = 2;
        p_ctx->param.isp_exposure_channel_delay = 0;
        p_ctx->param.modes_table = p_ctx->supported_modes;
        p_ctx->param.modes_num = 1;

        p_ctx->supported_modes[0].wdr_mode = WDR_MODE_LINEAR;
        p_ctx->supported_modes[0].fps = 30 * 256;
        p_ctx->supported_modes[0].resolution.width = 1920;
        p_ctx->supported_modes[0].resolution.height = 1080;
        p_ctx->supported_modes[0].bits = 12;
        p_ctx->supported_modes[0].exposures = 1;

        p_ctx->param.sensor_ctx = &s_ctx;

        *ctx = p_ctx;

        ctrl->alloc_analog_gain = sensor_alloc_analog_gain;
        ctrl->alloc_digital_gain = sensor_alloc_digital_gain;
        ctrl->alloc_integration_time = sensor_alloc_integration_time;
        ctrl->sensor_update = sensor_update;
        ctrl->set_mode = sensor_set_mode;
        ctrl->get_id = sensor_get_id;
        ctrl->get_parameters = sensor_get_parameters;
        ctrl->disable_sensor_isp = sensor_disable_isp;
        ctrl->read_sensor_register = read_register;
        ctrl->write_sensor_register = write_register;
        ctrl->start_streaming = start_streaming;
        ctrl->stop_streaming = stop_streaming;

        // Reset sensor during initialization
        sensor_hw_reset_enable();
        sensor_hw_reset_disable();

    } else {
        LOG( LOG_ERR, "Attempt to initialize more sensor instances than was configured. Sensor initialization failed." );
        *ctx = NULL;
    }
}

//*************************************************************************************
