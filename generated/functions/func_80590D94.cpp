#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590D94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80590D94;

loc_80590D94:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80581A24 (1 guest instruction(s))
    // end of inlined leaf 0x80581A24
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590D94 func_80590D94 preserves=true fpr_mask=0x00000000
