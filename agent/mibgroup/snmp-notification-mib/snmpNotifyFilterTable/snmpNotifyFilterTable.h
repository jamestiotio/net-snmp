/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.48 $ of : mfd-top.m2c,v $
 *
 * Portions of this file are copyrighted by:
 * Copyright (c) 2016 VMware, Inc. All rights reserved.
 * Use is subject to license terms specified in the COPYING file
 * distributed with the Net-SNMP package.
 */
#ifndef SNMPNOTIFYFILTERTABLE_H
#define SNMPNOTIFYFILTERTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>
#include "snmp-notification-mib/snmpNotifyFilterTable/snmpNotifyFilterTable_data_storage.h"

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_require(snmp-notification-mib/snmpNotifyFilterTable/snmpNotifyFilterTable_interface);
config_require(snmp-notification-mib/snmpNotifyFilterTable/snmpNotifyFilterTable_data_access);
    /* *INDENT-ON*  */

    /*
     * OID, column number and enum definions for snmpNotifyFilterTable 
     */
#include "snmpNotifyFilterTable_constants.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_snmpNotifyFilterTable(void);
    void            shutdown_snmpNotifyFilterTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table snmpNotifyFilterTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * SNMP-NOTIFICATION-MIB::snmpNotifyFilterTable is subid 3 of snmpNotifyObjects.
     * Its status is Current.
     * OID: .1.3.6.1.6.3.13.1.3, length: 9
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
     * TODO:101:o: |-> Review snmpNotifyFilterTable registration context.
     */
    typedef netsnmp_data_list snmpNotifyFilterTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review snmpNotifyFilterTable data context structure.
     * This structure is used to represent the data for snmpNotifyFilterTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * snmpNotifyFilterTable.
     */
    typedef struct snmpNotifyFilterTable_data_s {

        /*
         * snmpNotifyFilterMask(2)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/W/e/R/D/h
         */
        char            snmpNotifyFilterMask[16];
        size_t          snmpNotifyFilterMask_len;       /* # of char elements, not bytes */

        /*
         * snmpNotifyFilterType(3)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/D/h
         */
        u_long          snmpNotifyFilterType;

        /*
         * snmpNotifyFilterStorageType(4)/StorageType/ASN_INTEGER/long(u_long)//l/A/W/E/r/D/h
         */
        u_long          snmpNotifyFilterStorageType;

        /*
         * snmpNotifyFilterRowStatus(5)/RowStatus/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          snmpNotifyFilterRowStatus;

    } snmpNotifyFilterTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review snmpNotifyFilterTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef snmpNotifyFilterTable_data snmpNotifyFilterTable_undo_data;

    /*
     * TODO:120:r: |-> Review snmpNotifyFilterTable mib index.
     * This structure is used to represent the index for snmpNotifyFilterTable.
     */
    typedef struct snmpNotifyFilterTable_mib_index_s {

        /*
         * snmpNotifyFilterProfileName(1)/SnmpAdminString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            snmpNotifyFilterProfileName[32];
        size_t          snmpNotifyFilterProfileName_len;

        /*
         * snmpNotifyFilterSubtree(1)/OBJECTID/ASN_OBJECT_ID/oid(oid)//L/a/w/e/r/d/h
         */
        /** 128 - 1(other indexes) - oid length(11) = 115 */
        oid             snmpNotifyFilterSubtree[115];
        size_t          snmpNotifyFilterSubtree_len;


    } snmpNotifyFilterTable_mib_index;



    /*
     *********************************************************************
     * TODO:130:o: |-> Review snmpNotifyFilterTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * snmpNotifyFilterTable_rowreq_ctx pointer.
     */
    typedef struct snmpNotifyFilterTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_snmpNotifyFilterTable_IDX_LEN];

        snmpNotifyFilterTable_mib_index tbl_idx;

        snmpNotifyFilterTable_data data;
        snmpNotifyFilterTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to snmpNotifyFilterTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *snmpNotifyFilterTable_data_list;

    } snmpNotifyFilterTable_rowreq_ctx;

    typedef struct snmpNotifyFilterTable_ref_rowreq_ctx_s {
        snmpNotifyFilterTable_rowreq_ctx *rowreq_ctx;
    } snmpNotifyFilterTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_pre_request
        (snmpNotifyFilterTable_registration * user_context);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_post_request
        (snmpNotifyFilterTable_registration * user_context, int rc);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_rowreq_ctx_init
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx,
         void *user_init_ctx);
    void
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_rowreq_ctx_cleanup
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);

    snmpNotifyFilterTable_rowreq_ctx
        * snmpNotifyFilterTable_row_find_by_mib_index
        (snmpNotifyFilterTable_mib_index * mib_idx);

    extern const oid      snmpNotifyFilterTable_oid[];
    extern const int      snmpNotifyFilterTable_oid_size;


