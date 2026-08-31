#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BD050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805BD050;

loc_805BD050:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    MemoryInline::FlatWriteRam32((r1 + 132), r29);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(53));
}

loc_805BD07C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BD2B0;
    }
}

loc_805BD080:
{
    r3 = 0x809C0000u;
    r30 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead8((r30 + 6376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BD090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BD0A8;
    }
}

loc_805BD094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805BD098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BD0B0;
    }
}

loc_805BD09C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805BD0A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BD0B8;
    }
}

loc_805BD0A4:
{
    goto loc_805BD0C0;
}

loc_805BD0A8:
{
    r31 = 0;
    goto loc_805BD0C4;
}

loc_805BD0B0:
{
    r31 = 1;
    goto loc_805BD0C4;
}

loc_805BD0B8:
{
    r31 = 2;
    goto loc_805BD0C4;
}

loc_805BD0C0:
{
    r31 = 3;
}

loc_805BD0C4:
{
    r3 = (r30 + 6152);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052DAF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 9036));
}

loc_805BD0D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805BD0EC;
    }
}

loc_805BD0D8:
{
}

loc_805BD0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805BD0F4;
    }
}

loc_805BD0E0:
{
}

loc_805BD0E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805BD0FC;
    }
}

loc_805BD0E8:
{
    goto loc_805BD110;
}

loc_805BD0EC:
{
    r29 = 0;
    goto loc_805BD110;
}

loc_805BD0F4:
{
    r29 = 1;
    goto loc_805BD110;
}

loc_805BD0FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 9072));
    r29 = 2;
    r0 = (r0 & 1);
}

loc_805BD108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805BD110;
    }
}

loc_805BD10C:
{
    r29 = 3;
}

loc_805BD110:
{
    r4 = 0x809C0000u;
    r9 = MemoryInline::FlatRead32((r30 + 9064));
    r8 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r8 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805BD124:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805BD144;
    }
}

loc_805BD128:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r8 + r0);
    r7 = (r4 + 56);
    goto loc_805BD148;
}

loc_805BD144:
{
    r7 = 0;
}

loc_805BD148:
{
    r4 = (r29 * 896);
    r5 = 0;
    r6 = 0x808B0000u;
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r5));
    r10 = 0;
    r6 = (r6 + 11588);
    r0 = (r9 * 112);
    r7 = (r7 + r4);
    MemoryInline::FlatWriteRam32((r1 + 84), r6);
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r5));
    r6 = (r7 + r0);
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r6 + 118));
}

loc_805BD184:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805BD198;
    }
}

loc_805BD188:
{
    MemoryInline::FlatWriteRam32((r1 + 104), r3);
    r10 = 1;
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    goto loc_805BD1D0;
}

loc_805BD198:
{
    r5 = MemoryInline::FlatRead32((r6 + 132));
}

loc_805BD1A0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r5))) {
        goto loc_805BD1B0;
    }
}

loc_805BD1A4:
{
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r10 = 1;
    goto loc_805BD1B4;
}

loc_805BD1B0:
{
    MemoryInline::FlatWriteRam32((r1 + 108), r5);
}

loc_805BD1B4:
{
    r5 = MemoryInline::FlatRead32((r6 + 128));
}

loc_805BD1BC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_805BD1CC;
    }
}

loc_805BD1C0:
{
    MemoryInline::FlatWriteRam32((r1 + 104), r3);
    r10 = 1;
    goto loc_805BD1D0;
}

loc_805BD1CC:
{
    MemoryInline::FlatWriteRam32((r1 + 104), r5);
}

loc_805BD1D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_805BD1D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BD2B0;
    }
}

loc_805BD1D8:
{
    r3 = 0;
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r3));
    r5 = MemoryInline::FlatRead16((r8 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_805BD1F8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_805BD218;
    }
}

loc_805BD1FC:
{
    r3 = 65536;
    r5 = (r5 & 255);
    r3 = (r3 + -27664);
    r3 = (r3 * r5);
    r3 = (r8 + r3);
    r8 = (r3 + 56);
    goto loc_805BD21C;
}

loc_805BD218:
{
    r8 = 0;
}

loc_805BD21C:
{
    r5 = (r8 + r4);
    r3 = 38;
    r5 = (r5 + r0);
    r6 = (r1 + 7);
    r7 = (r5 + 31);
    ctr = r3;
}

loc_805BD234:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r3 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r7_stbu_ea_2 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r3));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805BD234;
    }
}

loc_805BD248:
{
    r3 = (r8 + r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 32u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r1 + 88));
    r4 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 112), static_cast<uint16_t>(r5));
    r3 = 0x809C0000u;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r1 + 90));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 114), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r1 + 92));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 116), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r1 + 94));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 96));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 120), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 100));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 124), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 104));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 128), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 108));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 132), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r1 + 112));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r4 + 136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 116));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 140), r0);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl0_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80621410;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621410:
{
    // end of inlined leaf 0x80621410
}

loc_805BD2B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FB gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805BD050 func_805BD050 preserves=true fpr_mask=0x00000000
