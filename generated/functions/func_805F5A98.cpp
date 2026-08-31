#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F5A98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F5A98;

loc_805F5A98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_805F5AC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5AC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5B20;
    }
}

loc_805F5AC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(78));
}

loc_805F5ACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5B80;
    }
}

loc_805F5AD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5B04;
    }
}

loc_805F5AD4:
{
}

loc_805F5AD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(72))) {
        goto loc_805F5AF0;
    }
}

loc_805F5ADC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(63));
}

loc_805F5AE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(61));
}

loc_805F5AE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5B70;
    }
}

loc_805F5AEC:
{
    goto loc_805F5C7C;
}

loc_805F5AF0:
{
}

loc_805F5AF4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(77))) {
        goto loc_805F5B70;
    }
}

loc_805F5AF8:
{
}

loc_805F5AFC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(75))) {
        goto loc_805F5BA4;
    }
}

loc_805F5B00:
{
    goto loc_805F5B70;
}

loc_805F5B04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(84));
}

loc_805F5B08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5BA4;
    }
}

loc_805F5B0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5B70;
    }
}

loc_805F5B10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(80));
}

loc_805F5B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5B80;
    }
}

loc_805F5B18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5B1C:
{
    goto loc_805F5B70;
}

loc_805F5B20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_805F5B24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5B28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5B54;
    }
}

loc_805F5B2C:
{
}

loc_805F5B30:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(104))) {
        goto loc_805F5B48;
    }
}

loc_805F5B34:
{
}

loc_805F5B38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_805F5BA4;
    }
}

loc_805F5B3C:
{
}

loc_805F5B40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(96))) {
        goto loc_805F5B70;
    }
}

loc_805F5B44:
{
    goto loc_805F5BA4;
}

loc_805F5B48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_805F5B4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5B80;
    }
}

loc_805F5B50:
{
    goto loc_805F5C7C;
}

loc_805F5B54:
{
}

loc_805F5B58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(144))) {
        goto loc_805F5B68;
    }
}

loc_805F5B5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_805F5B60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5B64:
{
    goto loc_805F5B70;
}

loc_805F5B68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(148));
}

loc_805F5B6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5B70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F5B74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5B78:
{
    r3 = 0;
    goto loc_805F5C80;
}

loc_805F5B80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F5B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5B94;
    }
}

loc_805F5B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805F5B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5B9C;
    }
}

loc_805F5B90:
{
    goto loc_805F5C7C;
}

loc_805F5B94:
{
    r3 = 7;
    goto loc_805F5C80;
}

loc_805F5B9C:
{
    r3 = 8;
    goto loc_805F5C80;
}

loc_805F5BA4:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
}

loc_805F5BB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805F5BD0;
    }
}

loc_805F5BB4:
{
}

loc_805F5BB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805F5BE0;
    }
}

loc_805F5BBC:
{
}

loc_805F5BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805F5C04;
    }
}

loc_805F5BC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805F5BC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C38;
    }
}

loc_805F5BCC:
{
    goto loc_805F5C7C;
}

loc_805F5BD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F5BD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F5C7C;
    }
}

loc_805F5BD8:
{
    r3 = 0;
    goto loc_805F5C80;
}

loc_805F5BE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F5BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5BF4;
    }
}

loc_805F5BE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_805F5BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5BFC;
    }
}

loc_805F5BF0:
{
    goto loc_805F5C7C;
}

loc_805F5BF4:
{
    r3 = 1;
    goto loc_805F5C80;
}

loc_805F5BFC:
{
    r3 = 2;
    goto loc_805F5C80;
}

loc_805F5C04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F5C08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C20;
    }
}

loc_805F5C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_805F5C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C28;
    }
}

loc_805F5C14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_805F5C18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C30;
    }
}

loc_805F5C1C:
{
    goto loc_805F5C38;
}

loc_805F5C20:
{
    r3 = 3;
    goto loc_805F5C80;
}

loc_805F5C28:
{
    r3 = 4;
    goto loc_805F5C80;
}

loc_805F5C30:
{
    r3 = 5;
    goto loc_805F5C80;
}

loc_805F5C38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F5C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C5C;
    }
}

loc_805F5C40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_805F5C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C64;
    }
}

loc_805F5C48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_805F5C4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C6C;
    }
}

loc_805F5C50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_805F5C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5C74;
    }
}

loc_805F5C58:
{
    goto loc_805F5C7C;
}

loc_805F5C5C:
{
    r3 = 3;
    goto loc_805F5C80;
}

loc_805F5C64:
{
    r3 = 4;
    goto loc_805F5C80;
}

loc_805F5C6C:
{
    r3 = 5;
    goto loc_805F5C80;
}

loc_805F5C74:
{
    r3 = 6;
    goto loc_805F5C80;
}

loc_805F5C7C:
{
    r3 = -1;
}

loc_805F5C80:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F5A98 func_805F5A98 preserves=true fpr_mask=0x00000000
