#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017D130(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017D130;

loc_8017D130:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->lr = 0x8017D150u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8017F03Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r6 + 28));
}

loc_8017D160:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8017D1BC;
    }
}

loc_8017D164:
{
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r7 = (r5 + 1);
}

loc_8017D170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r7))) {
        goto loc_8017D180;
    }
}

loc_8017D174:
{
    r0 = (r5 + 9);
}

loc_8017D17C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8017D1B4;
    }
}

loc_8017D180:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r4 + 9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    goto loc_8017D1BC;
}

loc_8017D1B4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r6 + 28), r0);
}

loc_8017D1BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 1024u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8017D1C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D1C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8017D1CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D1D0:
{
    r0 = MemoryInline::FlatRead32((r6 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D1D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D1DC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
}

loc_8017D1E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8017D25C;
    }
}

loc_8017D1E8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
}

loc_8017D1F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8017D25C;
    }
}

loc_8017D1F4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    r5 = 0x80250000u;
    r5 = (r5 + 10128);
    r4 = 0;
    ctr = r0;
}

loc_8017D20C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8017D238;
    }
}

loc_8017D210:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_8017D218:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8017D22C;
    }
}

loc_8017D21C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017D22C;
    }
}

loc_8017D228:
{
    goto loc_8017D23C;
}

loc_8017D22C:
{
    r5 = (r5 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D210;
    }
}

loc_8017D238:
{
    r4 = -1;
}

loc_8017D23C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r30 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 628));
    r3 = r30;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl0_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl0_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80173E54;
    }
}

loc_inl0_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x80173E58;
}

loc_inl0_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017D25C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8017D268:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D26C:
{
    r3 = 0x80290000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + -18000);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8017D284u:
        goto loc_8017D284;
        break;
    case 0x8017D2F8u:
        goto loc_8017D2F8;
        break;
    case 0x8017D820u:
        goto loc_8017D820;
        break;
    case 0x8017D8A8u:
        goto loc_8017D8A8;
        break;
    case 0x8017D930u:
        goto loc_8017D930;
        break;
    case 0x8017D9B8u:
        goto loc_8017D9B8;
        break;
    case 0x8017DA40u:
        goto loc_8017DA40;
        break;
    case 0x8017DAC8u:
        goto loc_8017DAC8;
        break;
    case 0x8017DB50u:
        goto loc_8017DB50;
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
        ctx->gpr[9] = r9;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8017D284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8017D288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D28C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8017D290:
{
    r4 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D2B8;
    }
}

loc_8017D298:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1020u, (r30 + 1020));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017D2B8;
    }
}

loc_8017D2A8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 984u, (r30 + 984));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D2B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017D2BC;
    }
}

loc_8017D2B8:
{
    r4 = 0;
}

loc_8017D2BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8017D2C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D2EC;
    }
}

loc_8017D2C4:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 1020u, (r30 + 1020));
    r3 = r31;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl1_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl1_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x80173E54;
    }
}

loc_inl1_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x80173E58;
}

loc_inl1_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = 12;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 112), r3);
    MemoryInline::FlatWrite32((r30 + 104), r0);
    goto loc_8017DBD4;
}

loc_8017D2EC:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r30 + 104), r0);
    goto loc_8017DBD4;
}

loc_8017D2F8:
{
}

loc_8017D2FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8017D58C;
    }
}

loc_8017D300:
{
    r3 = 0x80250000u;
    r0 = 37;
    r3 = (r3 + 10224);
    r31 = 0;
    ctr = r0;
}

loc_8017D314:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017D31C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D330;
    }
}

loc_8017D320:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017D328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8017D330;
    }
}

loc_8017D32C:
{
    goto loc_8017D360;
}

loc_8017D330:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = (r31 + 1);
}

loc_8017D33C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D350;
    }
}

loc_8017D340:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017D348:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8017D350;
    }
}

loc_8017D34C:
{
    goto loc_8017D360;
}

loc_8017D350:
{
    r3 = (r3 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D314;
    }
}

