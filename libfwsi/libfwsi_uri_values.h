/*
 * URI (shell item) values functions
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

#if !defined( _LIBFWSI_URI_VALUES_H )
#define _LIBFWSI_URI_VALUES_H

#include <common.h>
#include <types.h>

#include "libfwsi_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfwsi_uri_values libfwsi_uri_values_t;

struct libfwsi_uri_values
{
	/* Dummy
	 */
	int dummy;
};

int libfwsi_uri_values_initialize(
     libfwsi_uri_values_t **uri_values,
     libcerror_error_t **error );

int libfwsi_uri_values_free(
     libfwsi_uri_values_t **uri_values,
     libcerror_error_t **error );

ssize_t libfwsi_uri_values_read(
         libfwsi_uri_values_t *uri_values,
         const uint8_t *shell_item_data,
         size_t shell_item_data_size,
         int ascii_codepage,
         libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFWSI_URI_VALUES_H ) */

