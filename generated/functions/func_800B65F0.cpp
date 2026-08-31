#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B65F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800B65F0;

loc_800B65F0:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 464), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 448), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 432), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 416), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 400), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 400);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    r22 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27808));
    r23 = r4;
    r21 = MemoryInline::FlatRead32(r5);
    r24 = r5;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B6648:
{
    r25 = r6;
    r31 = (r21 + r6);
    r30 = cr;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    r20 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 212u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 192u, (r1 + 204), r3);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_0 & 1);
    r3 = (r1 + 152);
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r1 + 212), r20);
    r29 = 0;
    r28 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_2, 204u, (r1 + 216), r20);
        MemoryInline::WriteResolved32(guest_range_2, 208u, (r1 + 220), r20);
    }
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 208), r21);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r1 + 168), f31.d);
    r4 = MemoryInline::FlatRead32((r22 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 12), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 32), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r1 + 52), f31.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8007C330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    MemoryInline::FlatWriteFloat32(r23, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 8), f0.d);
    r3 = MemoryInline::FlatRead32((r22 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800B66AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B66C4;
    }
}

loc_800B66B0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x800B66C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800B66C8;
}

loc_800B66C4:
{
    r3 = r20;
}

loc_800B66C8:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 332), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -27800));
    MemoryInline::FlatWriteRam32((r1 + 328), r0);
    f3.d = MemoryInline::FlatReadFloat32((r22 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 328));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B66FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6704;
    }
}

loc_800B6700:
{
    goto loc_800B6708;
}

loc_800B6704:
{
    f1.d = f0.d;
}

loc_800B6708:
{
    MemoryInline::FlatWriteFloat32((r23 + 4), f1.d);
    r3 = MemoryInline::FlatRead32((r22 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800B6714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B672C;
    }
}

loc_800B6718:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x800B6728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800B6730;
}

loc_800B672C:
{
    r3 = 0;
}

loc_800B6730:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 340), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -27800));
    MemoryInline::FlatWriteRam32((r1 + 336), r0);
    f3.d = MemoryInline::FlatReadFloat32((r22 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 336));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_800B6764:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B676C;
    }
}

loc_800B6768:
{
    goto loc_800B6770;
}

loc_800B676C:
{
    f4.d = f0.d;
}

loc_800B6770:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    f3.d = MemoryInline::FlatReadFloat32(r23);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 4));
    r3 = (r1 + 152);
    f1.d = MemoryInline::FlatReadFloat32((r23 + 8));
    r12 = (r1 + 156);
    MemoryInline::FlatWriteFloat32((r23 + 12), f4.d);
    r27 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 152), r21);
    ctx->lr = 0x800B67A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    f29.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    r26 = r3;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -27800));
    r20 = (r1 + 224);
    r21 = 1127219200;
    goto loc_800B6C1C;
}

loc_800B67C4:
{
    r5 = (r26 & 65535);
}

loc_800B67CC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_800B6B38;
    }
}

loc_800B67D0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r29));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f29.d);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B67E0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f29.d);
    MemoryInline::FlatWriteRam32((r1 + 208), r3);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f31.d);
    MemoryInline::FlatWriteFloat32((r22 + 44), f31.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B6A54;
    }
}

loc_800B67FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_800B6800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B6A54;
    }
}

loc_800B6804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_800B6808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B6A54;
    }
}

