#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DB204(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805DB204;

loc_805DB204:
{
    r0 = MemoryInline::FlatRead32((r3 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DB20C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805DB218;
    }
}

loc_805DB210:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_805DB218:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r7 = r3;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r8 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_805DB25C;
}

loc_805DB23C:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32(r7, r0);
    r0 = MemoryInline::FlatRead8((r7 + 12));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 13));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
}

loc_805DB25C:
{
    r4 = MemoryInline::FlatRead32((r3 + 240));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_805DB268:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DB23C;
    }
}

loc_805DB26C:
{
    MemoryInline::FlatWrite32((r3 + 240), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x00000199 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805DB204 func_805DB204 preserves=true fpr_mask=0x00000000
