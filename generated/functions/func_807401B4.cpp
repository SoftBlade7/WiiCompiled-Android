#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807401B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807401B4;

loc_807401B4:
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

loc_807401DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807401EC;
    }
}

loc_807401E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807401E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80740378;
    }
}

loc_807401E8:
{
    goto loc_80740498;
}

loc_807401EC:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4 = 0x808D0000u;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r0 = MemoryInline::FlatRead16((r4 + -19848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80740204:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_807402B0;
    }
}

loc_80740208:
{
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_80740210:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807402A8;
    }
}

loc_80740214:
{
    r30 = 0x809C0000u;
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r28));
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 * r28);
    r0 = (r3 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80740244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074026C;
    }
}

loc_80740248:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = (r29 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r4 = (r4 - r0);
    goto loc_8074027C;
}

loc_8074026C:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
}

loc_8074027C:
{
    r3 = (r4 + r3);
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r3 = (r3 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r28 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_807402A8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_807402B0:
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

loc_807402D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807402F8;
    }
}

loc_807402D8:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807402E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807402F0;
    }
}

loc_807402E8:
{
    r3 = r4;
    goto loc_807402F8;
}

loc_807402F0:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807402D8;
    }
}

loc_807402F8:
{
}

loc_807402FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80740338;
    }
}

loc_80740300:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_8074032C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80740338;
    }
}

loc_80740330:
{
    r0 = 1;
    goto loc_8074033C;
}

loc_80740338:
{
    r0 = 0;
}

loc_8074033C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80740340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80740498;
    }
}

loc_80740344:
{
    r4 = 0x808D0000u;
    r3 = 1717960704;
    r0 = MemoryInline::FlatRead16((r4 + -19848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 26215);
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r31 + 40), r0);
    goto loc_80740498;
}

loc_80740378:
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

loc_80740390:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740498;
    }
}

loc_80740394:
{
    r29 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_8074039C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740434;
    }
}

loc_807403A0:
{
    r30 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807403D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807403F8;
    }
}

loc_807403D4:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = (r28 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r28));
    r0 = (r0 * r28);
    r4 = (r4 - r0);
    goto loc_80740408;
}

loc_807403F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
}

loc_80740408:
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

loc_80740434:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8074043C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740490;
    }
}

loc_80740440:
{
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r7 = MemoryInline::FlatRead32((r5 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8074044C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80740490;
    }
}

loc_80740450:
{
    r6 = r31;
    r4 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80740460:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740484;
    }
}

loc_80740464:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80740470:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074047C;
    }
}

loc_80740474:
{
    r4 = r3;
    goto loc_80740484;
}

loc_8074047C:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80740464;
    }
}

loc_80740484:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWrite32((r5 + 24), r0);
    MemoryInline::FlatWrite32((r4 + 24), r7);
}

loc_80740490:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_80740498:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807401B4 func_807401B4 preserves=true fpr_mask=0x00000000
