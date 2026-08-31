#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80224EA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80224EA4;

loc_80224EA4:
{
    r0 = (r4 + 31);
    r4 = MemoryInline::FlatRead32((r3 + 64));
    r7 = (r0 & -32);
    goto loc_80224FE4;
}

loc_80224EB4:
{
    r5 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80224EBC:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r7))) {
        goto loc_80224FE0;
    }
}

loc_80224EC0:
{
    r0 = (r7 + 64);
}

loc_80224EC8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80224F30;
    }
}

loc_80224ECC:
{
    r5 = MemoryInline::FlatRead32(r4);
}

loc_80224ED4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80224EE4;
    }
}

loc_80224ED8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    goto loc_80224EEC;
}

loc_80224EE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 64), r0);
}

loc_80224EEC:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80224EF4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80224F00;
    }
}

loc_80224EF8:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80224F00:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80224F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80224F10;
    }
}

loc_80224F0C:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_80224F10:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r5);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 60), r4);
    goto loc_80224FD8;
}

loc_80224F30:
{
    r5 = MemoryInline::FlatRead32(r4);
    r6 = (r4 + r7);
    MemoryInline::FlatWrite32((r6 + 32), r5);
    r6 = (r6 + 32);
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r5);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r5 - r7);
    r5 = (r5 + -32);
    MemoryInline::FlatWrite32((r6 + 16), r5);
    MemoryInline::FlatWrite8((r6 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80224F6C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80224F74;
    }
}

loc_80224F70:
{
    MemoryInline::FlatWrite32((r5 + 8), r6);
}

loc_80224F74:
{
    MemoryInline::FlatWrite32((r6 + 8), r4);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r5 = MemoryInline::FlatRead32(r4);
}

loc_80224F84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80224F90;
    }
}

loc_80224F88:
{
    MemoryInline::FlatWrite32((r5 + 4), r6);
    goto loc_80224F94;
}

loc_80224F90:
{
    MemoryInline::FlatWrite32((r3 + 64), r6);
}

loc_80224F94:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80224F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224FA8;
    }
}

loc_80224FA0:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r5, r6);
}

loc_80224FA8:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80224FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80224FB8;
    }
}

loc_80224FB4:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_80224FB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r5);
    MemoryInline::FlatWrite32((r4 + 16), r7);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 60), r4);
}

loc_80224FD8:
{
    r3 = (r4 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80224FE0:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80224FE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80224FE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80224EB4;
    }
}

loc_80224FEC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80224EA4 func_80224EA4 preserves=true fpr_mask=0x00000000
