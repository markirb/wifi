/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CS_MOS_LIBS_WIFI_ESP32_SRC_ESP32_WIFI_H_
#define CS_MOS_LIBS_WIFI_ESP32_SRC_ESP32_WIFI_H_

#include "esp_event.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t esp32_wifi_ev(system_event_t *event);
esp_err_t esp32_wifi_protocol_setup(wifi_interface_t ifx, const char *prot);

#ifdef __cplusplus
}
#endif

#endif /* CS_MOS_LIBS_WIFI_ESP32_SRC_ESP32_WIFI_H_ */