loc_8017D35C:
{
    r31 = -1;
}

loc_8017D360:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017D378:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D380:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D394;
    }
}

loc_8017D384:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D38C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D394;
    }
}

loc_8017D390:
{
    goto loc_8017D3C4;
}

loc_8017D394:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017D3A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D3B4;
    }
}

loc_8017D3A4:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D3AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D3B4;
    }
}

loc_8017D3B0:
{
    goto loc_8017D3C4;
}

loc_8017D3B4:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D378;
    }
}

loc_8017D3C0:
{
    r8 = -1;
}

loc_8017D3C4:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r7 = 0;
    ctr = r3;
}

loc_8017D3D8:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D3E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D3F4;
    }
}

loc_8017D3E4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D3EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D3F4;
    }
}

loc_8017D3F0:
{
    goto loc_8017D424;
}

loc_8017D3F4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017D400:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D414;
    }
}

loc_8017D404:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D40C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D414;
    }
}

loc_8017D410:
{
    goto loc_8017D424;
}

loc_8017D414:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D3D8;
    }
}

loc_8017D420:
{
    r7 = -1;
}

loc_8017D424:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r6 = 0;
    ctr = r3;
}

loc_8017D438:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D440:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D454;
    }
}

loc_8017D444:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D44C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D454;
    }
}

loc_8017D450:
{
    goto loc_8017D484;
}

loc_8017D454:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017D460:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D474;
    }
}

loc_8017D464:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D46C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D474;
    }
}

loc_8017D470:
{
    goto loc_8017D484;
}

loc_8017D474:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D438;
    }
}

loc_8017D480:
{
    r6 = -1;
}

loc_8017D484:
{
    r9 = 0x80250000u;
    r3 = 37;
    r9 = (r9 + 10224);
    r5 = 0;
    ctr = r3;
}

loc_8017D498:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017D4A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D4B4;
    }
}

loc_8017D4A4:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017D4AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D4B4;
    }
}

loc_8017D4B0:
{
    goto loc_8017D4E4;
}

loc_8017D4B4:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017D4C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D4D4;
    }
}

loc_8017D4C4:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017D4CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D4D4;
    }
}

loc_8017D4D0:
{
    goto loc_8017D4E4;
}

loc_8017D4D4:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D498;
    }
}

loc_8017D4E0:
{
    r5 = -1;
}

loc_8017D4E4:
{
}

loc_8017D4E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017D54C;
    }
}

loc_8017D4EC:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D54C;
    }
}

loc_8017D504:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D518:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D54C;
    }
}

loc_8017D51C:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D530:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D54C;
    }
}

loc_8017D534:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D548:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017D550;
    }
}

loc_8017D54C:
{
    r0 = 0;
}

loc_8017D550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D584;
    }
}

loc_8017D558:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl2_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl2_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x80173E54;
    }
}

loc_inl2_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x80173E58;
}

loc_inl2_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    MemoryInline::FlatWrite32((r30 + 116), r31);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_8017DBD4;
}

loc_8017D584:
{
    MemoryInline::FlatWrite32((r30 + 108), r31);
    goto loc_8017DBD4;
}

loc_8017D58C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017D590:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D594:
{
    r3 = 0x80250000u;
    r0 = 37;
    r3 = (r3 + 10224);
    r31 = 0;
    ctr = r0;
}

loc_8017D5A8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017D5B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D5C4;
    }
}

loc_8017D5B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017D5BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8017D5C4;
    }
}

loc_8017D5C0:
{
    goto loc_8017D5F4;
}

loc_8017D5C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = (r31 + 1);
}

loc_8017D5D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D5E4;
    }
}

loc_8017D5D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017D5DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8017D5E4;
    }
}

loc_8017D5E0:
{
    goto loc_8017D5F4;
}

loc_8017D5E4:
{
    r3 = (r3 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D5A8;
    }
}

loc_8017D5F0:
{
    r31 = -1;
}

loc_8017D5F4:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017D60C:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D614:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D628;
    }
}

