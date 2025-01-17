/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "pldm_monitor.h"

#ifndef PLAT_PLDM_MONITOR_H
#define PLAT_PLDM_MONITOR_H

#define MAX_STATE_EFFECTER_IDX 168

enum pldm_plat_effecter_id_high_byte {
	PLAT_EFFECTER_ID_GPIO_HIGH_BYTE = (0xFF << 8),
};

extern struct pldm_state_effecter_info plat_state_effecter_table[];

enum plat_pldm_event_sensor_num {
	// ACCL1 - ACCL12
	PLDM_EVENT_ACCL_1 = 0x01,
	PLDM_EVENT_ACCL_2,
	PLDM_EVENT_ACCL_3,
	PLDM_EVENT_ACCL_4,
	PLDM_EVENT_ACCL_5,
	PLDM_EVENT_ACCL_6,
	PLDM_EVENT_ACCL_7,
	PLDM_EVENT_ACCL_8,
	PLDM_EVENT_ACCL_9,
	PLDM_EVENT_ACCL_10,
	PLDM_EVENT_ACCL_11,
	PLDM_EVENT_ACCL_12,
	PLDM_EVENT_ACCL_PWR_CBL_1,
	PLDM_EVENT_ACCL_PWR_CBL_2,
	PLDM_EVENT_ACCL_PWR_CBL_3,
	PLDM_EVENT_ACCL_PWR_CBL_4,
	PLDM_EVENT_ACCL_PWR_CBL_5,
	PLDM_EVENT_ACCL_PWR_CBL_6,
	PLDM_EVENT_ACCL_PWR_CBL_7,
	PLDM_EVENT_ACCL_PWR_CBL_8,
	PLDM_EVENT_ACCL_PWR_CBL_9,
	PLDM_EVENT_ACCL_PWR_CBL_10,
	PLDM_EVENT_ACCL_PWR_CBL_11,
	PLDM_EVENT_ACCL_PWR_CBL_12,
	PLDM_EVENT_FIO,
	PLDM_EVENT_ACCL_1_DEV_1,
	PLDM_EVENT_ACCL_1_DEV_2,
	PLDM_EVENT_ACCL_2_DEV_1,
	PLDM_EVENT_ACCL_2_DEV_2,
	PLDM_EVENT_ACCL_3_DEV_1,
	PLDM_EVENT_ACCL_3_DEV_2,
	PLDM_EVENT_ACCL_4_DEV_1,
	PLDM_EVENT_ACCL_4_DEV_2,
	PLDM_EVENT_ACCL_5_DEV_1,
	PLDM_EVENT_ACCL_5_DEV_2,
	PLDM_EVENT_ACCL_6_DEV_1,
	PLDM_EVENT_ACCL_6_DEV_2,
	PLDM_EVENT_ACCL_7_DEV_1,
	PLDM_EVENT_ACCL_7_DEV_2,
	PLDM_EVENT_ACCL_8_DEV_1,
	PLDM_EVENT_ACCL_8_DEV_2,
	PLDM_EVENT_ACCL_9_DEV_1,
	PLDM_EVENT_ACCL_9_DEV_2,
	PLDM_EVENT_ACCL_10_DEV_1,
	PLDM_EVENT_ACCL_10_DEV_2,
	PLDM_EVENT_ACCL_11_DEV_1,
	PLDM_EVENT_ACCL_11_DEV_2,
	PLDM_EVENT_ACCL_12_DEV_1,
	PLDM_EVENT_ACCL_12_DEV_2,
};

enum PLDM_ADDSEL_DEVICE_TYPE {
	PLDM_ADDSEL_DEVICE_TYPE_DEFAULT,
	PLDM_ADDSEL_DEVICE_TYPE_P0V8_VDD1_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P0V8_VDD2_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_POWER_BRICK_0_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P1V25_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL1_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL2_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL3_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL4_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL5_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL6_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL7_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL8_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL9_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL10_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL11_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_P12V_ACCL12_MONITOR_ALERT,
	PLDM_ADDSEL_DEVICE_TYPE_PEX_SWITCH_0,
	PLDM_ADDSEL_DEVICE_TYPE_PEX_SWITCH_1,
	PLDM_ADDSEL_DEVICE_TYPE_POWER_BRICK_1_ALERT,
};

