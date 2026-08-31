#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802428E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802428E8;

loc_802428E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_802428F4:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r30 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80242914;
    }
}

loc_80242910:
{
    r29 = MemoryInline::FlatRead32((r13 + -23904));
}

loc_80242914:
{
    r4 = r29;
    r3 = 88;
    r5 = 4;
    ctx->lr = 0x80242924u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80242928:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80242944;
    }
}

loc_80242930:
{
    r4 = r30;
    r5 = r27;
    r6 = r28;
    ctx->lr = 0x80242940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80242E54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
}

loc_80242944:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80242948:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80242954;
    }
}

loc_8024294C:
{
    r3 = 0;
    goto loc_80242B80;
}

loc_80242954:
{
    r3 = (r30 * 24);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 72), r0);
    r4 = r29;
    r5 = 4;
    r3 = (r3 + 16);
    ctx->lr = 0x80242970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80240000u;
    r7 = r30;
    r4 = (r4 + 11156);
    r5 = 0;
    r6 = 24;
    ctx->lr = 0x80242988u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 76), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80242990:
{
    MemoryInline::FlatWrite32((r31 + 80), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802429C0;
    }
}

loc_80242998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8024299C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802429B8;
    }
}

loc_802429A0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x802429B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802429B8:
{
    r3 = 0;
    goto loc_80242B80;
}

loc_802429C0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_802429C4:
{
    r4 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80242B7C;
    }
}

loc_802429CC:
{
}

loc_802429D0:
{
    r6 = (r30 + -8);
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80242B3C;
    }
}

loc_802429D8:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_802429F4;
    }
}

loc_802429E0:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_802429EC:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_802429F4;
    }
}

loc_802429F0:
{
    r5 = 1;
}

loc_802429F4:
{
}

loc_802429F8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80242B3C;
    }
}

loc_802429FC:
{
    r5 = (r6 + 7);
    r3 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    r0 = 0;
    ctr = r5;
}

loc_80242A14:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80242B3C;
    }
}

loc_80242A18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 76), 0, 4u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r4 = (r4 + 8);
    r5_addr_2 = (r5 + r3);
    MemoryInline::FlatWrite32(r5_addr_2, r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5_addr_3 = (r5 + r3);
    MemoryInline::FlatWrite32(r5_addr_3, r0);
    r5 = r5_addr_3;
    MemoryInline::FlatWrite32((r5 + 12), r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    MemoryInline::FlatWrite32((r5 + 36), r0);
    MemoryInline::FlatWrite32((r5 + 40), r0);
    MemoryInline::FlatWrite32((r5 + 44), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    MemoryInline::FlatWrite32((r5 + 60), r0);
    MemoryInline::FlatWrite32((r5 + 64), r0);
    MemoryInline::FlatWrite32((r5 + 68), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 72), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 72), r0);
    MemoryInline::FlatWrite32((r5 + 84), r0);
    MemoryInline::FlatWrite32((r5 + 88), r0);
    MemoryInline::FlatWrite32((r5 + 92), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 96), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 96), r0);
    MemoryInline::FlatWrite32((r5 + 108), r0);
    MemoryInline::FlatWrite32((r5 + 112), r0);
    MemoryInline::FlatWrite32((r5 + 116), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 120), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 120), r0);
    MemoryInline::FlatWrite32((r5 + 132), r0);
    MemoryInline::FlatWrite32((r5 + 136), r0);
    MemoryInline::FlatWrite32((r5 + 140), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 144), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 144), r0);
    MemoryInline::FlatWrite32((r5 + 156), r0);
    MemoryInline::FlatWrite32((r5 + 160), r0);
    MemoryInline::FlatWrite32((r5 + 164), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 168), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 76));
    r5 = (r5 + r3);
    r3 = (r3 + 192);
    MemoryInline::FlatWrite32((r5 + 168), r0);
    MemoryInline::FlatWrite32((r5 + 180), r0);
    MemoryInline::FlatWrite32((r5 + 184), r0);
    MemoryInline::FlatWrite32((r5 + 188), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80242A18;
    }
}

loc_80242B3C:
{
    r0 = (r30 - r4);
    r5 = 0;
    r6 = (r4 * 24);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r30));
}

loc_80242B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80242B7C;
    }
}

loc_80242B54:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r3_addr_2 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_2, r5);
    r0 = MemoryInline::FlatRead32((r31 + 76));
    r3 = (r0 + r6);
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r6 = (r6 + 24);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80242B54;
    }
}

loc_80242B7C:
{
    r3 = r31;
}

loc_80242B80:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802428E8 func_802428E8 preserves=true fpr_mask=0x00000000
