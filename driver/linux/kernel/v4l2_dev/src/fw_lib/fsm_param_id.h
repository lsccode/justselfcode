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

#if !defined(__FSM_PARAM_ID_H__)
#define __FSM_PARAM_ID_H__


typedef enum {
    FSM_PARAM_SET_MIN_ID,

    /* SENSOR */
    FSM_PARAM_SET_SENSOR_START,
    FSM_PARAM_SET_SENSOR_STREAMING,
    FSM_PARAM_SET_SENSOR_PRESET_MODE,
    FSM_PARAM_SET_SENSOR_INFO_PRESET_NUM,
    FSM_PARAM_SET_SENSOR_ALLOC_ANALOG_GAIN,
    FSM_PARAM_SET_SENSOR_ALLOC_DIGITAL_GAIN,
    FSM_PARAM_SET_SENSOR_ALLOC_INTEGRATION_TIME,
    FSM_PARAM_SET_SENSOR_UPDATE,
    FSM_PARAM_SET_SENSOR_REG,
    FSM_PARAM_SET_SENSOR_END,

    /* CMOS */
    FSM_PARAM_SET_CMOS_START,
    FSM_PARAM_SET_EXPOSURE_TARGET,
    FSM_PARAM_SET_AE_MODE,
    FSM_PARAM_SET_MANUAL_GAIN,
    FSM_PARAM_SET_CMOS_SPLIT_STRATEGY,
    FSM_PARAM_SET_CMOS_END,

    /* CROP */
    FSM_PARAM_SET_CROP_START,
    FSM_PARAM_SET_CROP_SETTING,
    FSM_PARAM_SET_CROP_END,

    /* GENERAL */
    FSM_PARAM_SET_GENERAL_START,
    FSM_PARAM_SET_RELOAD_CALIBRATION,
    FSM_PARAM_SET_WDR_MODE,
    FSM_PARAM_SET_REG_SETTING,
    FSM_PARAM_SET_SCENE_MODE,
    FSM_PARAM_SET_TEMPER_MODE,
    FSM_PARAM_SET_GENERAL_END,

    /* AE */
    FSM_PARAM_SET_AE_START,
    FSM_PARAM_SET_AE_INIT,
    FSM_PARAM_SET_AE_ROI,
    FSM_PARAM_SET_AE_NEW_PARAM,
    FSM_PARAM_SET_AE_END,

    /* AWB */
    FSM_PARAM_SET_AWB_START,
    FSM_PARAM_SET_AWB_NEW_PARAM,
    FSM_PARAM_SET_AWB_STATS,
    FSM_PARAM_SET_AWB_MODE,
    FSM_PARAM_SET_AWB_INFO,
    FSM_PARAM_SET_AWB_END,

    /* COLOR_MATRIX */
    FSM_PARAM_SET_COLOR_MATRIX_START,
    FSM_PARAM_SET_CCM_INFO,
    FSM_PARAM_SET_CCM_CHANGE,
    FSM_PARAM_SET_SHADING_MESH_RELOAD,
    FSM_PARAM_SET_MANUAL_CCM,
    FSM_PARAM_SET_COLOR_MATRIX_END,

    /* IRIDIX */
    FSM_PARAM_SET_IRIDIX_START,
    FSM_PARAM_SET_IRIDIX_INIT,
    FSM_PARAM_SET_IRIDIX_NEW_PARAM,
    FSM_PARAM_SET_IRIDIX_FRAME_ID,
    FSM_PARAM_SET_IRIDIX_END,

    /* SHARPENING */
    FSM_PARAM_SET_SHARPENING_START,
    FSM_PARAM_SET_SHARPENING_MULT,
    FSM_PARAM_SET_SHARPENING_STRENGTH,
    FSM_PARAM_SET_SHARPENING_END,

    /* MATRIX_YUV */
    FSM_PARAM_SET_MATRIX_YUV_START,
    FSM_PARAM_SET_MATRIX_YUV_FR_OUT_FMT,
    FSM_PARAM_SET_MATRIX_YUV_DS1_OUT_FMT,
    FSM_PARAM_SET_MATRIX_YUV_SATURATION_STRENGTH,
    FSM_PARAM_SET_MATRIX_YUV_HUE_THETA,
    FSM_PARAM_SET_MATRIX_YUV_BRIGHTNESS_STRENGTH,
    FSM_PARAM_SET_MATRIX_YUV_CONTRAST_STRENGTH,
    FSM_PARAM_SET_MATRIX_YUV_COLOR_MODE,
    FSM_PARAM_SET_MATRIX_YUV_END,

    /* GAMMA_MANUAL */
    FSM_PARAM_SET_GAMMA_MANUAL_START,
    FSM_PARAM_SET_GAMMA_NEW_PARAM,
    FSM_PARAM_SET_GAMMA_MANUAL_END,

    /* MONITOR */
    FSM_PARAM_SET_MONITOR_START,
    FSM_PARAM_SET_MON_ERROR_REPORT,
    FSM_PARAM_SET_MON_RESET_ERROR,
    FSM_PARAM_SET_MON_AE_FLOW,
    FSM_PARAM_SET_MON_AWB_FLOW,
    FSM_PARAM_SET_MON_GAMMA_FLOW,
    FSM_PARAM_SET_MON_IRIDIX_FLOW,
    FSM_PARAM_SET_MON_STATUS_AE,
    FSM_PARAM_SET_MON_STATUS_AWB,
    FSM_PARAM_SET_MON_STATUS_GAMMA,
    FSM_PARAM_SET_MON_STATUS_IRIDIX,
    FSM_PARAM_SET_MONITOR_END,

    /* SBUF */
    FSM_PARAM_SET_SBUF_START,
    FSM_PARAM_SET_SBUF_CALIBRATION_UPDATE,
    FSM_PARAM_SET_SBUF_END,

    /* DMA_WRITER */
    FSM_PARAM_SET_DMA_WRITER_START,
    FSM_PARAM_SET_DMA_PIPE_SETTING,
    FSM_PARAM_SET_DMA_READER_OUTPUT,
    FSM_PARAM_SET_DMA_VFLIP,
    FSM_PARAM_SET_DMA_WRITER_END,

    /* METADATA */
    FSM_PARAM_SET_METADATA_START,
    FSM_PARAM_SET_META_REGISTER_CB,
    FSM_PARAM_SET_METADATA_END,

    /* AF */
    FSM_PARAM_SET_AF_START,
    FSM_PARAM_SET_AF_MODE,
    FSM_PARAM_SET_AF_MANUAL_POS,
    FSM_PARAM_SET_AF_ROI,
    FSM_PARAM_SET_AF_NEW_PARAM,
    FSM_PARAM_SET_AF_STATS,
    FSM_PARAM_SET_AF_LENS_REG,
    FSM_PARAM_SET_AF_END,

    FSM_PARAM_SET_MAX_ID,
} fsm_param_set_id_t;


