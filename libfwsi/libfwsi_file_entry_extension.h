/*
 * File entry extension functions
 *
 * Copyright (C) 2010-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFWSI_FILE_ENTRY_EXTENSION_H )
#define _LIBFWSI_FILE_ENTRY_EXTENSION_H

#include <common.h>
#include <types.h>

#include "libfwsi_extern.h"
#include "libfwsi_libcerror.h"
#include "libfwsi_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_creation_time(
     libfwsi_extension_block_t *extension_block,
     uint32_t *creation_time,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_access_time(
     libfwsi_extension_block_t *extension_block,
     uint32_t *access_time,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_file_reference(
     libfwsi_extension_block_t *extension_block,
     uint64_t *file_reference,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf8_long_name_size(
     libfwsi_extension_block_t *extension_block,
     size_t *utf8_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf8_long_name(
     libfwsi_extension_block_t *extension_block,
     uint8_t *utf8_string,
     size_t utf8_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf16_long_name_size(
     libfwsi_extension_block_t *extension_block,
     size_t *utf16_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf16_long_name(
     libfwsi_extension_block_t *extension_block,
     uint16_t *utf16_string,
     size_t utf16_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf8_localized_name_size(
     libfwsi_extension_block_t *extension_block,
     size_t *utf8_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf8_localized_name(
     libfwsi_extension_block_t *extension_block,
     uint8_t *utf8_string,
     size_t utf8_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf16_localized_name_size(
     libfwsi_extension_block_t *extension_block,
     size_t *utf16_string_size,
     libcerror_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_file_entry_extension_get_utf16_localized_name(
     libfwsi_extension_block_t *extension_block,
     uint16_t *utf16_string,
     size_t utf16_string_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFWSI_FILE_ENTRY_EXTENSION_H ) */