#include "snmpNotifyFilterTable_interface.h"
#include "snmpNotifyFilterTable_data_access.h"
    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table snmpNotifyFilterTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * SNMP-NOTIFICATION-MIB::snmpNotifyFilterTable is subid 3 of snmpNotifyObjects.
     * Its status is Current.
     * OID: .1.3.6.1.6.3.13.1.3, length: 9
     */
    /*
     * indexes
     */

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterMask_get(snmpNotifyFilterTable_rowreq_ctx *
                                 rowreq_ctx,
                                 char **snmpNotifyFilterMask_val_ptr_ptr,
                                 size_t
                                 * snmpNotifyFilterMask_val_ptr_len_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterType_get(snmpNotifyFilterTable_rowreq_ctx *
                                 rowreq_ctx,
                                 u_long * snmpNotifyFilterType_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterStorageType_get(snmpNotifyFilterTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long *
                                        snmpNotifyFilterStorageType_val_ptr);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterRowStatus_get(snmpNotifyFilterTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      snmpNotifyFilterRowStatus_val_ptr);


    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_indexes_set_tbl_idx
        (snmpNotifyFilterTable_mib_index * tbl_idx,
         char *snmpNotifyFilterProfileName_val_ptr,
         size_t snmpNotifyFilterProfileName_val_ptr_len,
         oid * snmpNotifyFilterSubtree_val_ptr,
         size_t snmpNotifyFilterSubtree_val_ptr_len);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_indexes_set(snmpNotifyFilterTable_rowreq_ctx
                                          * rowreq_ctx, char
                                          *snmpNotifyFilterProfileName_val_ptr,
                                          size_t
                                          snmpNotifyFilterProfileName_val_ptr_len,
                                          oid *
                                          snmpNotifyFilterSubtree_val_ptr,
                                          size_t
                                          snmpNotifyFilterSubtree_val_ptr_len);



    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table snmpNotifyFilterTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * SNMP-NOTIFICATION-MIB::snmpNotifyFilterTable is subid 3 of snmpNotifyObjects.
     * Its status is Current.
     * OID: .1.3.6.1.6.3.13.1.3, length: 9
     */


    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_undo_setup(snmpNotifyFilterTable_rowreq_ctx *
                                         rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_undo_cleanup(snmpNotifyFilterTable_rowreq_ctx
                                           * rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_undo(snmpNotifyFilterTable_rowreq_ctx *
                                   rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_commit(snmpNotifyFilterTable_rowreq_ctx *
                                     rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_undo_commit(snmpNotifyFilterTable_rowreq_ctx
                                          * rowreq_ctx);


    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterMask_check_value(snmpNotifyFilterTable_rowreq_ctx *
                                         rowreq_ctx, char
                                         *snmpNotifyFilterMask_val_ptr,
                                         size_t
                                         snmpNotifyFilterMask_val_ptr_len);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterMask_undo_setup(snmpNotifyFilterTable_rowreq_ctx *
                                        rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterMask_set(snmpNotifyFilterTable_rowreq_ctx *
                                 rowreq_ctx,
                                 char *snmpNotifyFilterMask_val_ptr,
                                 size_t snmpNotifyFilterMask_val_ptr_len);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterMask_undo(snmpNotifyFilterTable_rowreq_ctx *
                                  rowreq_ctx);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterType_check_value(snmpNotifyFilterTable_rowreq_ctx *
                                         rowreq_ctx,
                                         u_long snmpNotifyFilterType_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterType_undo_setup(snmpNotifyFilterTable_rowreq_ctx *
                                        rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterType_set(snmpNotifyFilterTable_rowreq_ctx *
                                 rowreq_ctx,
                                 u_long snmpNotifyFilterType_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterType_undo(snmpNotifyFilterTable_rowreq_ctx *
                                  rowreq_ctx);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterStorageType_check_value
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx,
         u_long snmpNotifyFilterStorageType_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterStorageType_undo_setup
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterStorageType_set(snmpNotifyFilterTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long
                                        snmpNotifyFilterStorageType_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterStorageType_undo(snmpNotifyFilterTable_rowreq_ctx *
                                         rowreq_ctx);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterRowStatus_check_value
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx,
         u_long snmpNotifyFilterRowStatus_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterRowStatus_undo_setup
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterRowStatus_set(snmpNotifyFilterTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long
                                      snmpNotifyFilterRowStatus_val);
    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterRowStatus_undo(snmpNotifyFilterTable_rowreq_ctx *
                                       rowreq_ctx);


    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_check_dependencies
        (snmpNotifyFilterTable_rowreq_ctx * ctx);


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
#endif                          /* SNMPNOTIFYFILTERTABLE_H */
/**  @} */

