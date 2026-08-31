#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A6DCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_805A6DCC;

loc_805A6DCC:
{
    r4 = MemoryInline::FlatRead16((r3 + 820));
    r0 = 60;
    MemoryInline::FlatWrite16((r3 + 828), static_cast<uint16_t>(r0));
    r0 = (r4 | 512);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A6DCC func_805A6DCC preserves=true fpr_mask=0x00000000