loc_8017D618:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D620:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D628;
    }
}

loc_8017D624:
{
    goto loc_8017D658;
}

loc_8017D628:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017D634:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D648;
    }
}

loc_8017D638:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D640:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D648;
    }
}

loc_8017D644:
{
    goto loc_8017D658;
}

loc_8017D648:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D60C;
    }
}

loc_8017D654:
{
    r8 = -1;
}

loc_8017D658:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r7 = 0;
    ctr = r3;
}

loc_8017D66C:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D674:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D688;
    }
}

loc_8017D678:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D688;
    }
}

loc_8017D684:
{
    goto loc_8017D6B8;
}

loc_8017D688:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017D694:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D6A8;
    }
}

loc_8017D698:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D6A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D6A8;
    }
}

loc_8017D6A4:
{
    goto loc_8017D6B8;
}

loc_8017D6A8:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D66C;
    }
}

loc_8017D6B4:
{
    r7 = -1;
}

loc_8017D6B8:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r6 = 0;
    ctr = r3;
}

loc_8017D6CC:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D6D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D6E8;
    }
}

loc_8017D6D8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D6E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D6E8;
    }
}

loc_8017D6E4:
{
    goto loc_8017D718;
}

loc_8017D6E8:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017D6F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D708;
    }
}

loc_8017D6F8:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D700:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D708;
    }
}

loc_8017D704:
{
    goto loc_8017D718;
}

loc_8017D708:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D6CC;
    }
}

loc_8017D714:
{
    r6 = -1;
}

loc_8017D718:
{
    r9 = 0x80250000u;
    r3 = 37;
    r9 = (r9 + 10224);
    r5 = 0;
    ctr = r3;
}

loc_8017D72C:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017D734:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D748;
    }
}

loc_8017D738:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017D740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D748;
    }
}

loc_8017D744:
{
    goto loc_8017D778;
}

loc_8017D748:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017D754:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D768;
    }
}

loc_8017D758:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017D760:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D768;
    }
}

loc_8017D764:
{
    goto loc_8017D778;
}

loc_8017D768:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D72C;
    }
}

loc_8017D774:
{
    r5 = -1;
}

loc_8017D778:
{
}

loc_8017D77C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017D7E0;
    }
}

loc_8017D780:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D7E0;
    }
}

loc_8017D798:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D7AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D7E0;
    }
}

loc_8017D7B0:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D7C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D7E0;
    }
}

loc_8017D7C8:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D7DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017D7E4;
    }
}

loc_8017D7E0:
{
    r0 = 0;
}

loc_8017D7E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D7E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D818;
    }
}

loc_8017D7EC:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl3_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl3_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x80173E54;
    }
}

loc_inl3_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x80173E58;
}

loc_inl3_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    MemoryInline::FlatWrite32((r30 + 116), r31);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_8017DBD4;
}

loc_8017D818:
{
    MemoryInline::FlatWrite32((r30 + 108), r31);
    goto loc_8017DBD4;
}

loc_8017D820:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017D824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D828:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017D83C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017D844:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017D858;
    }
}

loc_8017D848:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017D850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D858;
    }
}

loc_8017D854:
{
    goto loc_8017D888;
}

loc_8017D858:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017D864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017D878;
    }
}

loc_8017D868:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017D870:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D878;
    }
}

loc_8017D874:
{
    goto loc_8017D888;
}

loc_8017D878:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D83C;
    }
}

loc_8017D884:
{
    r3 = -1;
}

loc_8017D888:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl4_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl4_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_0x80173E54;
    }
}

loc_inl4_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x80173E58;
}

loc_inl4_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017D8A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017D8AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D8B0:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017D8C4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017D8CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D8E0;
    }
}

loc_8017D8D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017D8D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D8E0;
    }
}

loc_8017D8DC:
{
    goto loc_8017D910;
}

loc_8017D8E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017D8EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D900;
    }
}

loc_8017D8F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017D8F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D900;
    }
}

loc_8017D8FC:
{
    goto loc_8017D910;
}

