#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022DFA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[27];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8022DFA8;

loc_8022DFA8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r1 + 156), r31);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r1 + 152), r30);
    }
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r1 + 144), r28);
    r5 = MemoryInline::FlatRead16((r4 + 118));
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022DFE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022E28C;
    }
}

loc_8022DFE8:
{
    r0 = (r5 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022DFEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022E28C;
    }
}

loc_8022DFF0:
{
    r5 = MemoryInline::FlatRead16((r4 + 4));
    r6 = 1;
    r4 = MemoryInline::FlatRead16((r3 + 62));
    r0 = MemoryInline::FlatRead16((r3 + 60));
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_1 & -65536);
    r0_mdest_1 = (r0 & 65535);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r5 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022E28C;
    }
}

loc_8022E010:
{
    r0 = MemoryInline::FlatRead16((r3 + 120));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8022E018:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022E030;
    }
}

loc_8022E01C:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8022E028:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022E030;
    }
}

loc_8022E02C:
{
    goto loc_8022E28C;
}

loc_8022E030:
{
    r3 = r30;
    r4 = r29;
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022BC00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead8((r29 + 117));
    r4 = MemoryInline::FlatRead16((r29 + 120));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_8022E054:
{
    r0 = (r0 * r3);
    r31 = (r4 - r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022E074;
    }
}

loc_8022E060:
{
    r3 = 1;
    r4 = 1;
    r5 = 1;
    r6 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
}

loc_8022E074:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r3 = 0x80380000u;
    r5 = MemoryInline::FlatRead32((r29 + 76));
    r3 = (r3 + 17224);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = MemoryInline::FlatRead8((r29 + 118));
    r5_addr_1 = (r5 + r4);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    r4 = (r1 + 40);
    r28 = (r0 + r31);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8022E0B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r28;
    r3 = (r1 + 40);
    ctx->lr = 0x8022E0BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead8((r30 + 60));
    r7 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 100), r5);
    r3 = (r31 + 1);
    r0 = MemoryInline::FlatRead8((r30 + 61));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 96), r7);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -25032));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r6 = MemoryInline::FlatRead8((r30 + 62));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 112), r7);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f2.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteRam32((r1 + 132), r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r5 = MemoryInline::FlatRead8((r30 + 63));
    MemoryInline::FlatWriteRam32((r1 + 128), r7);
    f2.d = PPC_Fctiwz(f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    f1.d = PPC_Fctiwz(f1.d);
    r6 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r6));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    r6 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    r6 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_8022E178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022E184;
    }
}

loc_8022E17C:
{
}

loc_8022E180:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8022E1E4;
    }
}

loc_8022E184:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = 0x80250000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f3.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = (-(f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -25008));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25040));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    r3 = (r3 + 30840);
    f2.d = PpcFmulsInline(f4.d, f2.d);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    r4 = (r1 + 72);
    r5 = -1;
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171814u>(ctx);
}

loc_8022E1E4:
{
    r3 = MemoryInline::FlatRead8((r29 + 117));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8022E1F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022E280;
    }
}

loc_8022E1F4:
{
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_8022E1FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8022E208;
    }
}

loc_8022E200:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -25004));
    goto loc_8022E20C;
}

loc_8022E208:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -25040));
}

loc_8022E20C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8022E210:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022E21C;
    }
}

loc_8022E214:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -25004));
    goto loc_8022E220;
}

loc_8022E21C:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -25040));
}

loc_8022E220:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r5 = -872349696;
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25024));
    r3 = 2;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f31.d));
    r0 = 3;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r4);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r3);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[18] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 27u);
}

loc_8022E280:
{
    r3 = MemoryInline::FlatRead16((r29 + 120));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 120), static_cast<uint16_t>(r0));
}

loc_8022E28C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r28 = MemoryInline::FlatRead32((r1 + 144));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8022DFA8 func_8022DFA8 preserves=false fpr_mask=0xC0000000
