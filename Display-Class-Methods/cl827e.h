/* 
 * Copyright (c) 1993-2014, NVIDIA CORPORATION. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */


#ifndef _cl827e_h_
#define _cl827e_h_

#ifdef __cplusplus
extern "C" {
#endif

#define NV827E_OVERLAY_CHANNEL_DMA                                              (0x0000827E)

#define NV_DISP_NOTIFICATION_1                                                       0x00000000
#define NV_DISP_NOTIFICATION_1_SIZEOF                                                0x00000010
#define NV_DISP_NOTIFICATION_1_TIME_STAMP_0                                          0x00000000
#define NV_DISP_NOTIFICATION_1_TIME_STAMP_0_NANOSECONDS0                             31:0
#define NV_DISP_NOTIFICATION_1_TIME_STAMP_1                                          0x00000001
#define NV_DISP_NOTIFICATION_1_TIME_STAMP_1_NANOSECONDS1                             31:0
#define NV_DISP_NOTIFICATION_1__2                                                    0x00000002
#define NV_DISP_NOTIFICATION_1__2_AUDIT_TIMESTAMP                                    31:0
#define NV_DISP_NOTIFICATION_1__3                                                    0x00000003
#define NV_DISP_NOTIFICATION_1__3_PRESENT_COUNT                                      7:0
#define NV_DISP_NOTIFICATION_1__3_R0                                                 15:8
#define NV_DISP_NOTIFICATION_1__3_STATUS                                             31:16
#define NV_DISP_NOTIFICATION_1__3_STATUS_NOT_BEGUN                                   0x00008000
#define NV_DISP_NOTIFICATION_1__3_STATUS_BEGUN                                       0x0000FFFF
#define NV_DISP_NOTIFICATION_1__3_STATUS_FINISHED                                    0x00000000


#define NV_DISP_NOTIFICATION_INFO16                                                  0x00000000
#define NV_DISP_NOTIFICATION_INFO16_SIZEOF                                           0x00000002
#define NV_DISP_NOTIFICATION_INFO16__0                                               0x00000000
#define NV_DISP_NOTIFICATION_INFO16__0_PRESENT_COUNT                                 7:0
#define NV_DISP_NOTIFICATION_INFO16__0_R0                                            15:8


#define NV_DISP_NOTIFICATION_STATUS                                                  0x00000000
#define NV_DISP_NOTIFICATION_STATUS_SIZEOF                                           0x00000002
#define NV_DISP_NOTIFICATION_STATUS__0                                               0x00000000
#define NV_DISP_NOTIFICATION_STATUS__0_STATUS                                        15:0
#define NV_DISP_NOTIFICATION_STATUS__0_STATUS_NOT_BEGUN                              0x00008000
#define NV_DISP_NOTIFICATION_STATUS__0_STATUS_BEGUN                                  0x0000FFFF
#define NV_DISP_NOTIFICATION_STATUS__0_STATUS_FINISHED                               0x00000000


// dma opcode instructions
#define NV827E_DMA                                                         0x00000000 
#define NV827E_DMA_OPCODE                                                       31:29 
#define NV827E_DMA_OPCODE_METHOD                                           0x00000000 
#define NV827E_DMA_OPCODE_JUMP                                             0x00000001 
#define NV827E_DMA_OPCODE_NONINC_METHOD                                    0x00000002 
#define NV827E_DMA_OPCODE_SET_SUBDEVICE_MASK                               0x00000003 
#define NV827E_DMA_OPCODE                                                       31:29 
#define NV827E_DMA_OPCODE_METHOD                                           0x00000000 
#define NV827E_DMA_OPCODE_NONINC_METHOD                                    0x00000002 
#define NV827E_DMA_METHOD_COUNT                                                 27:18 
#define NV827E_DMA_METHOD_OFFSET                                                 11:2 
#define NV827E_DMA_DATA                                                          31:0 
#define NV827E_DMA_NOP                                                     0x00000000 
#define NV827E_DMA_OPCODE                                                       31:29 
#define NV827E_DMA_OPCODE_JUMP                                             0x00000001 
#define NV827E_DMA_JUMP_OFFSET                                                   11:2 
#define NV827E_DMA_OPCODE                                                       31:29 
#define NV827E_DMA_OPCODE_SET_SUBDEVICE_MASK                               0x00000003 
#define NV827E_DMA_SET_SUBDEVICE_MASK_VALUE                                      11:0 

// class methods
#define NV827E_PUT                                                              (0x00000000)
#define NV827E_PUT_PTR                                                          11:2
#define NV827E_GET                                                              (0x00000004)
#define NV827E_GET_PTR                                                          11:2
#define NV827E_UPDATE                                                           (0x00000080)
#define NV827E_UPDATE_INTERLOCK_WITH_CORE                                       0:0
#define NV827E_UPDATE_INTERLOCK_WITH_CORE_DISABLE                               (0x00000000)
#define NV827E_UPDATE_INTERLOCK_WITH_CORE_ENABLE                                (0x00000001)
#define NV827E_SET_PRESENT_CONTROL                                              (0x00000084)
#define NV827E_SET_PRESENT_CONTROL_BEGIN_MODE                                   1:0
#define NV827E_SET_PRESENT_CONTROL_BEGIN_MODE_ASAP                              (0x00000000)
#define NV827E_SET_PRESENT_CONTROL_BEGIN_MODE_TIMESTAMP                         (0x00000003)
#define NV827E_SET_PRESENT_CONTROL_MIN_PRESENT_INTERVAL                         7:4
#define NV827E_SET_SEMAPHORE_ACQUIRE                                            (0x00000088)
#define NV827E_SET_SEMAPHORE_ACQUIRE_VALUE                                      31:0
#define NV827E_SET_SEMAPHORE_RELEASE                                            (0x0000008C)
#define NV827E_SET_SEMAPHORE_RELEASE_VALUE                                      31:0
#define NV827E_SET_SEMAPHORE_CONTROL                                            (0x00000090)
#define NV827E_SET_SEMAPHORE_CONTROL_OFFSET                                     11:2
#define NV827E_SET_CONTEXT_DMA_SEMAPHORE                                        (0x00000094)
#define NV827E_SET_CONTEXT_DMA_SEMAPHORE_HANDLE                                 31:0
#define NV827E_SET_NOTIFIER_CONTROL                                             (0x000000A0)
#define NV827E_SET_NOTIFIER_CONTROL_MODE                                        30:30
#define NV827E_SET_NOTIFIER_CONTROL_MODE_WRITE                                  (0x00000000)
#define NV827E_SET_NOTIFIER_CONTROL_MODE_WRITE_AWAKEN                           (0x00000001)
#define NV827E_SET_NOTIFIER_CONTROL_OFFSET                                      11:2
#define NV827E_SET_CONTEXT_DMA_NOTIFIER                                         (0x000000A4)
#define NV827E_SET_CONTEXT_DMA_NOTIFIER_HANDLE                                  31:0
#define NV827E_SET_CONTEXT_DMA_ISO                                              (0x000000C0)
#define NV827E_SET_CONTEXT_DMA_ISO_HANDLE                                       31:0
#define NV827E_SET_POINT_IN                                                     (0x000000E0)
#define NV827E_SET_POINT_IN_X                                                   14:0
#define NV827E_SET_POINT_IN_Y                                                   30:16
#define NV827E_SET_SIZE_IN                                                      (0x000000E4)
#define NV827E_SET_SIZE_IN_WIDTH                                                14:0
#define NV827E_SET_SIZE_IN_HEIGHT                                               30:16
#define NV827E_SET_SIZE_OUT                                                     (0x000000E8)
#define NV827E_SET_SIZE_OUT_WIDTH                                               14:0
#define NV827E_SET_COMPOSITION_CONTROL                                          (0x00000100)
#define NV827E_SET_COMPOSITION_CONTROL_MODE                                     3:0
#define NV827E_SET_COMPOSITION_CONTROL_MODE_SOURCE_COLOR_VALUE_KEYING           (0x00000000)
#define NV827E_SET_COMPOSITION_CONTROL_MODE_DESTINATION_COLOR_VALUE_KEYING      (0x00000001)
#define NV827E_SET_COMPOSITION_CONTROL_MODE_OPAQUE_SUSPEND_BASE                 (0x00000002)
#define NV827E_SET_KEY_COLOR                                                    (0x00000104)
#define NV827E_SET_KEY_COLOR_COLOR                                              31:0
#define NV827E_SET_KEY_MASK                                                     (0x00000108)
#define NV827E_SET_KEY_MASK_MASK                                                31:0
#define NV827E_SET_TIMESTAMP_ORIGIN_LO                                          (0x00000130)
#define NV827E_SET_TIMESTAMP_ORIGIN_LO_TIMESTAMP_LO                             31:0
#define NV827E_SET_TIMESTAMP_ORIGIN_HI                                          (0x00000134)
#define NV827E_SET_TIMESTAMP_ORIGIN_HI_TIMESTAMP_HI                             31:0
#define NV827E_SET_UPDATE_TIMESTAMP_LO                                          (0x00000138)
#define NV827E_SET_UPDATE_TIMESTAMP_LO_TIMESTAMP_LO                             31:0
#define NV827E_SET_UPDATE_TIMESTAMP_HI                                          (0x0000013C)
#define NV827E_SET_UPDATE_TIMESTAMP_HI_TIMESTAMP_HI                             31:0
#define NV827E_SET_SPARE                                                        (0x000007BC)
#define NV827E_SET_SPARE_UNUSED                                                 31:0
#define NV827E_SET_SPARE_NOOP(b)                                                (0x000007C0 + (b)*0x00000004)
#define NV827E_SET_SPARE_NOOP_UNUSED                                            31:0

#define NV827E_SURFACE_SET_OFFSET                                               (0x00000800)
#define NV827E_SURFACE_SET_OFFSET_ORIGIN                                        31:0
#define NV827E_SURFACE_SET_SIZE                                                 (0x00000808)
#define NV827E_SURFACE_SET_SIZE_WIDTH                                           14:0
#define NV827E_SURFACE_SET_SIZE_HEIGHT                                          30:16
#define NV827E_SURFACE_SET_STORAGE                                              (0x0000080C)
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT                                 3:0
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT_ONE_GOB                         (0x00000000)
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT_TWO_GOBS                        (0x00000001)
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT_FOUR_GOBS                       (0x00000002)
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT_EIGHT_GOBS                      (0x00000003)
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT_SIXTEEN_GOBS                    (0x00000004)
#define NV827E_SURFACE_SET_STORAGE_BLOCK_HEIGHT_THIRTYTWO_GOBS                  (0x00000005)
#define NV827E_SURFACE_SET_STORAGE_PITCH                                        17:8
#define NV827E_SURFACE_SET_STORAGE_MEMORY_LAYOUT                                20:20
#define NV827E_SURFACE_SET_STORAGE_MEMORY_LAYOUT_BLOCKLINEAR                    (0x00000000)
#define NV827E_SURFACE_SET_STORAGE_MEMORY_LAYOUT_PITCH                          (0x00000001)
#define NV827E_SURFACE_SET_PARAMS                                               (0x00000810)
#define NV827E_SURFACE_SET_PARAMS_FORMAT                                        15:8
#define NV827E_SURFACE_SET_PARAMS_FORMAT_VE8YO8UE8YE8                           (0x00000028)
#define NV827E_SURFACE_SET_PARAMS_FORMAT_YO8VE8YE8UE8                           (0x00000029)
#define NV827E_SURFACE_SET_PARAMS_FORMAT_A2B10G10R10                            (0x000000D1)
#define NV827E_SURFACE_SET_PARAMS_FORMAT_A8R8G8B8                               (0x000000CF)
#define NV827E_SURFACE_SET_PARAMS_FORMAT_A1R5G5B5                               (0x000000E9)
#define NV827E_SURFACE_SET_PARAMS_COLOR_SPACE                                   1:0
#define NV827E_SURFACE_SET_PARAMS_COLOR_SPACE_RGB                               (0x00000000)
#define NV827E_SURFACE_SET_PARAMS_COLOR_SPACE_YUV_601                           (0x00000001)
#define NV827E_SURFACE_SET_PARAMS_COLOR_SPACE_YUV_709                           (0x00000002)
#define NV827E_SURFACE_SET_PARAMS_RESERVED0                                     22:16
#define NV827E_SURFACE_SET_PARAMS_RESERVED1                                     24:24

#ifdef __cplusplus
};     /* extern "C" */
#endif
#endif // _cl827e_h

