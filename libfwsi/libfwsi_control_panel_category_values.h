/*
 * Control panel category (shell item) values functions
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

#if !defined( _LIBFWSI_CONTROL_PANEL_CATEGORY_VALUES_H )
#define _LIBFWSI_CONTROL_PANEL_CATEGORY_VALUES_H

#include <common.h>
#include <types.h>

#include "libfwsi_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfwsi_control_panel_category_values libfwsi_control_panel_category_values_t;

struct libfwsi_control_panel_category_values
{
	/* Dummy
	 */
	int dummy;
};

int libfwsi_control_panel_category_values_initialize(
     libfwsi_control_panel_category_values_t **control_panel_category_values,
     libcerror_error_t **error );

int libfwsi_control_panel_category_values_free(
     libfwsi_control_panel_category_values_t **control_panel_category_values,
     libcerror_error_t **error );

ssize_t libfwsi_control_panel_category_values_read(
         libfwsi_control_panel_category_values_t *control_panel_category_values,
         const uint8_t *shell_item_data,
         size_t shell_item_data_size,
         libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFWSI_CONTROL_PANEL_CATEGORY_VALUES_H ) */

