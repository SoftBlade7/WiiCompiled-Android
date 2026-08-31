#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073FD88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073FD88;

loc_8073FD88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_8073FDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8073FDC0;
    }
}

loc_8073FDB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8073FDB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073FF40;
    }
}

loc_8073FDBC:
{
    goto loc_80740090;
}

loc_8073FDC0:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4 = 0x808D0000u;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r0 = MemoryInline::FlatRead16((r4 + -19848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8073FDD8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_8073FE84;
    }
}

loc_8073FDDC:
{
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8073FDE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073FE7C;
    }
}

loc_8073FDE8:
{
    r30 = 0x809C0000u;
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r28));
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 * r28);
    r0 = (r3 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r31 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8073FE18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073FE40;
    }
}

loc_8073FE1C:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = (r29 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r4 = (r4 - r0);
    goto loc_8073FE50;
}

loc_8073FE40:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
}

loc_8073FE50:
{
    r3 = (r4 + r3);
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r3 = (r3 - r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r28 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_8073FE7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_8073FE84:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x805336A4 (13 guest instruction(s))
}

loc_inl0_0x805336A4:
{
    r4 = 0x809C0000u;
    r3 = 3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
}

loc_inl0_0x805336B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805336BC:
{
    r3 = MemoryInline::FlatRead8((r4 + 2957));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_inl0_0x805336CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805336D0:
{
    r3 = 3;
    goto loc_inl0_cont_805336A4;
}

loc_inl0_return:
{
}

loc_inl0_cont_805336A4:
{
    // end of inlined leaf 0x805336A4
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r30 = r3;
    r5 = r31;
    r3 = 0;
    ctr = r0;
}

loc_8073FEA8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8073FECC;
    }
}

loc_8073FEAC:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_8073FEB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8073FEC4;
    }
}

loc_8073FEBC:
{
    r3 = r4;
    goto loc_8073FECC;
}

loc_8073FEC4:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8073FEAC;
    }
}

loc_8073FECC:
{
}

loc_8073FED0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073FF0C;
    }
}

loc_8073FED4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_8073FF00:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8073FF0C;
    }
}

loc_8073FF04:
{
    r0 = 1;
    goto loc_8073FF10;
}

loc_8073FF0C:
{
    r0 = 0;
}

loc_8073FF10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073FF14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80740090;
    }
}

loc_8073FF18:
{
    r4 = 0x808D0000u;
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r4 = MemoryInline::FlatRead16((r4 + -19848));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r3 + 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = (r3 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite32((r31 + 40), r0);
    goto loc_80740090;
}

loc_8073FF40:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4 = 0x808D0000u;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r0 = MemoryInline::FlatRead16((r4 + -19848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8073FF58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740090;
    }
}

loc_8073FF5C:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_8073FF64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073FFFC;
    }
}

loc_8073FF68:
{
    r30 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r28 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 * r29);
    r0 = (r3 - r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8073FF98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073FFC0;
    }
}

loc_8073FF9C:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = (r28 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r28));
    r0 = (r0 * r28);
    r4 = (r4 - r0);
    goto loc_8073FFD0;
}

loc_8073FFC0:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
}

loc_8073FFD0:
{
    r3 = (r4 + r3);
    r4 = MemoryInline::FlatRead32((r29 + 24));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r28));
    r0 = (r0 * r28);
    r3 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r29 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_8073FFFC:
{
    r29 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_80740004:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740088;
    }
}

loc_80740008:
{
    r28 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r28 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80740014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80740088;
    }
}

loc_80740018:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8074001C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80740048;
    }
}

loc_80740020:
{
    r3 = 0x809C0000u;
    r4 = (r29 + -1);
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r4 = (r4 - r0);
    goto loc_8074005C;
}

loc_80740048:
{
    r3 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
}

loc_8074005C:
{
    r3 = (r4 + r3);
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r3 = (r3 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r28 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_80740088:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_80740090:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003B gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8073FD88 func_8073FD88 preserves=true fpr_mask=0x00000000
