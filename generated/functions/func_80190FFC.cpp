#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80190FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_addr_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80190FFC;

loc_80190FFC:
{
    r4 = 0x80340000u;
    r4 = (r4 + 18984);
    r4_addr_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80190FFC func_80190FFC preserves=true fpr_mask=0x00000000