loc_800B680C:
{
    r7 = MemoryInline::FlatRead32((r1 + 204));
    r6 = MemoryInline::FlatRead32((r1 + 208));
    r4 = MemoryInline::FlatRead32((r1 + 212));
    r3 = MemoryInline::FlatRead32((r1 + 216));
    r0 = MemoryInline::FlatRead32((r1 + 220));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 204u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 184), r7);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 188), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 192), r4);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 196), r3);
    }
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 200), r0);
    guest_range_4 = MemoryInline::ResolveRangeHost(r22, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r22);
    MemoryInline::WriteResolved8(guest_range_3, 104u, (r1 + 224), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r22 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 105u, (r1 + 225), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r22 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 106u, (r1 + 226), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r22 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 107u, (r1 + 227), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r22 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 108u, (r1 + 228), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r22 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 109u, (r1 + 229), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r22 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 110u, (r1 + 230), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r22 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 111u, (r1 + 231), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r22 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 112u, (r1 + 232), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r22 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 113u, (r1 + 233), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r22 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 114u, (r1 + 234), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r22 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 115u, (r1 + 235), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r22 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 116u, (r1 + 236), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r22 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 117u, (r1 + 237), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r22 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 118u, (r1 + 238), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r22 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 119u, (r1 + 239), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r22 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 120u, (r1 + 240), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r22 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 121u, (r1 + 241), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r22 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 122u, (r1 + 242), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r22 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 123u, (r1 + 243), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r22 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 124u, (r1 + 244), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r22 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 125u, (r1 + 245), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r22 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 126u, (r1 + 246), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r22 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 127u, (r1 + 247), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r22 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 128u, (r1 + 248), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r22 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 129u, (r1 + 249), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r22 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 130u, (r1 + 250), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 27u, (r22 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 131u, (r1 + 251), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 28u, (r22 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 132u, (r1 + 252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 29u, (r22 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 133u, (r1 + 253), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 30u, (r22 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 134u, (r1 + 254), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r22 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 135u, (r1 + 255), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r22 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 136u, (r1 + 256), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r22 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r22 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 144u, (r1 + 264), r0);
        MemoryInline::WriteResolved32(guest_range_3, 140u, (r1 + 260), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r22 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r22 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 152u, (r1 + 272), r0);
        MemoryInline::WriteResolved32(guest_range_3, 148u, (r1 + 268), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r22 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 156u, (r1 + 276), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r22 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r22 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 164u, (r1 + 284), r0);
        MemoryInline::WriteResolved32(guest_range_3, 160u, (r1 + 280), r3);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_4, 64u, (r22 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 168u, (r1 + 288), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 65u, (r22 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 169u, (r1 + 289), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r22 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 170u, (r1 + 290), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r22 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 171u, (r1 + 291), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r22 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 172u, (r1 + 292), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r22 + 72));
    r4 = (r1 + 120);
    MemoryInline::WriteResolved32(guest_range_3, 176u, (r1 + 296), r0);
    r6 = (r1 + 184);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r22 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 180u, (r1 + 300), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r22 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 184u, (r1 + 304), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 84u, (r22 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 188u, (r1 + 308), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r22 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 192u, (r1 + 312), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r22 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r1 + 316), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r22 + 96));
    MemoryInline::WriteResolved32(guest_range_3, 200u, (r1 + 320), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 120), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 124), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 128), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 132), f29.d);
    }
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 184), r20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800B6A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_800B6A10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6A48;
    }
}

loc_800B6A14:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 268));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 212));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B6A28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6A48;
    }
}

loc_800B6A2C:
{
    MemoryInline::FlatWriteRam32((r1 + 152), r27);
    r3 = r20;
    r28 = 1;
    r26 = 10;
    r4 = 0;
    ctx->lr = 0x800B6A44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800B6C1C;
}

loc_800B6A48:
{
    r3 = (r1 + 224);
    r4 = 0;
    ctx->lr = 0x800B6A54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800B6A54:
{
    r3 = MemoryInline::FlatRead32((r22 + 96));
    r4 = (r1 + 136);
    r5 = (r26 & 65535);
    r6 = (r1 + 204);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800B6A74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f0.d = MemoryInline::FlatReadFloat32(r23);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6A88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6A90;
    }
}

loc_800B6A8C:
{
    goto loc_800B6A94;
}

loc_800B6A90:
{
    f1.d = f0.d;
}

loc_800B6A94:
{
    MemoryInline::FlatWriteFloat32(r23, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6AA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6AAC;
    }
}

loc_800B6AA8:
{
    goto loc_800B6AB0;
}

loc_800B6AAC:
{
    f1.d = f0.d;
}

