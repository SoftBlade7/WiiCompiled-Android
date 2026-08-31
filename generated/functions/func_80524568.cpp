#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80524568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80524568;

loc_80524568:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 232), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 468), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 704), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 940), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80524568 func_80524568 preserves=true fpr_mask=0x00000000
