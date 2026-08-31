#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088AB04(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088AB04;

loc_8088AB04:
{
    MemoryInline::FlatWriteRam32((r1 + -928), r1);
    r1 = (r1 + -928);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 932), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 912), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 920);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 896), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 904);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 880), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 888);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 864), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 872);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 848), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 856);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r4 = 0x809C0000u;
    r4 = (r4 + 19272);
    r5 = (r1 + 396);
    MemoryInline::FlatWriteRam32((r1 + 844), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 10280);
    MemoryInline::FlatWriteRam32((r1 + 840), r30);
    MemoryInline::FlatWriteRam32((r1 + 836), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 832), r28);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r4 = (r1 + 408);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 236));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 576), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 228));
    MemoryInline::FlatWriteRamFloat32((r1 + 580), f0.d);
    r7 = MemoryInline::FlatRead32((r1 + 576));
    MemoryInline::FlatWriteRamFloat32((r1 + 584), f3.d);
    r6 = MemoryInline::FlatRead32((r1 + 580));
    r8 = MemoryInline::FlatRead32((r3 + 228));
    r0 = MemoryInline::FlatRead32((r3 + 232));
    MemoryInline::FlatWriteRam32((r1 + 412), r0);
    r0 = MemoryInline::FlatRead32((r1 + 584));
    MemoryInline::FlatWriteRam32((r1 + 408), r8);
    r8 = MemoryInline::FlatRead32((r3 + 236));
    r3 = (r1 + 384);
    MemoryInline::FlatWriteRam32((r1 + 416), r8);
    MemoryInline::FlatWriteRam32((r1 + 396), r7);
    MemoryInline::FlatWriteRam32((r1 + 400), r6);
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    ctx->lr = 0x8088ABC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 384));
    r3 = (r1 + 564);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 388));
    r4 = (r29 + 216);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 392));
    r5 = (r1 + 576);
    MemoryInline::FlatWriteRamFloat32((r1 + 576), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 580), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 584), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r6 = MemoryInline::FlatRead32((r29 + 216));
    r3 = (r1 + 348);
    r0 = MemoryInline::FlatRead32((r29 + 220));
    r4 = (r1 + 372);
    MemoryInline::FlatWriteRam32((r1 + 376), r0);
    r5 = (r1 + 360);
    r7 = MemoryInline::FlatRead32((r1 + 564));
    MemoryInline::FlatWriteRam32((r1 + 372), r6);
    r6 = MemoryInline::FlatRead32((r1 + 568));
    r8 = MemoryInline::FlatRead32((r29 + 224));
    r0 = MemoryInline::FlatRead32((r1 + 572));
    MemoryInline::FlatWriteRam32((r1 + 380), r8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 232));
    MemoryInline::FlatWriteRam32((r1 + 360), r7);
    MemoryInline::FlatWriteRam32((r1 + 364), r6);
    MemoryInline::FlatWriteRam32((r1 + 368), r0);
    ctx->lr = 0x8088AC2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 348));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 352));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 356));
    MemoryInline::FlatWriteRamFloat32((r1 + 564), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 236));
    MemoryInline::FlatWriteRamFloat32((r1 + 572), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 240));
    MemoryInline::FlatWriteRamFloat32((r1 + 568), f2.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 392));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f29.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8088AC7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088AC98;
    }
}

loc_8088AC80:
{
    f28.d = f0.d;
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_8088AC88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088AC98;
    }
}

loc_8088AC8C:
{
    f1.d = (-(f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f29.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8088AC98:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 240), 0, 165u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r29 + 392));
    r0 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 240));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 244));
        }
    }
    f27.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 820u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 548u, (r1 + 556), r3);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::WriteResolved32(guest_range_1, 544u, (r1 + 552), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 248));
    MemoryInline::WriteResolved32(guest_range_1, 552u, (r1 + 560), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 252));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 256));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 532u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 536u, (r1 + 544), r3);
        MemoryInline::WriteResolved32(guest_range_1, 532u, (r1 + 540), r4);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 260));
    MemoryInline::WriteResolved32(guest_range_1, 540u, (r1 + 548), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 268));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r29 + 272));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r29 + 276));
    MemoryInline::FlatWrite8((r29 + 388), static_cast<uint8_t>(r0));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r29 + 264));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r29 + 280));
    MemoryInline::WriteResolved32(guest_range_1, 520u, (r1 + 528), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 728u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 728u, (r1 + 736), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 732u, (r1 + 740), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 736u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 736u, (r1 + 744), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 740u, (r1 + 748), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 744u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 744u, (r1 + 752), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 748u, (r1 + 756), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 816u, (r1 + 824), r0);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 164u, (r29 + 404));
    MemoryInline::WriteResolved32(guest_range_1, 524u, (r1 + 532), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088AD20:
{
    MemoryInline::FlatWriteRam32((r1 + 536), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088AD80;
    }
}

loc_8088AD28:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 248));
    r28 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 180));
    r30 = 1693188096;
    r3 = MemoryInline::FlatRead32((r28 + 12100));
    r4 = (r1 + 564);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r5 = (r30 + -8193);
    r6 = 1;
    ctx->lr = 0x8088AD50u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078E4F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 180));
    r3 = MemoryInline::FlatRead32((r28 + 12100));
    r4 = (r1 + 564);
    r5 = (r5 + 15364);
    r6 = (r30 + -8193);
    r7 = (r1 + 736);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x8088AD78u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807907F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r29 + 388), static_cast<uint8_t>(r3));
    goto loc_8088ADB4;
}

