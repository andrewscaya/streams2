#include "streams2.h"

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_statbuf_posixfile_interface_getMode, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

static zend_class_entry *statbuf_posixfile_interface_ce = NULL;
static zend_function_entry statbuf_posixfile_interface_methods[] = {
    PHP_ABSTRACT_ME(PosixFile, getMode, arginfo_statbuf_posixfile_interface_getMode)
    PHP_FE_END
};

PHP_MINIT_FUNCTION(streams2_statbuf_posixfile_interface) {
    zend_class_entry ce;

    INIT_NS_CLASS_ENTRY(ce, NS_STREAM_STATBUF, "PosixFile", statbuf_posixfile_interface_methods);
    statbuf_posixfile_interface_ce = zend_register_internal_class(&ce);
    statbuf_posixfile_interface_ce->ce_flags |= ZEND_ACC_INTERFACE;
    statbuf_posixfile_interface_ce->parent = statbuf_file_interface_ce;

    return SUCCESS;
}