loc_8017D900:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D8C4;
    }
}

loc_8017D90C:
{
    r3 = -1;
}

loc_8017D910:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl5_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl5_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x80173E54;
    }
}

loc_inl5_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x80173E58;
}

loc_inl5_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017D930:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017D934:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D938:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017D94C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017D954:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017D968;
    }
}

loc_8017D958:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017D960:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D968;
    }
}

loc_8017D964:
{
    goto loc_8017D998;
}

loc_8017D968:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017D974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017D988;
    }
}

loc_8017D978:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017D980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D988;
    }
}

loc_8017D984:
{
    goto loc_8017D998;
}

loc_8017D988:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D94C;
    }
}

loc_8017D994:
{
    r3 = -1;
}

loc_8017D998:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl6_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl6_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_0x80173E54;
    }
}

loc_inl6_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x80173E58;
}

loc_inl6_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017D9B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017D9BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D9C0:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017D9D4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017D9DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8017D9F0;
    }
}

loc_8017D9E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017D9E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017D9F0;
    }
}

loc_8017D9EC:
{
    goto loc_8017DA20;
}

loc_8017D9F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017D9FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8017DA10;
    }
}

loc_8017DA00:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017DA08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017DA10;
    }
}

loc_8017DA0C:
{
    goto loc_8017DA20;
}

loc_8017DA10:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D9D4;
    }
}

loc_8017DA1C:
{
    r3 = -1;
}

loc_8017DA20:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl7_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl7_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl7_0x80173E54;
    }
}

loc_inl7_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl7_0x80173E58;
}

loc_inl7_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl7_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl7_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017DA40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017DA44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017DA48:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017DA5C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017DA64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8017DA78;
    }
}

loc_8017DA68:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017DA70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017DA78;
    }
}

loc_8017DA74:
{
    goto loc_8017DAA8;
}

loc_8017DA78:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017DA84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8017DA98;
    }
}

loc_8017DA88:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017DA90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017DA98;
    }
}

loc_8017DA94:
{
    goto loc_8017DAA8;
}

loc_8017DA98:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017DA5C;
    }
}

loc_8017DAA4:
{
    r3 = -1;
}

loc_8017DAA8:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl8_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl8_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl8_0x80173E54;
    }
}

loc_inl8_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl8_0x80173E58;
}

loc_inl8_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl8_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl8_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017DAC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8017DACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017DAD0:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017DAE4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017DAEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8017DB00;
    }
}

loc_8017DAF0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017DAF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8017DB00;
    }
}

loc_8017DAFC:
{
    goto loc_8017DB30;
}

loc_8017DB00:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017DB0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8017DB20;
    }
}

loc_8017DB10:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017DB18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8017DB20;
    }
}

loc_8017DB1C:
{
    goto loc_8017DB30;
}

loc_8017DB20:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017DAE4;
    }
}

loc_8017DB2C:
{
    r3 = -1;
}

loc_8017DB30:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl9_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl9_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl9_0x80173E54;
    }
}

loc_inl9_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x80173E58;
}

loc_inl9_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_8017DBD4;
}

loc_8017DB50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8017DB54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017DB58:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017DB6C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017DB74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8017DB88;
    }
}

loc_8017DB78:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017DB80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8017DB88;
    }
}

loc_8017DB84:
{
    goto loc_8017DBB8;
}

loc_8017DB88:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017DB94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8017DBA8;
    }
}

loc_8017DB98:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017DBA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8017DBA8;
    }
}

loc_8017DBA4:
{
    goto loc_8017DBB8;
}

loc_8017DBA8:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017DB6C;
    }
}

loc_8017DBB4:
{
    r3 = -1;
}

loc_8017DBB8:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl10_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl10_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl10_0x80173E54;
    }
}

loc_inl10_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x80173E58;
}

loc_inl10_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
}

loc_8017DBD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80003FB gpr_write=0xF8000BFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017D130 func_8017D130 preserves=true fpr_mask=0x00000000
