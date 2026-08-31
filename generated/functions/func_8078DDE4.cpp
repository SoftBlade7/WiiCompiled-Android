#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078DDE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8078DDE4;

loc_8078DDE4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 12088));
    MemoryInline::FlatWrite8((r4 + 492), static_cast<uint8_t>(r3));
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078DDE4 func_8078DDE4 preserves=true fpr_mask=0x00000000
