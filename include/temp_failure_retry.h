#ifndef _TEMP_FAILURE_RETRY_H
# define _TEMP_FAILURE_RETRY_H	1

# include <unistd.h>

# define TEMP_FAILURE_RETRY(expression) \
  (__extension__                                                              \
    ({ long int __result;                                                     \
       do __result = (long int) (expression);                                 \
       while (__result == -1L && errno == EINTR);                             \
       __result; }))

#endif
