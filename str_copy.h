/*
 * This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef FLUENT_LIBC_STR_COPY_LIBRARY_H
#define FLUENT_LIBC_STR_COPY_LIBRARY_H

#if defined(__cplusplus)
extern "C"
{
#endif

#ifndef FLUENT_LIBC_RELEASE
#   include <types.h>
#else
#   include <fluent/std_bool/std_bool.h>
#   include <fluent/types/types.h>
#endif

/**
 * Copies a null-terminated string from the source (`pivot`) to the destination (`target`).
 *
 * @param pivot A pointer to the source null-terminated string.
 *              The caller must ensure it is properly null-terminated.
 * @param target A pointer to the destination buffer where the string will be copied.
 *               The caller must ensure the buffer has enough space to hold the copied string,
 *               including the null terminator.
 */
inline void str_copy(const char* pivot, char* target)
{
    // Define an index
    size_t i = 0;

    // Iterate over the pivot
    while (*pivot != '\0')
    {
        // Copy the character
        target[i] = *pivot;

        // Move to the next character
        pivot++;

        // Increment the index
        i++;
    }

    // Add a null terminator
    target[i] = '\0';
}

#if defined(__cplusplus)
}
#endif

#endif //FLUENT_LIBC_STR_COPY_LIBRARY_H