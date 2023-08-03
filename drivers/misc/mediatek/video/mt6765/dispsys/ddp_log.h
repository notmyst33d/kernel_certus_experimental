/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _H_DDP_LOG_
#define _H_DDP_LOG_
#ifdef CONFIG_MTK_AEE_FEATURE
#include "mt-plat/aee.h"
#endif
#include "display_recorder.h"
#include "ddp_debug.h"
#include "disp_drv_log.h"

#ifndef LOG_TAG
#define LOG_TAG
#endif

#define DDPSVPMSG(fmt, args...) DISPMSG(fmt, ##args)

#define DISP_LOG_I(fmt, args...) \
	pr_info("[DDP/"LOG_TAG"]"fmt, ##args)

#define DISP_LOG_V(fmt, args...) \
	DISP_LOG_I(fmt, ##args)

#define DISP_LOG_D(fmt, args...) \
	DISP_LOG_I(fmt, ##args)

#define DISP_LOG_W(fmt, args...) \
	pr_info("[DDP/"LOG_TAG"]warn:"fmt, ##args)

#define DISP_LOG_E(fmt, args...) \
	pr_info("[DDP/"LOG_TAG"]error:"fmt, ##args)

#define DDPIRQ(fmt, args...) \
	DISP_LOG_I(fmt, ##args)

#define DDPDBG(fmt, args...) DISP_LOG_D(fmt, ##args)

#define DDPMSG(fmt, args...) DISP_LOG_I(fmt, ##args)

#define DDPWRN(fmt, args...) DISP_LOG_W(fmt, ##args)

#define DDPERR(fmt, args...) DISP_LOG_E(fmt, ##args)

#define DDPDUMP(fmt, ...) \
	pr_info("[DDP/"LOG_TAG"]"fmt, ##__VA_ARGS__)

#ifndef ASSERT
#define ASSERT(expr)					\
	do {						\
		if (expr)				\
			break;				\
		pr_info("DDP ASSERT FAILED %s, %d\n", __FILE__, __LINE__); \
		WARN_ON(1);\
	} while (0)
#endif

#define DDPAEE(string, args...) \
	pr_info("[DDP Error]"string, ##args)

#endif
