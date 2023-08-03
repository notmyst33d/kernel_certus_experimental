#include <linux/kernel.h>

extern void nkro_dump_lcm(void);

#define NKRO_LOG(string, args...) \
    pr_info("[NKRO] %s:%d: "string, __FILE__, __LINE__, ##args)

#define NKRO_DUMP() do { \
    NKRO_LOG("Dumping stacktrace\n"); \
    dump_stack(); \
} while (0)

#define NKRO_PANIC() \
    panic("NKRO debug panic")

