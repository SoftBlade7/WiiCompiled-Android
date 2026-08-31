#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EB3CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807EB3CC;

loc_807EB3CC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 176);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 172u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = 0x809C0000u;
    r28 = r3;
    r30 = 0x808B0000u;
    r31 = 0x808D0000u;
    r3 = MemoryInline::FlatRead32((r5 + 16216));
    r30 = (r30 + -27736);
    r31 = (r31 + 14360);
    r5 = (r1 + 80);
    // inline leaf 0x807E08E4 (22 guest instruction(s))
}

loc_inl1_0x807E08E4:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 144));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32(r5, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl1_0x807E0924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x807E0928:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 30568));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    goto loc_inl1_cont_807E08E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_807E08E4:
{
    // end of inlined leaf 0x807E08E4
    r0 = MemoryInline::FlatRead8((r28 + 436));
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r0 = (r0 * 240);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    r6 = MemoryInline::FlatRead32((r3 + -10456));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = (r6 + r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
}

loc_807EB454:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807EB46C;
    }
}

loc_807EB460:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
}

loc_807EB46C:
{
    r3 = 0x809C0000u;
    r5 = 1127219200;
    r4 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r28 + 436));
    r29 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = MemoryInline::FlatRead8((r6 + 36));
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    MemoryInline::FlatWriteRam32((r1 + 136), r5);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f6.d = MemoryInline::FlatReadFloat64((r30 + 144));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    MemoryInline::FlatWriteRam32((r1 + 132), r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 124));
    MemoryInline::FlatWriteRam32((r1 + 128), r5);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    r4 = MemoryInline::FlatRead32((r28 + 408));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 124), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 52), f3.d);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_807EB508:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(106))) {
        goto loc_807EB514;
    }
}

loc_807EB50C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(107));
}

loc_807EB510:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807EB524;
    }
}

loc_807EB514:
{
}

loc_807EB518:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(110))) {
        goto loc_807EB53C;
    }
}

loc_807EB51C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(111));
}

loc_807EB520:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807EB53C;
    }
}

loc_807EB524:
{
    r3 = r28;
    ctx->lr = 0x807EB52Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807EC7F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r28 + 436));
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_1 & 134217727);
}

loc_807EB53C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 436), 0, 20u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r28 + 436));
    r5 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_807EB558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807EB564;
    }
}

loc_807EB55C:
{
}

loc_807EB560:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807EB6E8;
    }
}

loc_807EB564:
{
    r27 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r27 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 6392));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r28 + 436));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r6 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = (r1 + 100);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r5 = (r1 + 72);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r6 + 16216));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    // inline leaf 0x807E08E4 (22 guest instruction(s))
}

loc_inl6_0x807E08E4:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 144));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32(r5, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x807E0924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x807E0928:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 30568));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    goto loc_inl6_cont_807E08E4;
}

loc_inl6_return:
{
}

loc_inl6_cont_807E08E4:
{
    // end of inlined leaf 0x807E08E4
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x807EB610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x807EB630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f2.d = f31.d;
    f0.d = (-(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 440), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r28 + 452));
    r0 = 255;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 128));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r28 + 452));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 52u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 88), f0.d);
    r3 = MemoryInline::FlatRead8((r4 + 187));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r1 + 92), f0.d);
    r3 = (r3 & 254);
    r3 = (r3 | 1);
    MemoryInline::FlatWrite8((r4 + 187), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r28 + 440));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r1 + 96), f1.d);
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r28 + 444));
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r28 + 448));
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r28 + 440));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r28 + 444));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r28 + 448));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 60), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 52), f0.d);
    }
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    goto loc_807EB8B8;
}

loc_807EB6E8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r28 + 452));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 440));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r28 + 444));
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r28 + 448));
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 440));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r28 + 444));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r28 + 448));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f2.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r28 + 436));
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r0 * 240);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(24));
}

loc_807EB778:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807EB8B8;
    }
}

loc_807EB780:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 440));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x807EB794u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r27 = r3;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807EB7A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EB7C0;
    }
}

loc_807EB7A4:
{
    r3 = 0x808D0000u;
    r5 = 0x808D0000u;
    r3 = (r3 + 14920);
    r4 = 252;
    r5 = (r5 + 14876);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807EB7C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807EB7C0:
{
    r3 = r27;
    // inline leaf 0x80080AD0 (17 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r9 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 15);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 15);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r8 = (r8_rot_1 & 4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r5 = (r5_rot_1 & 60);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 4);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 4);
    r4 = (r3 * 20);
    r5 = (r8 + r5);
    r6 = (r7 + r6);
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r9 + r0);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x80080AD0
    r4 = MemoryInline::FlatRead16((r31 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r4 = (r4 ^ -2147483648);
    r6 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWriteRam32((r1 + 140), r4);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 112));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 136));
    r5 = MemoryInline::FlatRead8((r3 + 1));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 132));
    r3 = MemoryInline::FlatRead32((r28 + 440));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    r12 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    r12 = MemoryInline::FlatRead32((r12 + 104));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    f0.d = PPC_Fctiwz(f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f0.d);
    r6 = MemoryInline::FlatRead8((r1 + 16));
    r5 = MemoryInline::FlatRead8((r1 + 17));
    r4 = MemoryInline::FlatRead8((r1 + 19));
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctr = r12;
    ctx->lr = 0x807EB864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r27 = r3;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807EB870:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EB890;
    }
}

loc_807EB874:
{
    r3 = 0x808D0000u;
    r5 = 0x808D0000u;
    r3 = (r3 + 14976);
    r4 = 258;
    r5 = (r5 + 14932);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807EB890u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807EB890:
{
    r3 = r27;
    // inline leaf 0x80080B20 (17 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r9 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 15);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r8 = (r8_rot_2 & 4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r5 = (r5_rot_2 & 60);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r7 = (r7_rot_2 & 4);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r6 = (r6_rot_2 & 4);
    r4 = (r3 * 20);
    r5 = (r8 + r5);
    r6 = (r7 + r6);
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r9 + r0);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x80080B20
    r0 = MemoryInline::FlatRead8((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_807EB8B8:
{
    r3 = 0x809C0000u;
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_807EB8CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807EB954;
    }
}

loc_807EB8D0:
{
    r0 = MemoryInline::FlatRead8((r28 + 436));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807EB8E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EB8F4;
    }
}

loc_807EB8E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807EB8EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EB924;
    }
}

loc_807EB8F0:
{
    goto loc_807EB9C0;
}

loc_807EB8F4:
{
    r3 = MemoryInline::FlatRead32((r28 + 444));
    r31 = 1;
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 448));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    goto loc_807EB9C0;
}

loc_807EB924:
{
    r3 = MemoryInline::FlatRead32((r28 + 444));
    r31 = 2;
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 448));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    goto loc_807EB9C0;
}

loc_807EB954:
{
    r0 = MemoryInline::FlatRead8((r28 + 436));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807EB968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EB974;
    }
}

loc_807EB96C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807EB970:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EB9A0;
    }
}

loc_807EB974:
{
    r3 = MemoryInline::FlatRead32((r28 + 444));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 444));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    goto loc_807EB9C0;
}

loc_807EB9A0:
{
    r3 = MemoryInline::FlatRead32((r28 + 444));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 448));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
}

loc_807EB9C0:
{
    r3 = (r28 + 152);
    r4 = 1;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r4 = r31;
    ctx->lr = 0x807EB9D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CB20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 176);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EB3CC func_807EB3CC preserves=false fpr_mask=0x80000000