loc_800B6AB0:
{
    MemoryInline::FlatWriteFloat32((r23 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 144));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6AC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B6AC8;
    }
}

loc_800B6AC4:
{
    goto loc_800B6ACC;
}

loc_800B6AC8:
{
    f1.d = f0.d;
}

loc_800B6ACC:
{
    MemoryInline::FlatWriteFloat32((r23 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 148));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800B6ADC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B6AE4;
    }
}

loc_800B6AE0:
{
    goto loc_800B6AE8;
}

loc_800B6AE4:
{
    f1.d = f0.d;
}

loc_800B6AE8:
{
    MemoryInline::FlatWriteFloat32((r23 + 12), f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_800B6AF0:
{
    f31.d = MemoryInline::FlatReadFloat32((r22 + 44));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B6B0C;
    }
}

loc_800B6AF8:
{
    r0 = MemoryInline::FlatRead32(r24);
    r3 = 0;
    r0 = (r0 + r25);
    MemoryInline::FlatWrite32(r24, r0);
    goto loc_800B6C34;
}

loc_800B6B0C:
{
}

loc_800B6B10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800B6B1C;
    }
}

loc_800B6B14:
{
    r29 = 0;
    goto loc_800B6BFC;
}

loc_800B6B1C:
{
}

loc_800B6B20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_800B6B2C;
    }
}

loc_800B6B24:
{
    r29 = 1;
    goto loc_800B6BFC;
}

loc_800B6B2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_800B6B30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B6C28;
    }
}

loc_800B6B34:
{
    goto loc_800B6BFC;
}

loc_800B6B38:
{
}

loc_800B6B3C:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800B6B4C;
    }
}

loc_800B6B44:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 80));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_800B6B4C:
{
    r0 = MemoryInline::FlatRead8((r22 + 67));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800B6B54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B6B64;
    }
}

loc_800B6B58:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 68));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_800B6B9C;
}

loc_800B6B64:
{
    r3 = MemoryInline::FlatRead32((r22 + 72));
    r4 = (r26 & 65535);
    f28.d = MemoryInline::FlatReadFloat32((r22 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x800B6B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    MemoryInline::FlatWriteRam32((r1 + 336), r21);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 336));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_800B6B9C:
{
}

loc_800B6BA0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800B6BCC;
    }
}

loc_800B6BA4:
{
}

loc_800B6BA8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800B6BCC;
    }
}

loc_800B6BAC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B6BB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6BCC;
    }
}

loc_800B6BBC:
{
    MemoryInline::FlatWriteRam32((r1 + 152), r27);
    r28 = 1;
    r26 = 10;
    goto loc_800B6C1C;
}

loc_800B6BCC:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f27.d));
    f0.d = MemoryInline::FlatReadFloat32(r23);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_800B6BD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B6BE0;
    }
}

loc_800B6BDC:
{
    f0.d = f31.d;
}

loc_800B6BE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 8));
    MemoryInline::FlatWriteFloat32(r23, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800B6BEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B6BF4;
    }
}

loc_800B6BF0:
{
    f1.d = f31.d;
}

loc_800B6BF4:
{
    MemoryInline::FlatWriteFloat32((r23 + 8), f1.d);
    r29 = 1;
}

loc_800B6BFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B6C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B6C08;
    }
}

loc_800B6C04:
{
    r27 = MemoryInline::FlatRead32((r1 + 152));
}

loc_800B6C08:
{
    r3 = (r1 + 152);
    r12 = (r1 + 156);
    ctx->lr = 0x800B6C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    r26 = r3;
}

loc_800B6C1C:
{
    r3 = MemoryInline::FlatRead32((r1 + 152));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_800B6C24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B67C4;
    }
}

loc_800B6C28:
{
    r0 = MemoryInline::FlatRead32((r1 + 152));
    r3 = r28;
    MemoryInline::FlatWrite32(r24, r0);
}

loc_800B6C34:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 400);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 400));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B65F0 func_800B65F0 preserves=false fpr_mask=0xF8000000
