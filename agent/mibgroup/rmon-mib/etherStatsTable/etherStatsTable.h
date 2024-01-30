/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef ETHERSTATSTABLE_H
#define ETHERSTATSTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

    /*
     * OID and column number definitions for etherStatsTable 
     */
#include "etherStatsTable_oids.h"

    /*
     * enum definions 
     */
#include "etherStatsTable_enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_etherStatsTable(void);
    void            shutdown_etherStatsTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table etherStatsTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * RMON-MIB::etherStatsTable is subid 1 of statistics.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.16.1.1, length: 9
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review etherStatsTable registration context.
     */
    typedef netsnmp_data_list etherStatsTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review etherStatsTable data context structure.
     * This structure is used to represent the data for etherStatsTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * etherStatsTable.
     */
    typedef struct etherStatsTable_data_s {

        /*
         * etherStatsDataSource(2)/OBJECTID/ASN_OBJECT_ID/oid(oid)//L/A/W/e/r/d/h
         */
        oid             etherStatsDataSource[128];
        size_t          etherStatsDataSource_len;       /* # of oid elements, not bytes */

        /*
         * etherStatsDropEvents(3)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsDropEvents;

        /*
         * etherStatsOctets(4)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsOctets;

        /*
         * etherStatsPkts(5)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts;

        /*
         * etherStatsBroadcastPkts(6)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsBroadcastPkts;

        /*
         * etherStatsMulticastPkts(7)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsMulticastPkts;

        /*
         * etherStatsCRCAlignErrors(8)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsCRCAlignErrors;

        /*
         * etherStatsUndersizePkts(9)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsUndersizePkts;

        /*
         * etherStatsOversizePkts(10)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsOversizePkts;

        /*
         * etherStatsFragments(11)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsFragments;

        /*
         * etherStatsJabbers(12)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsJabbers;

        /*
         * etherStatsCollisions(13)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsCollisions;

        /*
         * etherStatsPkts64Octets(14)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts64Octets;

        /*
         * etherStatsPkts65to127Octets(15)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts65to127Octets;

        /*
         * etherStatsPkts128to255Octets(16)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts128to255Octets;

        /*
         * etherStatsPkts256to511Octets(17)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts256to511Octets;

        /*
         * etherStatsPkts512to1023Octets(18)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts512to1023Octets;

        /*
         * etherStatsPkts1024to1518Octets(19)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          etherStatsPkts1024to1518Octets;

        /*
         * etherStatsOwner(20)/OwnerString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/h
         */
        char            etherStatsOwner[127];
        size_t          etherStatsOwner_len;    /* # of char elements, not bytes */

        /*
         * etherStatsStatus(21)/EntryStatus/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          etherStatsStatus;

    } etherStatsTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review etherStatsTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef etherStatsTable_data etherStatsTable_undo_data;

    /*
     * TODO:120:r: |-> Review etherStatsTable mib index.
     * This structure is used to represent the index for etherStatsTable.
     */
    typedef struct etherStatsTable_mib_index_s {

        /*
         * etherStatsIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/R/d/h
         */
        long            etherStatsIndex;


    } etherStatsTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review etherStatsTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_etherStatsTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review etherStatsTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * etherStatsTable_rowreq_ctx pointer.
     */
    typedef struct etherStatsTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_etherStatsTable_IDX_LEN];

        etherStatsTable_mib_index tbl_idx;

        etherStatsTable_data data;
        unsigned int    column_exists_flags;    /* flags for existence */
        etherStatsTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to etherStatsTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *etherStatsTable_data_list;

    } etherStatsTable_rowreq_ctx;

    typedef struct etherStatsTable_ref_rowreq_ctx_s {
        etherStatsTable_rowreq_ctx *rowreq_ctx;
    } etherStatsTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        etherStatsTable_pre_request(etherStatsTable_registration *
                                    user_context);
    int            
        etherStatsTable_post_request(etherStatsTable_registration *
                                     user_context, int rc);

    int            
        etherStatsTable_rowreq_ctx_init(etherStatsTable_rowreq_ctx *
                                        rowreq_ctx, void *user_init_ctx);
    void           
        etherStatsTable_rowreq_ctx_cleanup(etherStatsTable_rowreq_ctx *
                                           rowreq_ctx);

    etherStatsTable_rowreq_ctx
        *etherStatsTable_row_find_by_mib_index(etherStatsTable_mib_index *
                                               mib_idx);

    extern oid      etherStatsTable_oid[];
    extern int      etherStatsTable_oid_size;


#include "etherStatsTable_interface.h"
#include "etherStatsTable_data_access.h"
#include "etherStatsTable_data_get.h"
#include "etherStatsTable_data_set.h"

    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* ETHERSTATSTABLE_H */
/** @} */
