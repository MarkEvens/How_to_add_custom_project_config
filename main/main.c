#include <stdio.h>

void app_main(void)
{
    printf("username: %s\n", CONFIG_USER_NAME);
#ifdef CONFIG_IS_USER_NAME_MARK
    printf("User is mark\n");
#else
    printf("User is not mark\n");
#endif
    printf("total users: %d\n", CONFIG_TOTAL_USERS);
}
