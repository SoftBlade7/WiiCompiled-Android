#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B91D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_805B91D0;

loc_805B91D0:
{
    MemoryInline::FlatWrite32((r3 + 104), r4);
    MemoryInline::FlatWrite16((r3 + 112), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 114), static_cast<uint8_t>(r6));
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B91D0 func_805B91D0 preserves=true fpr_mask=0x00000000
