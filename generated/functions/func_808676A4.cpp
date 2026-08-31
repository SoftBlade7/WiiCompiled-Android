#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808676A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_808676A4;

loc_808676A4:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r4 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 38));
    MemoryInline::FlatWrite8((r3 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 39));
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808676A4 func_808676A4 preserves=true fpr_mask=0x00000000