loc_8088AD80:
{
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r6 = 1693188096;
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 196));
    r4 = (r1 + 564);
    r5 = (r5 + 15364);
    r6 = (r6 + -8193);
    r7 = (r1 + 736);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x8088ADB0u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F784u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r29 + 388), static_cast<uint8_t>(r3));
}

loc_8088ADB4:
{
    r0 = MemoryInline::FlatRead8((r29 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088ADBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B600;
    }
}

loc_8088ADC0:
{
    f7.d = MemoryInline::FlatReadFloat32((r1 + 760));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 764));
    f1.d = PpcFmulsInline(f7.d, f7.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 768));
    f0.d = PpcFmulsInline(f5.d, f5.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 564));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 568));
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 572));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 564), f7.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8088AE04:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 568), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 572), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088AE18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088AEFC;
    }
}

loc_8088AE1C:
{
    r5 = MemoryInline::FlatRead32((r1 + 760));
    r3 = (r1 + 516);
    r4 = MemoryInline::FlatRead32((r1 + 764));
    r0 = MemoryInline::FlatRead32((r1 + 768));
    MemoryInline::FlatWriteRam32((r1 + 516), r5);
    MemoryInline::FlatWriteRam32((r1 + 520), r4);
    MemoryInline::FlatWriteRam32((r1 + 524), r0);
    ctx->lr = 0x8088AE3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r10 = MemoryInline::FlatRead32((r1 + 576));
    r3 = (r1 + 312);
    r9 = MemoryInline::FlatRead32((r1 + 580));
    r4 = (r1 + 336);
    r8 = MemoryInline::FlatRead32((r1 + 584));
    r5 = (r1 + 324);
    r7 = MemoryInline::FlatRead32((r1 + 516));
    r6 = MemoryInline::FlatRead32((r1 + 520));
    r0 = MemoryInline::FlatRead32((r1 + 524));
    MemoryInline::FlatWriteRam32((r1 + 336), r10);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 252));
    MemoryInline::FlatWriteRam32((r1 + 340), r9);
    MemoryInline::FlatWriteRam32((r1 + 344), r8);
    MemoryInline::FlatWriteRam32((r1 + 324), r7);
    MemoryInline::FlatWriteRam32((r1 + 328), r6);
    MemoryInline::FlatWriteRam32((r1 + 332), r0);
    ctx->lr = 0x8088AE80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80538220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 312));
    r3 = (r1 + 276);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 316));
    r4 = (r1 + 300);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 320));
    r5 = (r1 + 288);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 288), 0, 300u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 292u, (r1 + 580), f1.d);
    r7 = MemoryInline::FlatRead32((r1 + 516));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 288u, (r1 + 576), f2.d);
    r6 = MemoryInline::FlatRead32((r1 + 520));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 296u, (r1 + 584), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 524));
    r9 = MemoryInline::FlatRead32((r29 + 240));
    r8 = MemoryInline::FlatRead32((r29 + 244));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 304), r8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 224));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 300), r9);
    r8 = MemoryInline::FlatRead32((r29 + 248));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 308), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 288), r7);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 292), r6);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 296), r0);
    ctx->lr = 0x8088AEDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 276));
    r3 = (r1 + 552);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 280));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    MemoryInline::FlatWriteRamFloat32((r1 + 552), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 556), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 560), f0.d);
    ctx->lr = 0x8088AEFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8088AEFC:
{
    r3 = (r1 + 504);
    r4 = (r1 + 564);
    r5 = (r29 + 216);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 504));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 508));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 512));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088AF34:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088AF40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088B020;
    }
}

