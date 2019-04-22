/*******************************************************************************
    Copyright (c) 2016 NVIDIA Corporation

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to
    deal in the Software without restriction, including without limitation the
    rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
    sell copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

        The above copyright notice and this permission notice shall be
        included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.

*******************************************************************************/

/* AUTO GENERATED FILE -- DO NOT EDIT */

#ifndef __CLA1C0QMD_H__
#define __CLA1C0QMD_H__

/*
** Queue Meta Data, Version 00_06
 */

// The below C preprocessor definitions describe "multi-word" structures, where
// fields may have bit numbers beyond 32.  For example, MW(127:96) means
// the field is in bits 0-31 of word number 3 of the structure.  The "MW(X:Y)"
// syntax is to distinguish from similar "X:Y" single-word definitions: the
// macros historically used for single-word definitions would fail with
// multi-word definitions.
//
// See nvmisc.h:DRF_VAL_MW() in the source code of the kernel
// interface layer of nvidia.ko for an example of how to manipulate
// these MW(X:Y) definitions.

#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_A                         MW(30:0)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_B                         MW(31:31)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_C                         MW(62:32)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_D                         MW(63:63)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_E                         MW(94:64)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_F                         MW(95:95)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_G                         MW(126:96)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_H                         MW(127:127)
#define NVA1C0_QMDV00_06_QMD_RESERVED_A_A                          MW(159:128)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_I                         MW(191:160)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_J                         MW(196:192)
#define NVA1C0_QMDV00_06_QMD_RESERVED_A                            MW(199:197)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_K                         MW(200:200)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_K_FALSE                   0x00000000
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_K_TRUE                    0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_L                         MW(201:201)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_L_FALSE                   0x00000000
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_L_TRUE                    0x00000001
#define NVA1C0_QMDV00_06_SEMAPHORE_RELEASE_ENABLE0                 MW(202:202)
#define NVA1C0_QMDV00_06_SEMAPHORE_RELEASE_ENABLE0_FALSE           0x00000000
#define NVA1C0_QMDV00_06_SEMAPHORE_RELEASE_ENABLE0_TRUE            0x00000001
#define NVA1C0_QMDV00_06_SEMAPHORE_RELEASE_ENABLE1                 MW(203:203)
#define NVA1C0_QMDV00_06_SEMAPHORE_RELEASE_ENABLE1_FALSE           0x00000000
#define NVA1C0_QMDV00_06_SEMAPHORE_RELEASE_ENABLE1_TRUE            0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_B                            MW(207:204)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_M                         MW(222:208)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_N                         MW(223:223)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_N_FALSE                   0x00000000
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_N_TRUE                    0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_O                         MW(248:224)
#define NVA1C0_QMDV00_06_QMD_RESERVED_C                            MW(249:249)
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_HEADER_CACHE           MW(250:250)
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_HEADER_CACHE_FALSE     0x00000000
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_HEADER_CACHE_TRUE      0x00000001
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_SAMPLER_CACHE          MW(251:251)
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_SAMPLER_CACHE_FALSE    0x00000000
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_SAMPLER_CACHE_TRUE     0x00000001
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_DATA_CACHE             MW(252:252)
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_DATA_CACHE_FALSE       0x00000000
#define NVA1C0_QMDV00_06_INVALIDATE_TEXTURE_DATA_CACHE_TRUE        0x00000001
#define NVA1C0_QMDV00_06_INVALIDATE_SHADER_DATA_CACHE              MW(253:253)
#define NVA1C0_QMDV00_06_INVALIDATE_SHADER_DATA_CACHE_FALSE        0x00000000
#define NVA1C0_QMDV00_06_INVALIDATE_SHADER_DATA_CACHE_TRUE         0x00000001
#define NVA1C0_QMDV00_06_INVALIDATE_INSTRUCTION_CACHE              MW(254:254)
#define NVA1C0_QMDV00_06_INVALIDATE_INSTRUCTION_CACHE_FALSE        0x00000000
#define NVA1C0_QMDV00_06_INVALIDATE_INSTRUCTION_CACHE_TRUE         0x00000001
#define NVA1C0_QMDV00_06_INVALIDATE_SHADER_CONSTANT_CACHE          MW(255:255)
#define NVA1C0_QMDV00_06_INVALIDATE_SHADER_CONSTANT_CACHE_FALSE    0x00000000
#define NVA1C0_QMDV00_06_INVALIDATE_SHADER_CONSTANT_CACHE_TRUE     0x00000001
#define NVA1C0_QMDV00_06_PROGRAM_OFFSET                            MW(287:256)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_P                         MW(319:288)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_Q                         MW(327:320)
#define NVA1C0_QMDV00_06_QMD_RESERVED_D                            MW(335:328)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_R                         MW(351:336)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_S                         MW(357:352)
#define NVA1C0_QMDV00_06_QMD_RESERVED_E                            MW(365:358)
#define NVA1C0_QMDV00_06_RELEASE_MEMBAR_TYPE                       MW(366:366)
#define NVA1C0_QMDV00_06_RELEASE_MEMBAR_TYPE_FE_NONE               0x00000000
#define NVA1C0_QMDV00_06_RELEASE_MEMBAR_TYPE_FE_SYSMEMBAR          0x00000001
#define NVA1C0_QMDV00_06_CWD_MEMBAR_TYPE                           MW(369:368)
#define NVA1C0_QMDV00_06_CWD_MEMBAR_TYPE_L1_NONE                   0x00000000
#define NVA1C0_QMDV00_06_CWD_MEMBAR_TYPE_L1_SYSMEMBAR              0x00000001
#define NVA1C0_QMDV00_06_CWD_MEMBAR_TYPE_L1_MEMBAR                 0x00000003
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_T                         MW(370:370)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_T_FALSE                   0x00000000
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_T_TRUE                    0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_U                         MW(371:371)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_U_FALSE                   0x00000000
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_U_TRUE                    0x00000001
#define NVA1C0_QMDV00_06_THROTTLED                                 MW(372:372)
#define NVA1C0_QMDV00_06_THROTTLED_FALSE                           0x00000000
#define NVA1C0_QMDV00_06_THROTTLED_TRUE                            0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_E2_A                         MW(376:376)
#define NVA1C0_QMDV00_06_QMD_RESERVED_E2_B                         MW(377:377)
#define NVA1C0_QMDV00_06_API_VISIBLE_CALL_LIMIT                    MW(378:378)
#define NVA1C0_QMDV00_06_API_VISIBLE_CALL_LIMIT__32                0x00000000
#define NVA1C0_QMDV00_06_API_VISIBLE_CALL_LIMIT_NO_CHECK           0x00000001
#define NVA1C0_QMDV00_06_SHARED_MEMORY_BANK_MAPPING                MW(379:379)
#define NVA1C0_QMDV00_06_SHARED_MEMORY_BANK_MAPPING_FOUR_BYTES_PER_BANK 0x00000000
#define NVA1C0_QMDV00_06_SHARED_MEMORY_BANK_MAPPING_EIGHT_BYTES_PER_BANK 0x00000001
#define NVA1C0_QMDV00_06_SAMPLER_INDEX                             MW(382:382)
#define NVA1C0_QMDV00_06_SAMPLER_INDEX_INDEPENDENTLY               0x00000000
#define NVA1C0_QMDV00_06_SAMPLER_INDEX_VIA_HEADER_INDEX            0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_E3_A                         MW(383:383)
#define NVA1C0_QMDV00_06_CTA_RASTER_WIDTH                          MW(415:384)
#define NVA1C0_QMDV00_06_CTA_RASTER_HEIGHT                         MW(431:416)
#define NVA1C0_QMDV00_06_CTA_RASTER_DEPTH                          MW(447:432)
#define NVA1C0_QMDV00_06_CTA_RASTER_WIDTH_RESUME                   MW(479:448)
#define NVA1C0_QMDV00_06_CTA_RASTER_HEIGHT_RESUME                  MW(495:480)
#define NVA1C0_QMDV00_06_CTA_RASTER_DEPTH_RESUME                   MW(511:496)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_V                         MW(535:512)
#define NVA1C0_QMDV00_06_QMD_RESERVED_F                            MW(542:536)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_W                         MW(543:543)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_W_FALSE                   0x00000000
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_W_TRUE                    0x00000001
#define NVA1C0_QMDV00_06_SHARED_MEMORY_SIZE                        MW(561:544)
#define NVA1C0_QMDV00_06_QMD_RESERVED_G                            MW(575:562)
#define NVA1C0_QMDV00_06_QMD_VERSION                               MW(579:576)
#define NVA1C0_QMDV00_06_QMD_MAJOR_VERSION                         MW(583:580)
#define NVA1C0_QMDV00_06_QMD_RESERVED_H                            MW(591:584)
#define NVA1C0_QMDV00_06_CTA_THREAD_DIMENSION0                     MW(607:592)
#define NVA1C0_QMDV00_06_CTA_THREAD_DIMENSION1                     MW(623:608)
#define NVA1C0_QMDV00_06_CTA_THREAD_DIMENSION2                     MW(639:624)
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_VALID(i)                  MW((640+(i)*1):(640+(i)*1))
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_VALID_FALSE               0x00000000
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_VALID_TRUE                0x00000001
#define NVA1C0_QMDV00_06_QMD_RESERVED_I                            MW(668:648)
#define NVA1C0_QMDV00_06_L1_CONFIGURATION                          MW(671:669)
#define NVA1C0_QMDV00_06_L1_CONFIGURATION_DIRECTLY_ADDRESSABLE_MEMORY_SIZE_16KB 0x00000001
#define NVA1C0_QMDV00_06_L1_CONFIGURATION_DIRECTLY_ADDRESSABLE_MEMORY_SIZE_32KB 0x00000002
#define NVA1C0_QMDV00_06_L1_CONFIGURATION_DIRECTLY_ADDRESSABLE_MEMORY_SIZE_48KB 0x00000003
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_X                         MW(703:672)
#define NVA1C0_QMDV00_06_QMD_RESERVED_V1_Y                         MW(735:704)
#define NVA1C0_QMDV00_06_RELEASE0_ADDRESS_LOWER                    MW(767:736)
#define NVA1C0_QMDV00_06_RELEASE0_ADDRESS_UPPER                    MW(775:768)
#define NVA1C0_QMDV00_06_QMD_RESERVED_J                            MW(783:776)
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP                     MW(790:788)
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_ADD             0x00000000
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_MIN             0x00000001
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_MAX             0x00000002
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_INC             0x00000003
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_DEC             0x00000004
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_AND             0x00000005
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_OR              0x00000006
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_OP_RED_XOR             0x00000007
#define NVA1C0_QMDV00_06_QMD_RESERVED_K                            MW(791:791)
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_FORMAT                 MW(793:792)
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_FORMAT_UNSIGNED_32     0x00000000
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_FORMAT_SIGNED_32       0x00000001
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_ENABLE                 MW(794:794)
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_ENABLE_FALSE           0x00000000
#define NVA1C0_QMDV00_06_RELEASE0_REDUCTION_ENABLE_TRUE            0x00000001
#define NVA1C0_QMDV00_06_RELEASE0_STRUCTURE_SIZE                   MW(799:799)
#define NVA1C0_QMDV00_06_RELEASE0_STRUCTURE_SIZE_FOUR_WORDS        0x00000000
#define NVA1C0_QMDV00_06_RELEASE0_STRUCTURE_SIZE_ONE_WORD          0x00000001
#define NVA1C0_QMDV00_06_RELEASE0_PAYLOAD                          MW(831:800)
#define NVA1C0_QMDV00_06_RELEASE1_ADDRESS_LOWER                    MW(863:832)
#define NVA1C0_QMDV00_06_RELEASE1_ADDRESS_UPPER                    MW(871:864)
#define NVA1C0_QMDV00_06_QMD_RESERVED_L                            MW(879:872)
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP                     MW(886:884)
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_ADD             0x00000000
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_MIN             0x00000001
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_MAX             0x00000002
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_INC             0x00000003
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_DEC             0x00000004
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_AND             0x00000005
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_OR              0x00000006
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_OP_RED_XOR             0x00000007
#define NVA1C0_QMDV00_06_QMD_RESERVED_M                            MW(887:887)
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_FORMAT                 MW(889:888)
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_FORMAT_UNSIGNED_32     0x00000000
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_FORMAT_SIGNED_32       0x00000001
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_ENABLE                 MW(890:890)
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_ENABLE_FALSE           0x00000000
#define NVA1C0_QMDV00_06_RELEASE1_REDUCTION_ENABLE_TRUE            0x00000001
#define NVA1C0_QMDV00_06_RELEASE1_STRUCTURE_SIZE                   MW(895:895)
#define NVA1C0_QMDV00_06_RELEASE1_STRUCTURE_SIZE_FOUR_WORDS        0x00000000
#define NVA1C0_QMDV00_06_RELEASE1_STRUCTURE_SIZE_ONE_WORD          0x00000001
#define NVA1C0_QMDV00_06_RELEASE1_PAYLOAD                          MW(927:896)
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_ADDR_LOWER(i)             MW((959+(i)*64):(928+(i)*64))
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_ADDR_UPPER(i)             MW((967+(i)*64):(960+(i)*64))
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_RESERVED_ADDR(i)          MW((973+(i)*64):(968+(i)*64))
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_INVALIDATE(i)             MW((974+(i)*64):(974+(i)*64))
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_INVALIDATE_FALSE          0x00000000
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_INVALIDATE_TRUE           0x00000001
#define NVA1C0_QMDV00_06_CONSTANT_BUFFER_SIZE(i)                   MW((991+(i)*64):(975+(i)*64))
#define NVA1C0_QMDV00_06_SHADER_LOCAL_MEMORY_LOW_SIZE              MW(1463:1440)
#define NVA1C0_QMDV00_06_QMD_RESERVED_N                            MW(1466:1464)
#define NVA1C0_QMDV00_06_BARRIER_COUNT                             MW(1471:1467)
#define NVA1C0_QMDV00_06_SHADER_LOCAL_MEMORY_HIGH_SIZE             MW(1495:1472)
#define NVA1C0_QMDV00_06_REGISTER_COUNT                            MW(1503:1496)
#define NVA1C0_QMDV00_06_SHADER_LOCAL_MEMORY_CRS_SIZE              MW(1527:1504)
#define NVA1C0_QMDV00_06_SASS_VERSION                              MW(1535:1528)
#define NVA1C0_QMDV00_06_QMD_SPARE_A                               MW(1567:1536)
#define NVA1C0_QMDV00_06_QMD_SPARE_B                               MW(1599:1568)
#define NVA1C0_QMDV00_06_QMD_SPARE_C                               MW(1631:1600)
#define NVA1C0_QMDV00_06_QMD_SPARE_D                               MW(1663:1632)
#define NVA1C0_QMDV00_06_QMD_SPARE_E                               MW(1695:1664)
#define NVA1C0_QMDV00_06_QMD_SPARE_F                               MW(1727:1696)
#define NVA1C0_QMDV00_06_QMD_SPARE_G                               MW(1759:1728)
#define NVA1C0_QMDV00_06_QMD_SPARE_H                               MW(1791:1760)
#define NVA1C0_QMDV00_06_QMD_SPARE_I                               MW(1823:1792)
#define NVA1C0_QMDV00_06_QMD_SPARE_J                               MW(1855:1824)
#define NVA1C0_QMDV00_06_QMD_SPARE_K                               MW(1887:1856)
#define NVA1C0_QMDV00_06_QMD_SPARE_L                               MW(1919:1888)
#define NVA1C0_QMDV00_06_QMD_SPARE_M                               MW(1951:1920)
#define NVA1C0_QMDV00_06_QMD_SPARE_N                               MW(1983:1952)
#define NVA1C0_QMDV00_06_DEBUG_ID_UPPER                            MW(2015:1984)
#define NVA1C0_QMDV00_06_DEBUG_ID_LOWER                            MW(2047:2016)


