#ifndef STALKER_TABLE
#define STALKER_TABLE

#define STALKER_TABLE_MAX                       (1023)
#define STALKER_TABLE_FREE_SLOT                 (0x0)

#define STALKER_TABLE_NUM_PIDS_OFF              (0x0)
#define STALKER_TABLE_REGISTERED_SYSCTL_OFF     (0x8)

/* struct stalker_ctl {
 *       is this entry not being used?
 *     uint32_t free;
 *
 *       what pid this entry belongs to
 *     uint32_t pid;
 *
 *       list of call numbers to intercept & send to userland, kalloc'ed
 *     int32_t *call_list;
 * };
 *
 * sizeof(struct stalker_ctl) = 0x10
 */
#define SIZEOF_STRUCT_STALKER_CTL               (0x10)

#define STALKER_CTL_FREE_OFF                    (0x0)
#define STALKER_CTL_PID_OFF                     (0x4)
#define STALKER_CTL_CALL_LIST_OFF               (0x8)

#define CALL_LIST_MAX                           (0x400)
#define CALL_LIST_FREE_SLOT                     (0xBEE)

#endif