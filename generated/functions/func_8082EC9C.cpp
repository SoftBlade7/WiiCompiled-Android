#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082EC9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8082EC9C;

loc_8082EC9C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 96);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = 1127219200;
    r30 = 0x808B0000u;
    r31 = 0x808E0000u;
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
    r29 = r3;
    r30 = (r30 + -14048);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r0);
    r31 = (r31 + -30128);
    ctx->lr = 0x8082ECE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821A9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r29;
    ctx->lr = 0x8082ECECu;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 88), 0, 96u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 88));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 92));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = MemoryInline::FlatRead16(r31);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = (r5 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r30 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 96));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 100));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 104));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 108));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r29 + 112));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 116));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r29 + 120));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r29 + 124));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 40), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r29 + 128));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r29 + 132));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r29 + 180));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r3 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    InvokeDirectCpu<0x80085110u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r29 + 180));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8082F148u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f31.d = f1.d;
    r28 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r27 = MemoryInline::FlatRead32((r29 + 184));
}

loc_8082EDD0:
{
    r3 = MemoryInline::FlatRead32((r27 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082EDDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082EDEC;
    }
}

loc_8082EDE0:
{
    r5 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8082EDECu;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8082EDEC:
{
    r28 = (r28 + 1);
    r27 = (r27 + 4);
}

loc_8082EDF8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8082EDD0;
    }
}

loc_8082EDFC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r28 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r27 = MemoryInline::FlatRead32((r29 + 188));
}

loc_8082EE14:
{
    r3 = MemoryInline::FlatRead32((r27 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082EE20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082EE30;
    }
}

loc_8082EE24:
{
    r5 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8082EE30u;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8082EE30:
{
    r28 = (r28 + 1);
    r27 = (r27 + 4);
}

loc_8082EE3C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8082EE14;
    }
}

loc_8082EE40:
{
    r5 = MemoryInline::FlatRead16(r31);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead32((r29 + 180));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    f2.d = MemoryInline::FlatReadFloat64((r30 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r0 = (r0 * r5);
    r6 = (r4 - r0);
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8082EE84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8082EEA0;
    }
}

loc_8082EE88:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 + r5);
    r3 = (r0 - r3);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r5));
    r0 = (r0 * r5);
    r6 = (r3 - r0);
}

loc_8082EEA0:
{
    r0 = MemoryInline::FlatRead32((r29 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082EEA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082EF58;
    }
}

loc_8082EEAC:
{
    r4 = MemoryInline::FlatRead16(r31);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r4));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f4.d = MemoryInline::FlatReadFloat64((r30 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = (r3 * r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    r0 = (r6 - r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    InvokeDirectCpu<0x80085110u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8082EF10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8082EF18;
    }
}

loc_8082EF14:
{
    goto loc_8082EF1C;
}

loc_8082EF18:
{
    f0.d = f30.d;
}

loc_8082EF1C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r28 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r29 = MemoryInline::FlatRead32((r29 + 192));
}

loc_8082EF2C:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082EF38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082EF48;
    }
}

loc_8082EF3C:
{
    r5 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8082EF48u;
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8082EF48:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_8082EF54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8082EF2C;
    }
}

loc_8082EF58:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 76), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 96));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FF gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0xFC00003F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082EC9C func_8082EC9C preserves=false fpr_mask=0xC0000000