/*
** Queue Meta Data, Version 01_07
 */

#define NVA1C0_QMDV01_07_OUTER_PUT                                 MW(30:0)
#define NVA1C0_QMDV01_07_OUTER_OVERFLOW                            MW(31:31)
#define NVA1C0_QMDV01_07_OUTER_GET                                 MW(62:32)
#define NVA1C0_QMDV01_07_OUTER_STICKY_OVERFLOW                     MW(63:63)
#define NVA1C0_QMDV01_07_INNER_GET                                 MW(94:64)
#define NVA1C0_QMDV01_07_INNER_OVERFLOW                            MW(95:95)
#define NVA1C0_QMDV01_07_INNER_PUT                                 MW(126:96)
#define NVA1C0_QMDV01_07_INNER_STICKY_OVERFLOW                     MW(127:127)
#define NVA1C0_QMDV01_07_QMD_RESERVED_A_A                          MW(159:128)
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_POINTER                     MW(191:160)
#define NVA1C0_QMDV01_07_QMD_GROUP_ID                              MW(197:192)
#define NVA1C0_QMDV01_07_QMD_RESERVED_A                            MW(199:198)
#define NVA1C0_QMDV01_07_IS_QUEUE                                  MW(200:200)
#define NVA1C0_QMDV01_07_IS_QUEUE_FALSE                            0x00000000
#define NVA1C0_QMDV01_07_IS_QUEUE_TRUE                             0x00000001
#define NVA1C0_QMDV01_07_ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST      MW(201:201)
#define NVA1C0_QMDV01_07_ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST_FALSE 0x00000000
#define NVA1C0_QMDV01_07_ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST_TRUE 0x00000001
#define NVA1C0_QMDV01_07_SEMAPHORE_RELEASE_ENABLE0                 MW(202:202)
#define NVA1C0_QMDV01_07_SEMAPHORE_RELEASE_ENABLE0_FALSE           0x00000000
#define NVA1C0_QMDV01_07_SEMAPHORE_RELEASE_ENABLE0_TRUE            0x00000001
#define NVA1C0_QMDV01_07_SEMAPHORE_RELEASE_ENABLE1                 MW(203:203)
#define NVA1C0_QMDV01_07_SEMAPHORE_RELEASE_ENABLE1_FALSE           0x00000000
#define NVA1C0_QMDV01_07_SEMAPHORE_RELEASE_ENABLE1_TRUE            0x00000001
#define NVA1C0_QMDV01_07_REQUIRE_SCHEDULING_PCAS                   MW(204:204)
#define NVA1C0_QMDV01_07_REQUIRE_SCHEDULING_PCAS_FALSE             0x00000000
#define NVA1C0_QMDV01_07_REQUIRE_SCHEDULING_PCAS_TRUE              0x00000001
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_SCHEDULE_ENABLE             MW(205:205)
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_SCHEDULE_ENABLE_FALSE       0x00000000
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_SCHEDULE_ENABLE_TRUE        0x00000001
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_TYPE                        MW(206:206)
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_TYPE_QUEUE                  0x00000000
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_TYPE_GRID                   0x00000001
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_FIELD_COPY                  MW(207:207)
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_FIELD_COPY_FALSE            0x00000000
#define NVA1C0_QMDV01_07_DEPENDENT_QMD_FIELD_COPY_TRUE             0x00000001
#define NVA1C0_QMDV01_07_QMD_RESERVED_B                            MW(223:208)
#define NVA1C0_QMDV01_07_CIRCULAR_QUEUE_SIZE                       MW(248:224)
#define NVA1C0_QMDV01_07_QMD_RESERVED_C                            MW(249:249)
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_HEADER_CACHE           MW(250:250)
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_HEADER_CACHE_FALSE     0x00000000
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_HEADER_CACHE_TRUE      0x00000001
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_SAMPLER_CACHE          MW(251:251)
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_SAMPLER_CACHE_FALSE    0x00000000
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_SAMPLER_CACHE_TRUE     0x00000001
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_DATA_CACHE             MW(252:252)
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_DATA_CACHE_FALSE       0x00000000
#define NVA1C0_QMDV01_07_INVALIDATE_TEXTURE_DATA_CACHE_TRUE        0x00000001
#define NVA1C0_QMDV01_07_INVALIDATE_SHADER_DATA_CACHE              MW(253:253)
#define NVA1C0_QMDV01_07_INVALIDATE_SHADER_DATA_CACHE_FALSE        0x00000000
#define NVA1C0_QMDV01_07_INVALIDATE_SHADER_DATA_CACHE_TRUE         0x00000001
#define NVA1C0_QMDV01_07_INVALIDATE_INSTRUCTION_CACHE              MW(254:254)
#define NVA1C0_QMDV01_07_INVALIDATE_INSTRUCTION_CACHE_FALSE        0x00000000
#define NVA1C0_QMDV01_07_INVALIDATE_INSTRUCTION_CACHE_TRUE         0x00000001
#define NVA1C0_QMDV01_07_INVALIDATE_SHADER_CONSTANT_CACHE          MW(255:255)
#define NVA1C0_QMDV01_07_INVALIDATE_SHADER_CONSTANT_CACHE_FALSE    0x00000000
#define NVA1C0_QMDV01_07_INVALIDATE_SHADER_CONSTANT_CACHE_TRUE     0x00000001
#define NVA1C0_QMDV01_07_PROGRAM_OFFSET                            MW(287:256)
#define NVA1C0_QMDV01_07_CIRCULAR_QUEUE_ADDR_LOWER                 MW(319:288)
#define NVA1C0_QMDV01_07_CIRCULAR_QUEUE_ADDR_UPPER                 MW(327:320)
#define NVA1C0_QMDV01_07_QMD_RESERVED_D                            MW(335:328)
#define NVA1C0_QMDV01_07_CIRCULAR_QUEUE_ENTRY_SIZE                 MW(351:336)
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_ID                    MW(357:352)
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_DELTA_MINUS_ONE       MW(365:358)
#define NVA1C0_QMDV01_07_RELEASE_MEMBAR_TYPE                       MW(366:366)
#define NVA1C0_QMDV01_07_RELEASE_MEMBAR_TYPE_FE_NONE               0x00000000
#define NVA1C0_QMDV01_07_RELEASE_MEMBAR_TYPE_FE_SYSMEMBAR          0x00000001
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_INCR_ENABLE           MW(367:367)
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_INCR_ENABLE_FALSE     0x00000000
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_INCR_ENABLE_TRUE      0x00000001
#define NVA1C0_QMDV01_07_CWD_MEMBAR_TYPE                           MW(369:368)
#define NVA1C0_QMDV01_07_CWD_MEMBAR_TYPE_L1_NONE                   0x00000000
#define NVA1C0_QMDV01_07_CWD_MEMBAR_TYPE_L1_SYSMEMBAR              0x00000001
#define NVA1C0_QMDV01_07_CWD_MEMBAR_TYPE_L1_MEMBAR                 0x00000003
#define NVA1C0_QMDV01_07_SEQUENTIALLY_RUN_CTAS                     MW(370:370)
#define NVA1C0_QMDV01_07_SEQUENTIALLY_RUN_CTAS_FALSE               0x00000000
#define NVA1C0_QMDV01_07_SEQUENTIALLY_RUN_CTAS_TRUE                0x00000001
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_DECR_ENABLE           MW(371:371)
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_DECR_ENABLE_FALSE     0x00000000
#define NVA1C0_QMDV01_07_CWD_REFERENCE_COUNT_DECR_ENABLE_TRUE      0x00000001
#define NVA1C0_QMDV01_07_THROTTLED                                 MW(372:372)
#define NVA1C0_QMDV01_07_THROTTLED_FALSE                           0x00000000
#define NVA1C0_QMDV01_07_THROTTLED_TRUE                            0x00000001
#define NVA1C0_QMDV01_07_FP32_NAN_BEHAVIOR                         MW(376:376)
#define NVA1C0_QMDV01_07_FP32_NAN_BEHAVIOR_LEGACY                  0x00000000
#define NVA1C0_QMDV01_07_FP32_NAN_BEHAVIOR_FP64_COMPATIBLE         0x00000001
#define NVA1C0_QMDV01_07_FP32_F2I_NAN_BEHAVIOR                     MW(377:377)
#define NVA1C0_QMDV01_07_FP32_F2I_NAN_BEHAVIOR_PASS_ZERO           0x00000000
#define NVA1C0_QMDV01_07_FP32_F2I_NAN_BEHAVIOR_PASS_INDEFINITE     0x00000001
#define NVA1C0_QMDV01_07_API_VISIBLE_CALL_LIMIT                    MW(378:378)
#define NVA1C0_QMDV01_07_API_VISIBLE_CALL_LIMIT__32                0x00000000
#define NVA1C0_QMDV01_07_API_VISIBLE_CALL_LIMIT_NO_CHECK           0x00000001
#define NVA1C0_QMDV01_07_SHARED_MEMORY_BANK_MAPPING                MW(379:379)
#define NVA1C0_QMDV01_07_SHARED_MEMORY_BANK_MAPPING_FOUR_BYTES_PER_BANK 0x00000000
#define NVA1C0_QMDV01_07_SHARED_MEMORY_BANK_MAPPING_EIGHT_BYTES_PER_BANK 0x00000001
#define NVA1C0_QMDV01_07_SAMPLER_INDEX                             MW(382:382)
#define NVA1C0_QMDV01_07_SAMPLER_INDEX_INDEPENDENTLY               0x00000000
#define NVA1C0_QMDV01_07_SAMPLER_INDEX_VIA_HEADER_INDEX            0x00000001
#define NVA1C0_QMDV01_07_FP32_NARROW_INSTRUCTION                   MW(383:383)
#define NVA1C0_QMDV01_07_FP32_NARROW_INSTRUCTION_KEEP_DENORMS      0x00000000
#define NVA1C0_QMDV01_07_FP32_NARROW_INSTRUCTION_FLUSH_DENORMS     0x00000001
#define NVA1C0_QMDV01_07_CTA_RASTER_WIDTH                          MW(415:384)
#define NVA1C0_QMDV01_07_CTA_RASTER_HEIGHT                         MW(431:416)
#define NVA1C0_QMDV01_07_CTA_RASTER_DEPTH                          MW(447:432)
#define NVA1C0_QMDV01_07_CTA_RASTER_WIDTH_RESUME                   MW(479:448)
#define NVA1C0_QMDV01_07_CTA_RASTER_HEIGHT_RESUME                  MW(495:480)
#define NVA1C0_QMDV01_07_CTA_RASTER_DEPTH_RESUME                   MW(511:496)
#define NVA1C0_QMDV01_07_QUEUE_ENTRIES_PER_CTA_MINUS_ONE           MW(518:512)
#define NVA1C0_QMDV01_07_COALESCE_WAITING_PERIOD                   MW(529:522)
#define NVA1C0_QMDV01_07_SHARED_MEMORY_SIZE                        MW(561:544)
#define NVA1C0_QMDV01_07_QMD_RESERVED_G                            MW(575:562)
#define NVA1C0_QMDV01_07_QMD_VERSION                               MW(579:576)
#define NVA1C0_QMDV01_07_QMD_MAJOR_VERSION                         MW(583:580)
#define NVA1C0_QMDV01_07_QMD_RESERVED_H                            MW(591:584)
#define NVA1C0_QMDV01_07_CTA_THREAD_DIMENSION0                     MW(607:592)
#define NVA1C0_QMDV01_07_CTA_THREAD_DIMENSION1                     MW(623:608)
#define NVA1C0_QMDV01_07_CTA_THREAD_DIMENSION2                     MW(639:624)
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_VALID(i)                  MW((640+(i)*1):(640+(i)*1))
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_VALID_FALSE               0x00000000
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_VALID_TRUE                0x00000001
#define NVA1C0_QMDV01_07_QMD_RESERVED_I                            MW(668:648)
#define NVA1C0_QMDV01_07_L1_CONFIGURATION                          MW(671:669)
#define NVA1C0_QMDV01_07_L1_CONFIGURATION_DIRECTLY_ADDRESSABLE_MEMORY_SIZE_16KB 0x00000001
#define NVA1C0_QMDV01_07_L1_CONFIGURATION_DIRECTLY_ADDRESSABLE_MEMORY_SIZE_32KB 0x00000002
#define NVA1C0_QMDV01_07_L1_CONFIGURATION_DIRECTLY_ADDRESSABLE_MEMORY_SIZE_48KB 0x00000003
#define NVA1C0_QMDV01_07_SM_DISABLE_MASK_LOWER                     MW(703:672)
#define NVA1C0_QMDV01_07_SM_DISABLE_MASK_UPPER                     MW(735:704)
#define NVA1C0_QMDV01_07_RELEASE0_ADDRESS_LOWER                    MW(767:736)
#define NVA1C0_QMDV01_07_RELEASE0_ADDRESS_UPPER                    MW(775:768)
#define NVA1C0_QMDV01_07_QMD_RESERVED_J                            MW(783:776)
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP                     MW(790:788)
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_ADD             0x00000000
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_MIN             0x00000001
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_MAX             0x00000002
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_INC             0x00000003
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_DEC             0x00000004
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_AND             0x00000005
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_OR              0x00000006
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_OP_RED_XOR             0x00000007
#define NVA1C0_QMDV01_07_QMD_RESERVED_K                            MW(791:791)
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_FORMAT                 MW(793:792)
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_FORMAT_UNSIGNED_32     0x00000000
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_FORMAT_SIGNED_32       0x00000001
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_ENABLE                 MW(794:794)
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_ENABLE_FALSE           0x00000000
#define NVA1C0_QMDV01_07_RELEASE0_REDUCTION_ENABLE_TRUE            0x00000001
#define NVA1C0_QMDV01_07_RELEASE0_STRUCTURE_SIZE                   MW(799:799)
#define NVA1C0_QMDV01_07_RELEASE0_STRUCTURE_SIZE_FOUR_WORDS        0x00000000
#define NVA1C0_QMDV01_07_RELEASE0_STRUCTURE_SIZE_ONE_WORD          0x00000001
#define NVA1C0_QMDV01_07_RELEASE0_PAYLOAD                          MW(831:800)
#define NVA1C0_QMDV01_07_RELEASE1_ADDRESS_LOWER                    MW(863:832)
#define NVA1C0_QMDV01_07_RELEASE1_ADDRESS_UPPER                    MW(871:864)
#define NVA1C0_QMDV01_07_QMD_RESERVED_L                            MW(879:872)
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP                     MW(886:884)
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_ADD             0x00000000
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_MIN             0x00000001
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_MAX             0x00000002
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_INC             0x00000003
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_DEC             0x00000004
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_AND             0x00000005
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_OR              0x00000006
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_OP_RED_XOR             0x00000007
#define NVA1C0_QMDV01_07_QMD_RESERVED_M                            MW(887:887)
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_FORMAT                 MW(889:888)
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_FORMAT_UNSIGNED_32     0x00000000
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_FORMAT_SIGNED_32       0x00000001
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_ENABLE                 MW(890:890)
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_ENABLE_FALSE           0x00000000
#define NVA1C0_QMDV01_07_RELEASE1_REDUCTION_ENABLE_TRUE            0x00000001
#define NVA1C0_QMDV01_07_RELEASE1_STRUCTURE_SIZE                   MW(895:895)
#define NVA1C0_QMDV01_07_RELEASE1_STRUCTURE_SIZE_FOUR_WORDS        0x00000000
#define NVA1C0_QMDV01_07_RELEASE1_STRUCTURE_SIZE_ONE_WORD          0x00000001
#define NVA1C0_QMDV01_07_RELEASE1_PAYLOAD                          MW(927:896)
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_ADDR_LOWER(i)             MW((959+(i)*64):(928+(i)*64))
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_ADDR_UPPER(i)             MW((967+(i)*64):(960+(i)*64))
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_RESERVED_ADDR(i)          MW((973+(i)*64):(968+(i)*64))
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_INVALIDATE(i)             MW((974+(i)*64):(974+(i)*64))
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_INVALIDATE_FALSE          0x00000000
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_INVALIDATE_TRUE           0x00000001
#define NVA1C0_QMDV01_07_CONSTANT_BUFFER_SIZE(i)                   MW((991+(i)*64):(975+(i)*64))
#define NVA1C0_QMDV01_07_SHADER_LOCAL_MEMORY_LOW_SIZE              MW(1463:1440)
#define NVA1C0_QMDV01_07_QMD_RESERVED_N                            MW(1466:1464)
#define NVA1C0_QMDV01_07_BARRIER_COUNT                             MW(1471:1467)
#define NVA1C0_QMDV01_07_SHADER_LOCAL_MEMORY_HIGH_SIZE             MW(1495:1472)
#define NVA1C0_QMDV01_07_REGISTER_COUNT                            MW(1503:1496)
#define NVA1C0_QMDV01_07_SHADER_LOCAL_MEMORY_CRS_SIZE              MW(1527:1504)
#define NVA1C0_QMDV01_07_SASS_VERSION                              MW(1535:1528)
#define NVA1C0_QMDV01_07_HW_ONLY_INNER_GET                         MW(1566:1536)
#define NVA1C0_QMDV01_07_HW_ONLY_REQUIRE_SCHEDULING_PCAS           MW(1567:1567)
#define NVA1C0_QMDV01_07_HW_ONLY_INNER_PUT                         MW(1598:1568)
#define NVA1C0_QMDV01_07_QMD_RESERVED_P                            MW(1599:1599)
#define NVA1C0_QMDV01_07_HW_ONLY_SPAN_LIST_HEAD_INDEX              MW(1629:1600)
#define NVA1C0_QMDV01_07_QMD_RESERVED_Q                            MW(1630:1630)
#define NVA1C0_QMDV01_07_HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID        MW(1631:1631)
#define NVA1C0_QMDV01_07_HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID_FALSE  0x00000000
#define NVA1C0_QMDV01_07_HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID_TRUE   0x00000001
#define NVA1C0_QMDV01_07_HW_ONLY_SKED_NEXT_QMD_POINTER             MW(1663:1632)
#define NVA1C0_QMDV01_07_QMD_SPARE_E                               MW(1695:1664)
#define NVA1C0_QMDV01_07_QMD_SPARE_F                               MW(1727:1696)
#define NVA1C0_QMDV01_07_QMD_SPARE_G                               MW(1759:1728)
#define NVA1C0_QMDV01_07_QMD_SPARE_H                               MW(1791:1760)
#define NVA1C0_QMDV01_07_QMD_SPARE_I                               MW(1823:1792)
#define NVA1C0_QMDV01_07_QMD_SPARE_J                               MW(1855:1824)
#define NVA1C0_QMDV01_07_QMD_SPARE_K                               MW(1887:1856)
#define NVA1C0_QMDV01_07_QMD_SPARE_L                               MW(1919:1888)
#define NVA1C0_QMDV01_07_QMD_SPARE_M                               MW(1951:1920)
#define NVA1C0_QMDV01_07_QMD_SPARE_N                               MW(1983:1952)
#define NVA1C0_QMDV01_07_DEBUG_ID_UPPER                            MW(2015:1984)
#define NVA1C0_QMDV01_07_DEBUG_ID_LOWER                            MW(2047:2016)



#endif // #ifndef __CLA1C0QMD_H__
