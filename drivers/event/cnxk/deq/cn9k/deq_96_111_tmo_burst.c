/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(C) 2022 Marvell.
 */

#include "cn9k_worker.h"
#include "cnxk_eventdev.h"
#include "cnxk_worker.h"

#if !defined(CNXK_DIS_TMPLT_FUNC)

#define R(name, flags)                                                         \
	SSO_CMN_DEQ_BURST(cn9k_sso_hws_deq_tmo_burst_##name,                   \
			  cn9k_sso_hws_deq_tmo_##name, flags)

NIX_RX_FASTPATH_MODES_96_111
#undef R

#endif
