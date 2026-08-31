#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C78CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_806C78CC;

loc_806C78CC:
{
    r5 = 0;
    MemoryInline::FlatWrite16((r3 + 220), static_cast<uint16_t>(r5));
    r4 = 0x808C0000u;
    r0 = 255;
    r4 = MemoryInline::FlatRead8((r4 + 17180));
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 213), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 214), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 215), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C78CC func_806C78CC preserves=true fpr_mask=0x00000000
