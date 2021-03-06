#ifndef CHEETAH_CONSTANTS_H
#define CHEETAH_CONSTANTS_H

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif /* _GNU_SOURCE */

/* #define CHEETAH_USE_MULTICORE_DPDK */

/* +1 if including "master" */
#define CHEETAH_WORKER_COUNT 1

/* Resource limits */
//#define CHEETAH_ENABLE_RESOURCE_LIMITS

/* in bytes */
#define CHEETAH_WORKER_MEMORY_LIMIT 17179869184

/* in cores */
#define CHEETAH_WORKER_CORE_LIMIT 2

/* #define CHEETAH_DATASET_USER_VALUES */

#define CHEETAH_TESTBED_DR_MINLAN

#define CHEETAH_RXTX_DESC_DEFAULT 1024
#define CHEETAH_MAX_PKT_BURST_DEFAULT 32

#define CHEETAH_PACKET_MBUF 8192U
#define CHEETAH_MBUF_DATA_SIZE RTE_MBUF_DEFAULT_BUF_SIZE
#define CHEETAH_MEMPOOL_CACHE_SIZE 256

#define CHEETAH_RX_QUEUE_ID 0
#define CHEETAH_TX_QUEUE_ID 0

#define CHEETAH_ROWS_ON_SWITCH 16000

/*
 * UDP Size : 8 Bytes
 * IPv4 Size : 20 Bytes
 * Payload size : (32 / 8) + (32 / 8) + (16 / 8) = 10 Bytes
 */

#define CHEETAH_DATAGRAM_LENGTH 38
#define CHEETAH_UDP_DATAGRAM_LENGTH 18
#define CHEETAH_ETHERNET_FULL_LENGTH 52

#define CHEETAH_MEMORY_ENTRY_COUNT 50000000
#define CHEETAH_RECEIVER_MEMORY_ENTRY_COUNT 100000000

#define CHEETAH_ENABLE_PACKET_MONITORING
// #define CHEETAH_ENABLE_RECEIVER_PACKET_MONITORING

#define CHEETAH_CSV_ENTRY_MAX_LENGTH 1024

#define CHEETAH_CONTROL_MESSAGE_BUFFER_LENGTH 1024

#define CHEETAH_CONTROL_MESSAGE_PORT "23456"

#ifdef CHEETAH_TESTBED_DR_XIN
#define CHEETAH_CONTROL_MESSAGE_DESTINATION_HOST_1 "10.161.159.60"
#define CHEETAH_CONTROL_MESSAGE_DESTINATION_HOST_2 "10.161.159.61"
#define CHEETAH_CONTROL_MESSAGE_DESTINATION_HOST_3 "10.161.159.34"
#define CHEETAH_CONTROL_MESSAGE_DESTINATION_HOST_4 "10.161.159.35"
#define CHEETAH_CONTROL_MESSAGE_DESTINATION_HOST_5 "10.161.159.36"
#endif /* CHEETAH_TESTBED_DR_XIN */

#ifdef CHEETAH_TESTBED_DR_MINLAN

#define CHEETAH_MULTIPLE_NODES_SAME_IP

#define CHEETAH_CONTROL_MESSAGE_MASTER_IP "10.243.38.88"
#define CHEETAH_CONTROL_MESSAGE_DESTINATION_HOST_1 "10.243.38.89"
#define CHEETAH_CONTROL_MESSAGE_PORT_2 "23457"

#define CHEETAH_WORKER_ID 1

#endif /* CHEETAH_TESTBED_DR_MINLAN */

#define CHEETAH_MEMORY_SIM_DATASET_PATH                                        \
  "../../tpch_scale1/both_tbl_with_flow.csv"

#define CHEETAH_DEFAULT_FLOW_ID 1

/* #define CHEETAH_USE_64_BIT_VALUES */
/* #define CHEETAH_USE_HASH_AT_WORKER */
/* #define CHEETAH_USE_STRING_VALUES */
#define CHEETAH_USE_KEY_AT_WORKER
#define CHEETAH_USE_FLOW_ID_AT_WORKER

/* #define CHEETAH_DATASET_USER_VISITS */
/* #define CHEETAH_DATASET_RANDOM_KV */
/*#define CHEETAH_DATASET_USER_DATA_HASHED*/
#define CHEETAH_DATASET_TPCH

#define CHEETAH_ENABLE_AGGREGATE_PROCESSING

/* 25.25.25.1 */
#define CHEETAH_MASTER_DPDK_IP 0x19191901

/* 25.25.25.7 */
#define CHEETAH_WORKER_DPDK_IP 0x19191907

#ifdef CHEETAH_TESTBED_DR_MINLAN

/* ec:0d:9a:07:dc:90 */
#define CHEETAH_WORKER_MAC_1 0xec
#define CHEETAH_WORKER_MAC_2 0x0d
#define CHEETAH_WORKER_MAC_3 0x9a
#define CHEETAH_WORKER_MAC_4 0x07
#define CHEETAH_WORKER_MAC_5 0xdc
#define CHEETAH_WORKER_MAC_6 0x90

/* ec:0d:9a:07:dd:a0 */
/* Dr. Minlan's servers */
#define CHEETAH_MASTER_MAC_1 0xec
#define CHEETAH_MASTER_MAC_2 0x0d
#define CHEETAH_MASTER_MAC_3 0x9a
#define CHEETAH_MASTER_MAC_4 0x07
#define CHEETAH_MASTER_MAC_5 0xdd
#define CHEETAH_MASTER_MAC_6 0xa0

#endif /* CHEETAH_TESTBED_DR_MINLAN */

/* Dr. Xin's servers */
#ifdef CHEETAH_TESTBED_DR_XIN

#define CHEETAH_WORKER_MAC_1 0x3c
#define CHEETAH_WORKER_MAC_2 0xfd
#define CHEETAH_WORKER_MAC_3 0xfe
#define CHEETAH_WORKER_MAC_4 0xa6
#define CHEETAH_WORKER_MAC_5 0xeb
#define CHEETAH_WORKER_MAC_6 0x10

#define CHEETAH_MASTER_MAC_1 0x3c
#define CHEETAH_MASTER_MAC_2 0xfd
#define CHEETAH_MASTER_MAC_3 0xfe
#define CHEETAH_MASTER_MAC_4 0xab
#define CHEETAH_MASTER_MAC_5 0xde
#define CHEETAH_MASTER_MAC_6 0xd8

#endif /* CHEETAH_TESTBED_DR_XIN */

#endif /* CHEETAH_CONSTANTS_H */