loc_8088AF44:
{
    r3 = (r1 + 264);
    r4 = (r29 + 240);
    r5 = (r1 + 504);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f6.d = MemoryInline::FlatReadFloat32((r1 + 264));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 268));
    f2.d = PpcFmulsInline(f6.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 540), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 544), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 548), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088AF88:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088AF94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088AFB4;
    }
}

loc_8088AF98:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 252));
    MemoryInline::FlatWriteRamFloat32((r1 + 540), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 256));
    MemoryInline::FlatWriteRamFloat32((r1 + 544), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 260));
    MemoryInline::FlatWriteRamFloat32((r1 + 548), f0.d);
    goto loc_8088AFBC;
}

loc_8088AFB4:
{
    r3 = (r1 + 540);
    ctx->lr = 0x8088AFBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8088AFBC:
{
    r6 = MemoryInline::FlatRead32((r29 + 252));
    r3 = (r1 + 228);
    r0 = MemoryInline::FlatRead32((r29 + 256));
    r4 = (r1 + 252);
    MemoryInline::FlatWriteRam32((r1 + 256), r0);
    r5 = (r1 + 240);
    r7 = MemoryInline::FlatRead32((r1 + 540));
    MemoryInline::FlatWriteRam32((r1 + 252), r6);
    r6 = MemoryInline::FlatRead32((r1 + 544));
    r8 = MemoryInline::FlatRead32((r29 + 260));
    r0 = MemoryInline::FlatRead32((r1 + 548));
    MemoryInline::FlatWriteRam32((r1 + 260), r8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 256));
    MemoryInline::FlatWriteRam32((r1 + 240), r7);
    MemoryInline::FlatWriteRam32((r1 + 244), r6);
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    ctx->lr = 0x8088B000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 228));
    r3 = (r1 + 540);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 232));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 236));
    MemoryInline::FlatWriteRamFloat32((r1 + 540), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 544), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 548), f0.d);
    ctx->lr = 0x8088B020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8088B020:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 808));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 260));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088B02C:
{
    r0 = cr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B5C0;
    }
}

loc_8088B038:
{
    r30 = (r1 + 552);
    r3 = (r1 + 216);
    r4 = (r29 + 376);
    r5 = (r1 + 564);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r7 = MemoryInline::FlatRead32((r1 + 552));
    r3 = (r1 + 492);
    r6 = MemoryInline::FlatRead32((r1 + 556));
    r4 = (r1 + 216);
    r0 = MemoryInline::FlatRead32((r1 + 560));
    r5 = (r1 + 204);
    MemoryInline::FlatWriteRam32((r1 + 204), r7);
    MemoryInline::FlatWriteRam32((r1 + 208), r6);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    ctx->lr = 0x8088B074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 492));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 496));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 500));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088B09C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B0A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088B34C;
    }
}

loc_8088B0AC:
{
    r5 = MemoryInline::FlatRead32((r1 + 492));
    r3 = (r1 + 480);
    r4 = MemoryInline::FlatRead32((r1 + 496));
    r0 = MemoryInline::FlatRead32((r1 + 500));
    MemoryInline::FlatWriteRam32((r1 + 480), r5);
    MemoryInline::FlatWriteRam32((r1 + 484), r4);
    MemoryInline::FlatWriteRam32((r1 + 488), r0);
    ctx->lr = 0x8088B0CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead32((r1 + 552));
    r3 = (r1 + 468);
    r6 = MemoryInline::FlatRead32((r1 + 556));
    r4 = (r1 + 576);
    r0 = MemoryInline::FlatRead32((r1 + 560));
    r5 = (r1 + 192);
    MemoryInline::FlatWriteRam32((r1 + 192), r7);
    MemoryInline::FlatWriteRam32((r1 + 196), r6);
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    ctx->lr = 0x8088B0F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 472));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 476));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088B11C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r5 = (r1 + 468);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B12C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B134;
    }
}

loc_8088B130:
{
    r5 = (r1 + 480);
}

loc_8088B134:
{
    r4 = MemoryInline::FlatRead32(r5);
    r3 = (r1 + 456);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 460), r0);
    MemoryInline::FlatWriteRam32((r1 + 456), r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 464), r0);
    ctx->lr = 0x8088B154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 480));
    r3 = (r1 + 12);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 456));
    r4 = (r1 + 480);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 484));
    r5 = (r1 + 456);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 460));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 488));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 464));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088B1B4u;
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
    f2.d = f31.d;
    ctx->lr = 0x8088B1BCu;
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
    InvokeDirectCpu<0x8022F8E4u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088B1C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8088B1CC;
    }
}

loc_8088B1C8:
{
    goto loc_8088B1D0;
}

loc_8088B1CC:
{
    f1.d = (-(f1.d));
}