enum PLDM_ADDSEL_EVENT_TYPE {
	PLDM_ADDSEL_EVENT_TYPE_DEFAULT,
	PLDM_ADDSEL_OVER_POWER_EVENT,
	PLDM_ADDSEL_OVER_VOLTAGE_EVENT,
	PLDM_ADDSEL_OVER_CURRENT_EVENT,
	PLDM_ADDSEL_UNDER_VOLTAGE_EVENT,
	PLDM_ADDSEL_OVER_TEMPERATURE_EVENT,
	PLDM_ADDSEL_SYSTEM_ERROR,
	PLDM_ADDSEL_PEX_FATAL_ERROR,
	PLDM_ADDSEL_POR_BISR_TIMEOUT,
	PLDM_ADDSEL_FLASH_SIGNATURE_FAIL,
	PLDM_ADDSEL_WATCHDOG_0_TIMEOUT_CPU_CORE_RESET,
	PLDM_ADDSEL_WATCHDOG_0_TIMEOUT_SYSTEM_RESET,
	PLDM_ADDSEL_WATCHDOG_1_TIMEOUT_CPU_CORE_RESET,
	PLDM_ADDSEL_WATCHDOG_1_TIMEOUT_SYSTEM_RESET,
	PLDM_ADDSEL_LOCAL_CPU_PARITY_ERROR,
	PLDM_ADDSEL_SECURE_BOOT_FAIL,
	PLDM_ADDSEL_SBR_LOAD_FAIL,
	PLDM_ADDSEL_STATION_0_FATAL_ERROR,
	PLDM_ADDSEL_STATION_1_FATAL_ERROR,
	PLDM_ADDSEL_STATION_2_FATAL_ERROR,
	PLDM_ADDSEL_STATION_3_FATAL_ERROR,
	PLDM_ADDSEL_STATION_4_FATAL_ERROR,
	PLDM_ADDSEL_STATION_5_FATAL_ERROR,
	PLDM_ADDSEL_STATION_6_FATAL_ERROR,
	PLDM_ADDSEL_STATION_7_FATAL_ERROR,
	PLDM_ADDSEL_STATION_8_FATAL_ERROR,
	PLDM_ADDSEL_PSB_STATION_FATAL_ERROR,
	PLDM_ADDSEL_OUTPUT_VOLTAGE_WARNING_FAULT,
	PLDM_ADDSEL_OUTPUT_CURRENT_WARNING_FAULT,
	PLDM_ADDSEL_INPUT_VOLTAGE_FAULT,
	PLDM_ADDSEL_POWER_GOOD_FAULT,
	PLDM_ADDSEL_POWER_OFF_FAULT,
	PLDM_ADDSEL_TEMPERATURE_WARNING_FAULT,
	PLDM_ADDSEL_CML_FAULT,
	PLDM_ADDSEL_MFR_SPECIFIC_FAULT,
	PLDM_ADDSEL_NO_LISTED_FAULT,
};

enum plat_pldm_device_state_set_offset {
	PLDM_STATE_SET_OFFSET_DEVICE_PRESENCE = 0,
	PLDM_STATE_SET_OFFSET_DEVICE_STATUS = 1,
	PLDM_STATE_SET_OFFSET_DEVICE_POWER_STATUS = 2,
	PLDM_STATE_SET_OFFSET_DEVICE_NVME_STATUS = 3,
};

enum pldm_state_set_oem_device_nvme_status {
	PLDM_STATE_SET_OEM_DEVICE_NVME_UNKNOWN_STATUS,
	PLDM_STATE_SET_OEM_DEVICE_NVME_NOT_READY,
	PLDM_STATE_SET_OEM_DEVICE_NVME_READY,
};

void plat_accl_present_check();
void plat_accl_power_cable_present_check();
void plat_fio_present_check();
void plat_accl_power_good_fail_event(uint8_t card_id, uint8_t current_state);
void plat_accl_cable_power_good_fail_event(uint8_t card_id, uint8_t status);
void plat_asic_nvme_status_event(uint8_t card_id, uint8_t device_id, uint8_t status);
uint8_t plat_set_effecter_states_req(uint8_t device_type, uint8_t board_info, uint8_t event_type);

#endif
