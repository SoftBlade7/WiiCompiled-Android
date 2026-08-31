#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EFEF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EFEF4;

loc_805EFEF4:
{
    r11 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead8((r11 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EFF00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F002C;
    }
}

loc_805EFF04:
{
    r4 = MemoryInline::FlatRead32((r11 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r12 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(1));
}

loc_805EFF14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFF34;
    }
}

loc_805EFF18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(2));
}

loc_805EFF1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFF40;
    }
}

loc_805EFF20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(4));
}

loc_805EFF24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFF4C;
    }
}

loc_805EFF28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(8));
}

loc_805EFF2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFF58;
    }
}

loc_805EFF30:
{
    goto loc_805EFF64;
}

loc_805EFF34:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFF40:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFF4C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFF58:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFF64:
{
    r0 = 5;
    r10 = MemoryInline::FlatRead32((r3 + 112));
    r9 = 0;
    r8 = 0;
    r4 = 0;
    r6 = 1;
    ctr = r0;
}

loc_805EFF80:
{
    r7 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
    r0 = (r10 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EFFAC;
    }
}

loc_805EFF8C:
{
    r0 = MemoryInline::FlatRead32((r11 + 4));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EFFAC;
    }
}

loc_805EFF98:
{
    r5 = (r11 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 84));
}

loc_805EFFA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_805EFFAC;
    }
}

loc_805EFFA8:
{
    r9 = (r9 | r7);
}

loc_805EFFAC:
{
    r8 = (r8 + 1);
    r4 = (r4 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EFF80;
    }
}

loc_805EFFB8:
{
    r4 = (r9 & r12);
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EFFC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFFD0;
    }
}

loc_805EFFC4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFFD0:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EFFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFFE4;
    }
}

loc_805EFFD8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFFE4:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EFFE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFFF8;
    }
}

loc_805EFFEC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805EFFF8:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EFFFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F000C;
    }
}

loc_805F0000:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805F000C:
{
    r0 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F0010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0020;
    }
}

loc_805F0014:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805F0020:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F0034;
}

loc_805F002C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r0);
}

loc_805F0034:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EFEF4 func_805EFEF4 preserves=true fpr_mask=0x00000000