loc_8088B1D0:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 264));
    r3 = (r1 + 444);
    r4 = (r1 + 480);
    r5 = (r1 + 456);
    f31.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 444));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 448));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 452));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088B214:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B240;
    }
}

loc_8088B224:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 552));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 556));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 560));
    MemoryInline::FlatWriteRamFloat32((r1 + 444), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 448), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 452), f0.d);
    goto loc_8088B248;
}

loc_8088B240:
{
    r3 = (r1 + 444);
    ctx->lr = 0x8088B248u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8088B248:
{
    r3 = 0x802A0000u;
    f1.d = f31.d;
    r4 = (r3 + 16640);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r1 + 688);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 700), f3.d);
    r4 = (r1 + 444);
    MemoryInline::FlatWriteRamFloat32((r1 + 716), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 732), f0.d);
    ctx->lr = 0x8088B278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 492));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 496));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 500));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088B29Cu;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 268));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8088B2AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8088B2B4;
    }
}

loc_8088B2B0:
{
    goto loc_8088B2B8;
}

loc_8088B2B4:
{
    f31.d = f0.d;
}

loc_8088B2B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 472));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 476));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088B2DCu;
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
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 248));
    r3 = (r1 + 180);
    r4 = (r1 + 688);
    r5 = (r1 + 456);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f1.d = f31.d;
    r3 = (r1 + 168);
    r4 = (r1 + 180);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 156);
    r4 = (r1 + 168);
    r5 = (r1 + 468);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 576));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 580));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 584));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 576), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 580), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 584), f0.d);
}

loc_8088B34C:
{
    r7 = MemoryInline::FlatRead32((r1 + 552));
    r3 = (r1 + 432);
    r6 = MemoryInline::FlatRead32((r1 + 556));
    r4 = (r1 + 504);
    r0 = MemoryInline::FlatRead32((r1 + 560));
    r5 = (r1 + 144);
    MemoryInline::FlatWriteRam32((r1 + 144), r7);
    MemoryInline::FlatWriteRam32((r1 + 148), r6);
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    ctx->lr = 0x8088B374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 432));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 436));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 440));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088B398u;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 272));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 264));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 276));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 816));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 260));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8088B3B8:
{
    f0.d = PpcFmulsInline(f2.d, f3.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    r0 = cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B3C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B528;
    }
}

loc_8088B3CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 280));
    r4 = (r1 + 796);
    r3 = (r1 + 132);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 796));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 800));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 804));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 576));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 580));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 584));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    SetCRFloatResident(cr, 0, f7.d, f0.d);
}

loc_8088B424:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 576), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 580), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 584), f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B440:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088B4E8;
    }
}

loc_8088B444:
{
    r5 = MemoryInline::FlatRead32((r1 + 796));
    r3 = (r1 + 420);
    r4 = MemoryInline::FlatRead32((r1 + 800));
    r0 = MemoryInline::FlatRead32((r1 + 804));
    MemoryInline::FlatWriteRam32((r1 + 420), r5);
    MemoryInline::FlatWriteRam32((r1 + 424), r4);
    MemoryInline::FlatWriteRam32((r1 + 428), r0);
    ctx->lr = 0x8088B464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = r30;
    r3 = (r1 + 120);
    r5 = (r1 + 420);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    r0 = MemoryInline::FlatRead32((r29 + 268));
    r3 = (r1 + 84);
    r8 = MemoryInline::FlatRead32((r29 + 272));
    r4 = (r1 + 108);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    r5 = (r1 + 96);
    MemoryInline::FlatWriteRamFloat32((r1 + 528), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 532), f2.d);
    r7 = MemoryInline::FlatRead32((r1 + 528));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r6 = MemoryInline::FlatRead32((r1 + 532));
    MemoryInline::FlatWriteRam32((r1 + 112), r8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 264));
    r8 = MemoryInline::FlatRead32((r29 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 536), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 536));
    MemoryInline::FlatWriteRam32((r1 + 116), r8);
    MemoryInline::FlatWriteRam32((r1 + 96), r7);
    MemoryInline::FlatWriteRam32((r1 + 100), r6);
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    ctx->lr = 0x8088B4D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 528), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 532), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 536), f0.d);
}

loc_8088B4E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 796));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 800));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 804));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088B50Cu;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 284));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 280));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 264));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8088B528:
{
    r3 = (r1 + 72);
    r4 = (r1 + 576);
    r5 = (r29 + 228);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088B55Cu;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 288));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8088B564:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B570:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088B588;
    }
}

loc_8088B574:
{
    f1.d = std::fabs(f27.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8088B57C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & 1);
}

