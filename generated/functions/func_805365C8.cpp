#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805365C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805365C8;

loc_805365C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r6 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r6 + 2928));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_805365FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805367F4;
    }
}

loc_80536600:
{
    r5 = 0x808B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + 13084);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805367F4u:
        goto loc_805367F4;
        break;
    case 0x805367ECu:
        goto loc_805367EC;
        break;
    case 0x80536618u:
        goto loc_80536618;
        break;
    case 0x80536738u:
        goto loc_80536738;
        break;
    case 0x805367B8u:
        goto loc_805367B8;
        break;
    case 0x805367E4u:
        goto loc_805367E4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80536618:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10520));
    r5 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80536628:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80536634;
    }
}

loc_8053662C:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80536638;
}

loc_80536634:
{
    r0 = 0;
}

loc_80536638:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053663C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80536648;
    }
}

loc_80536640:
{
    r31 = 0;
    goto loc_805367F8;
}

loc_80536648:
{
    r5 = 0x809C0000u;
    r31 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r4 * 240);
    r7 = 0;
    r8 = (r5 + 40);
    r5 = (r8 + r0);
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 204));
    ctr = r4;
}

loc_80536674:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_805366A0;
    }
}

loc_80536678:
{
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r4 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8053668C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80536698;
    }
}

loc_80536690:
{
    r0 = (r7 + 1);
    r7 = (r0 & 255);
}

loc_80536698:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80536678;
    }
}

loc_805366A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_805366A4:
{
    r5 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805366B0;
    }
}

loc_805366AC:
{
    r5 = 6;
}

loc_805366B0:
{
    r4 = MemoryInline::FlatRead8((r3 + 36));
    r3 = 715849728;
    r0 = (r3 + -21845);
    r30 = 0;
    r4 = (r4 + r7);
    r29 = 0x809C0000u;
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 6);
    r0 = (r4 - r0);
    r0 = (r5 + r0);
    r28 = (r0 & 255);
    goto loc_8053670C;
}

loc_805366E8:
{
    r4 = (r30 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_805366FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80536708;
    }
}

loc_80536700:
{
    r31 = r30;
    goto loc_805367F8;
}

loc_80536708:
{
    r30 = (r30 + 1);
}

loc_8053670C:
{
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r5 = (r30 & 255);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8053671C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80536728;
    }
}

loc_80536720:
{
    r0 = 0;
    goto loc_8053672C;
}

loc_80536728:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8053672C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80536730:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805366E8;
    }
}

loc_80536734:
{
    goto loc_805367F8;
}

loc_80536738:
{
    r29 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80536754:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80536760;
    }
}

loc_80536758:
{
    r31 = 0;
    goto loc_805367F8;
}

loc_80536760:
{
    r28 = 0;
    goto loc_8053678C;
}

loc_80536768:
{
    r4 = (r28 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8053677C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80536788;
    }
}

loc_80536780:
{
    r31 = r28;
    goto loc_805367F8;
}

loc_80536788:
{
    r28 = (r28 + 1);
}

loc_8053678C:
{
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r5 = (r28 & 255);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8053679C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805367A8;
    }
}

loc_805367A0:
{
    r0 = 0;
    goto loc_805367AC;
}

loc_805367A8:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_805367AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805367B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80536768;
    }
}

loc_805367B4:
{
    goto loc_805367F8;
}

loc_805367B8:
{
    r0 = MemoryInline::FlatRead32((r6 + 2932));
    r3 = 3;
}

loc_805367C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_805367CC;
    }
}

loc_805367C8:
{
    r3 = 6;
}

loc_805367CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_805367D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805367DC;
    }
}

loc_805367D4:
{
    r31 = r30;
    goto loc_805367F8;
}

loc_805367DC:
{
    r31 = 0;
    goto loc_805367F8;
}

loc_805367E4:
{
    r31 = r30;
    goto loc_805367F8;
}

loc_805367EC:
{
    r31 = 0;
    goto loc_805367F8;
}

loc_805367F4:
{
    r31 = 0;
}

loc_805367F8:
{
    r3 = 0x809C0000u;
    r4 = (r31 & 255);
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
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
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805365C8 func_805365C8 preserves=true fpr_mask=0x00000000
