/*! \file */

#ifndef _CUCKOOHASH_ST_CONFIG_H
#define _CUCKOOHASH_ST_CONFIG_H

//! SLOT_PER_BUCKET is the maximum number of keys per bucket
const size_t ST_SLOT_PER_BUCKET = 8;

//! DEFAULT_SIZE is the default number of elements in an empty hash
//! table
const size_t ST_DEFAULT_SIZE = (1U << 16) * ST_SLOT_PER_BUCKET;

//! set LIBCUCKOO_DEBUG to 1 to enable debug output
#define LIBCUCKOO_ST_DEBUG 0

#endif