loc_8088B588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B58C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B5A4;
    }
}

loc_8088B590:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r29;
    r4 = 569;
    ctx->lr = 0x8088B5A0u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x808204FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8088B5C0;
}

loc_8088B5A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 236));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8088B5AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088B5C0;
    }
}

loc_8088B5B0:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r29;
    r4 = 568;
    ctx->lr = 0x8088B5C0u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082051Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8088B5C0:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B5C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B600;
    }
}

loc_8088B5CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B5D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B5E4;
    }
}

loc_8088B5D8:
{
    r3 = (r1 + 8);
    r4 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8088B5E4:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_17 & 7);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
}

loc_8088B600:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 552));
    MemoryInline::FlatWriteFloat32((r29 + 240), f0.d);
    r3 = MemoryInline::FlatRead32((r29 + 400));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 556));
    MemoryInline::FlatWriteFloat32((r29 + 244), f0.d);
}

loc_8088B618:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 528), 0, 60u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 528));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 560));
    guest_range_4 = MemoryInline::ResolveRangeHost((r29 + 216), 0, 184u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r29 + 248), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 532));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 540));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r29 + 252), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 536));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 544));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r29 + 256), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 548));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r29 + 260), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 48u, (r29 + 264), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r29 + 268), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 56u, (r29 + 272), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f30.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 60u, (r29 + 276), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 64u, (r29 + 280), f30.d);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r1 + 576));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r29 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r1 + 580));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r29 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r1 + 584));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r29 + 236), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 564));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r29 + 216), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 568));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r29 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 572));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r29 + 224), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f28.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 176u, (r29 + 392), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 180u, (r29 + 396), f28.d);
    }
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(65))) {
        goto loc_8088B69C;
    }
}

loc_8088B694:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 400), r0);
}

loc_8088B69C:
{
    r0 = MemoryInline::FlatRead8((r29 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088B6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088B6D8;
    }
}

loc_8088B6A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 220));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 396));
    r0 = MemoryInline::FlatRead16((r29 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 216));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f2.d);
    goto loc_8088B748;
}

loc_8088B6D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 180));
    r3 = (r1 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    r4 = (r29 + 240);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 48);
    r4 = (r29 + 216);
    r5 = (r1 + 60);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 396));
    r3 = (r1 + 36);
    r4 = (r4 + 16688);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 24);
    r4 = (r1 + 48);
    r5 = (r1 + 36);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::FlatRead16((r29 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r29 + 48), f2.d);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
}

loc_8088B748:
{
    r4 = 0x802A0000u;
    r3 = (r1 + 592);
    r5 = (r4 + 16640);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r4 = (r29 + 252);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 604), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 620), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 636), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 264));
    ctx->lr = 0x8088B778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r29;
    ctx->lr = 0x8088B780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 592);
    r4 = (r29 + 88);
    r5 = (r1 + 640);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r29 + 280));
    r3 = (r1 + 592);
    r4 = (r29 + 268);
    ctx->lr = 0x8088B7A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 640);
    r3 = (r1 + 592);
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    r3 = MemoryInline::FlatRead16((r29 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    r0 = (r3 | 4);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 640), 0, 296u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 640));
    MemoryInline::FlatWriteFloat32((r29 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 644));
    MemoryInline::FlatWriteFloat32((r29 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 648));
    MemoryInline::FlatWriteFloat32((r29 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 652));
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 16u, (r1 + 656));
    MemoryInline::FlatWriteFloat32((r29 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 20u, (r1 + 660));
    MemoryInline::FlatWriteFloat32((r29 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 24u, (r1 + 664));
    MemoryInline::FlatWriteFloat32((r29 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 28u, (r1 + 668));
    MemoryInline::FlatWriteFloat32((r29 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 32u, (r1 + 672));
    MemoryInline::FlatWriteFloat32((r29 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 36u, (r1 + 676));
    MemoryInline::FlatWriteFloat32((r29 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 40u, (r1 + 680));
    MemoryInline::FlatWriteFloat32((r29 + 128), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    MemoryInline::FlatWriteFloat32((r29 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 132), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 272u, (r1 + 912));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 256u, (r1 + 896));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 240u, (r1 + 880));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 224u, (r1 + 864));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 208u, (r1 + 848));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 200u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_5, 204u, (r1 + 844));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 200u, (r1 + 840));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 192u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 196u, (r1 + 836));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 192u, (r1 + 832));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 292u, (r1 + 932));
    ctx->lr = r0;
    r1 = (r1 + 928);
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8088AB04 func_8088AB04 preserves=false fpr_mask=0xF8000000
