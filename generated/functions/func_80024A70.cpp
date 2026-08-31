#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80024A70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80024A70;

loc_80024A70:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    MemoryInline::FlatWriteRam32((r1 + 132), r29);
    MemoryInline::FlatWriteRam32((r1 + 128), r28);
    r28 = r3;
    r3 = (r1 + 12);
    ctx->lr = 0x80024AA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B4380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80024AA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80024ABC;
    }
}

loc_80024AAC:
{
    r3 = (r1 + 12);
    r4 = -1;
    ctx->lr = 0x80024AB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B43E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80024BDC;
}

loc_80024ABC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 84), r0);
    r3 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r28 + 16));
    r5 = MemoryInline::FlatRead8((r28 + 17));
    r4 = MemoryInline::FlatRead8((r28 + 18));
    r0 = MemoryInline::FlatRead8((r28 + 19));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r1 + 37), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r1 + 38), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r1 + 39), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B3EF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31172));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80024B04:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80024B14;
    }
}

loc_80024B0C:
{
    r3 = (r1 + 12);
    ctx->lr = 0x80024B14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B39A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80024B14:
{
    r3 = (r1 + 12);
    ctx->lr = 0x80024B1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B2EF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 4);
    r4 = 0;
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl0_0x800AF180:
{
}

loc_inl0_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800AF190;
    }
}

loc_inl0_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_800AF180;
}

loc_inl0_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    f31.d = MemoryInline::FlatReadFloat64((r2 + -31168));
    r29 = r3;
    r31 = 1127219200;
    goto loc_80024BC8;
}

loc_80024B38:
{
    r4 = r29;
    r3 = (r28 + 4);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r0 = MemoryInline::FlatRead8((r28 + 24));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80024B50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80024B9C;
    }
}

loc_80024B54:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r1 + 12);
    r0 = MemoryInline::FlatRead32(r29);
    r4 = (r29 + 24);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r5);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 112), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 120), r31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    r5 = MemoryInline::FlatRead32((r29 + 12));
    ctx->lr = 0x80024B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B5FE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80024B9C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80024BA4:
{
    MemoryInline::FlatWrite32((r29 + 8), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80024BC4;
    }
}

loc_80024BAC:
{
    r4 = r29;
    r3 = (r28 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800AF110u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -27448));
    r4 = r29;
    ctx->lr = 0x80024BC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80024BC4:
{
    r29 = r30;
}

loc_80024BC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80024BCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80024B38;
    }
}

loc_80024BD0:
{
    r3 = (r1 + 12);
    r4 = -1;
    ctx->lr = 0x80024BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800B43E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80024BDC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 164));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    r28 = MemoryInline::FlatRead32((r1 + 128));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80024A70 func_80024A70 preserves=false fpr_mask=0x80000000
