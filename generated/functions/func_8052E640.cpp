#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052E640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8052E640;

loc_8052E640:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 216), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 222), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 225), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 224), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052E640 func_8052E640 preserves=true fpr_mask=0x00000000
