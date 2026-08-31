#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051C7F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051C7F4;

loc_8051C7F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 20;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r3 = (r4 + 32);
    r4 = (r30 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 100), 0, 108u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 92u, (r30 + 192));
    r0 = 38;
    r6 = MemoryInline::FlatRead32((r31 + 8));
    r5 = (r31 + 59);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
    r6_mrot_0 = (r6_rot_0 & 1040384);
    r6_mdest_0 = (r6 & -1040385);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32((r31 + 8), r6);
    r4 = (r30 + 23);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 93u, (r30 + 193));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r6_mrot_1 = (r6_rot_1 & 7680);
    r6_mdest_1 = (r6 & -7681);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite32((r31 + 8), r6);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 94u, (r30 + 194));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r6_mrot_2 = (r6_rot_2 & 496);
    r6_mdest_2 = (r6 & -497);
    r6 = (r6_mdest_2 | r6_mrot_2);
    MemoryInline::FlatWrite32((r31 + 8), r6);
    ctr = r0;
}

loc_8051C858:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051C858;
    }
}

loc_8051C86C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 100));
    r7 = 0;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
}

loc_8051C87C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051C928;
    }
}

loc_8051C880:
{
    goto loc_8051C918;
}

loc_8051C884:
{
    r0 = (r7 & 255);
    r3 = 99;
    r0 = (r0 * 12);
    r6 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 108));
}

loc_8051C89C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_8051C8A4;
    }
}

loc_8051C8A0:
{
    r3 = r0;
}

loc_8051C8A4:
{
    r0 = MemoryInline::FlatRead16((r6 + 108));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 16646144);
}

loc_8051C8B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C8BC;
    }
}

loc_8051C8B4:
{
    r3 = 59;
    goto loc_8051C8C0;
}

loc_8051C8BC:
{
    r3 = MemoryInline::FlatRead8((r6 + 110));
}

loc_8051C8C0:
{
    r0 = MemoryInline::FlatRead16((r6 + 108));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r3 = (r3_rot_2 & 130048);
    r5 = (r4 | r3);
}

loc_8051C8D0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C8DC;
    }
}

loc_8051C8D4:
{
    r0 = 999;
    goto loc_8051C8E0;
}

loc_8051C8DC:
{
    r0 = MemoryInline::FlatRead16((r6 + 112));
}

loc_8051C8E0:
{
    r4 = (r0 & 1023);
    r3 = (r7 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r7 = (r7 + 1);
    r4 = (r5 | r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = (r0 - r3);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
}

loc_8051C918:
{
    r0 = MemoryInline::FlatRead8((r31 + 16));
    r3 = (r7 & 255);
}

loc_8051C924:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8051C884;
    }
}

loc_8051C928:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 68u, (r30 + 168));
    r3 = 99;
}

loc_8051C934:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_8051C93C;
    }
}

loc_8051C938:
{
    r3 = r0;
}

loc_8051C93C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0_mrot_0 = (r0_rot_4 & -33554432);
    r0_mdest_0 = (r0 & 33554431);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 68u, (r30 + 168));
}

loc_8051C950:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C95C;
    }
}

loc_8051C954:
{
    r3 = 59;
    goto loc_8051C960;
}

loc_8051C95C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 70u, (r30 + 170));
}

loc_8051C960:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r0_mrot_1 = (r0_rot_5 & 33292288);
    r0_mdest_1 = (r0 & -33292289);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 68u, (r30 + 168));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_8051C974:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051C980;
    }
}

loc_8051C978:
{
    r0 = 999;
    goto loc_8051C984;
}

loc_8051C980:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 72u, (r30 + 172));
}

loc_8051C984:
{
    r7 = MemoryInline::FlatRead32((r31 + 4));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_0 & 261888);
    r7_mdest_0 = (r7 & -261889);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWrite32((r31 + 4), r7);
    r3 = 1380646912;
    r0 = (r3 + 18244);
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r30 + 184));
    r4 = MemoryInline::FlatRead16((r31 + 12));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7_mrot_1 = (r7_rot_1 & 252);
    r7_mdest_1 = (r7 & -253);
    r7 = (r7_mdest_1 | r7_mrot_1);
    MemoryInline::FlatWrite32((r31 + 4), r7);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r30 + 176));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r5_mrot_0 = (r5_rot_0 & 66060288);
    r5_mdest_0 = (r5 & -66060289);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWrite32((r31 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r30 + 180));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5_mrot_1 = (r5_rot_1 & -67108864);
    r5_mdest_1 = (r5 & 67108863);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32((r31 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r30 + 188));
    r5_mrot_2 = (r3 & 15);
    r5_mdest_2 = (r5 & -16);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite32((r31 + 8), r5);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 100u, (r30 + 200));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4_mrot_0 = (r4_rot_4 & 2);
    r4_mdest_0 = (r4 & -3);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r30 + 204));
    MemoryInline::FlatWrite32((r31 + 52), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r30 + 196));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4_mrot_1 = (r4_rot_5 & 508);
    r4_mdest_1 = (r4 & -509);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r31, r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051C7F4 func_8051C7F4 preserves=true fpr_mask=0x00000000