typedef enum {
    FSM_PARAM_GET_MIN_ID = 10000,

    /* SENSOR */
    FSM_PARAM_GET_SENSOR_START,
    FSM_PARAM_GET_SENSOR_INFO,
    FSM_PARAM_GET_SENSOR_LINES_SECOND,
    FSM_PARAM_GET_SENSOR_STREAMING,
    FSM_PARAM_GET_SENSOR_PARAM,
    FSM_PARAM_GET_SENSOR_INFO_PRESET_NUM,
    FSM_PARAM_GET_SENSOR_REG,
    FSM_PARAM_GET_SENSOR_ID,
    FSM_PARAM_GET_SENSOR_MAX_RESOLUTION,
    FSM_PARAM_GET_SENSOR_END,

    /* CMOS */
    FSM_PARAM_GET_CMOS_START,
    FSM_PARAM_GET_CMOS_EXPOSURE_LOG2,
    FSM_PARAM_GET_CMOS_EXPOSURE_RATIO,
    FSM_PARAM_GET_FRAME_EXPOSURE_SET,
    FSM_PARAM_GET_CMOS_TOTAL_GAIN,
    FSM_PARAM_GET_FPS,
    FSM_PARAM_GET_AE_MODE,
    FSM_PARAM_GET_GAIN,
    FSM_PARAM_GET_CMOS_EXP_WRITE_SET,
    FSM_PARAM_GET_CMOS_SPLIT_STRATEGY,
    FSM_PARAM_GET_CMOS_END,

    /* CROP */
    FSM_PARAM_GET_CROP_START,
    FSM_PARAM_GET_CROP_INFO,
    FSM_PARAM_GET_CROP_SETTING,
    FSM_PARAM_GET_CROP_END,

    /* GENERAL */
    FSM_PARAM_GET_GENERAL_START,
    FSM_PARAM_GET_WDR_MODE,
    FSM_PARAM_GET_CALC_FE_LUT_OUTPUT,
    FSM_PARAM_GET_REG_SETTING,
    FSM_PARAM_GET_SCENE_MODE,
    FSM_PARAM_GET_TEMPER_MODE,
    FSM_PARAM_GET_GENERAL_END,

    /* AE */
    FSM_PARAM_GET_AE_START,
    FSM_PARAM_GET_AE_INFO,
    FSM_PARAM_GET_AE_HIST_INFO,
    FSM_PARAM_GET_AE_ROI,
    FSM_PARAM_GET_AE_END,

    /* AWB */
    FSM_PARAM_GET_AWB_START,
    FSM_PARAM_GET_AWB_INFO,
    FSM_PARAM_GET_AWB_MODE,
    FSM_PARAM_GET_AWB_END,

    /* COLOR_MATRIX */
    FSM_PARAM_GET_COLOR_MATRIX_START,
    FSM_PARAM_GET_CCM_INFO,
    FSM_PARAM_GET_SHADING_ALPHA,
    FSM_PARAM_GET_COLOR_MATRIX_END,

    /* IRIDIX */
    FSM_PARAM_GET_IRIDIX_START,
    FSM_PARAM_GET_IRIDIX_CONTRAST,
    FSM_PARAM_GET_IRIDIX_END,

    /* SHARPENING */
    FSM_PARAM_GET_SHARPENING_START,
    FSM_PARAM_GET_SHARPENING_STRENGTH,
    FSM_PARAM_GET_SHARPENING_END,

    /* MATRIX_YUV */
    FSM_PARAM_GET_MATRIX_YUV_START,
    FSM_PARAM_GET_MATRIX_YUV_FR_OUT_FMT,
    FSM_PARAM_GET_MATRIX_YUV_DS1_OUT_FMT,
    FSM_PARAM_GET_MATRIX_YUV_SATURATION_STRENGTH,
    FSM_PARAM_GET_MATRIX_YUV_HUE_THETA,
    FSM_PARAM_GET_MATRIX_YUV_BRIGHTNESS_STRENGTH,
    FSM_PARAM_GET_MATRIX_YUV_CONTRAST_STRENGTH,
    FSM_PARAM_GET_MATRIX_YUV_COLOR_MODE,
    FSM_PARAM_GET_MATRIX_YUV_END,

    /* MONITOR */
    FSM_PARAM_GET_MONITOR_START,
    FSM_PARAM_GET_MON_ERROR,
    FSM_PARAM_GET_MON_STATUS_AE,
    FSM_PARAM_GET_MON_STATUS_AWB,
    FSM_PARAM_GET_MON_STATUS_GAMMA,
    FSM_PARAM_GET_MON_STATUS_IRIDIX,
    FSM_PARAM_GET_MONITOR_END,

    /* DMA_WRITER */
    FSM_PARAM_GET_DMA_WRITER_START,
    FSM_PARAM_GET_DMA_READER_OUTPUT,
    FSM_PARAM_GET_DMA_VFLIP,
    FSM_PARAM_GET_DMA_WRITER_END,

    /* AF */
    FSM_PARAM_GET_AF_START,
    FSM_PARAM_GET_AF_INFO,
    FSM_PARAM_GET_AF_MODE,
    FSM_PARAM_GET_LENS_PARAM,
    FSM_PARAM_GET_AF_MANUAL_POS,
    FSM_PARAM_GET_AF_ROI,
    FSM_PARAM_GET_AF_LENS_REG,
    FSM_PARAM_GET_AF_LENS_STATUS,
    FSM_PARAM_GET_AF_END,

    /* FPGA_DMA_FE */
    FSM_PARAM_GET_FPGA_DMA_FE_START,
    FSM_PARAM_GET_DMA_FE_FRAME,
    FSM_PARAM_GET_FPGA_DMA_FE_END,

    FSM_PARAM_GET_MAX_ID,
} fsm_param_get_id_t;


#endif
