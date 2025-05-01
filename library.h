/*
 * This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef STR_COPY_LIBRARY_H
#define STR_COPY_LIBRARY_H

/**
 * Copies a null-terminated string from the source (`pivot`) to the destination (`target`).
 *
 * @param pivot A pointer to the source null-terminated string.
 *              The caller must ensure it is properly null-terminated.
 * @param target A pointer to the destination buffer where the string will be copied.
 *               The caller must ensure the buffer has enough space to hold the copied string,
 *               including the null terminator.
 */
void str_copy(const char* pivot, char* target);

#endif //STR_COPY_LIBRARY_H