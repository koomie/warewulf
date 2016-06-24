/*
 * Copyright (c) 2015     Cisco Systems, Inc.  All rights reserved.
 * Copyright (c) 2016     Intel, Inc. All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#ifndef WW_DL_DLOPEN
#define WW_DL_DLOPEN

#include <src/include/ww_config.h>

#include "src/mca/dl/dl.h"

WW_DECLSPEC extern ww_dl_base_module_t ww_dl_dlopen_module;

/*
 * Dynamic library handles generated by this component.
 *
 * If we're debugging, keep a copy of the name of the file we've opened.
 */
struct ww_dl_handle_t {
    void *dlopen_handle;
#if WW_ENABLE_DEBUG
    void *filename;
#endif
};

typedef struct {
    ww_dl_base_component_t base;

    char *filename_suffixes_mca_storage;
    char **filename_suffixes;
} ww_dl_dlopen_component_t;

WW_DECLSPEC extern ww_dl_dlopen_component_t mca_dl_dlopen_component;

#endif /* WW_DL_DLOPEN */
