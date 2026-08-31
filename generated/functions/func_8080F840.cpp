#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080F840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080F840;

loc_8080F840:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 80);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r31 = 0x808B0000u;
    f3.d = PpcFmulsInline(f2.d, f2.d);
    r30 = 0x808D0000u;
    f2.d = PpcFmulsInline(f0.d, f0.d);
    r31 = (r31 + -19864);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f28.d = f1.d;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 24), r0);
    r24 = r3;
    r25 = r4;
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 32), r0);
    r26 = r5;
    SetCRFloatResident(cr, 0, f27.d, f0.d);
}

loc_8080F8C0:
{
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = (r30 + 24136);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080F8F4;
    }
}

loc_8080F8D8:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8080F8F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8080F8F4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 132u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    SetCRFloatResident(cr, 0, f27.d, f31.d);
}

loc_8080F8FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080F908;
    }
}

loc_8080F904:
{
    goto loc_8080F914;
}

loc_8080F908:
{
    f1.d = f27.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f31.d = PpcFmulsInline(f27.d, f1.d);
}

loc_8080F914:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r3 + 17160));
}

loc_8080F920:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080F92C;
    }
}

loc_8080F924:
{
    r4 = MemoryInline::FlatRead32((r30 + 64));
    goto loc_8080F96C;
}

loc_8080F92C:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r6 + r3);
    r3 = (r0 + r4);
    r0 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r26 - r0);
}

loc_8080F950:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r6))) {
        goto loc_8080F95C;
    }
}

loc_8080F954:
{
    r4 = 1;
    goto loc_8080F96C;
}

loc_8080F95C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8080F960:
{
    r4 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080F96C;
    }
}

loc_8080F968:
{
    r4 = 2;
}

loc_8080F96C:
{
}

loc_8080F970:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080F980;
    }
}

loc_8080F974:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17156));
    goto loc_8080F9C0;
}

loc_8080F980:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r6 + r3);
    r3 = (r0 + r5);
    r0 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r26 - r0);
}

loc_8080F9A4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r6))) {
        goto loc_8080F9AC;
    }
}

loc_8080F9A8:
{
    goto loc_8080F9C0;
}

loc_8080F9AC:
{
}

loc_8080F9B0:
{
    r0 = (r3 - r5);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_8080F9BC;
    }
}

loc_8080F9B8:
{
    r0 = (r3 - r6);
}

loc_8080F9BC:
{
    r3 = r0;
}

loc_8080F9C0:
{
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f2.d, f30.d);
}

loc_8080F9CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080F9D8;
    }
}

loc_8080F9D0:
{
    f2.d = f30.d;
    goto loc_8080F9E8;
}

loc_8080F9D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r31 + 120));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8080F9E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080F9E8;
    }
}

loc_8080F9E4:
{
    f2.d = f0.d;
}

loc_8080F9E8:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 120u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r31 + 120));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 124u, (r31 + 124));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8080F9F8:
{
    MemoryInline::FlatWriteRamFloat32((r30 + 32), f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f5.d = PpcFmulsInline(f0.d, f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080FAC4;
    }
}

loc_8080FA08:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8080FA20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080FA50;
    }
}

loc_8080FA24:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r31 + 128));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080FAC4;
}

loc_8080FA50:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080FA78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080FA94;
    }
}

loc_8080FA7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r31 + 128));
    f1.d = PpcFmulsInline(f0.d, f3.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080FAC4;
}

loc_8080FA94:
{
    r0 = (r4 - r3);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8080FAC4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    r0 = (r26 ^ -2147483648);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f4.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f5.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = PpcFmulsInline(f27.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
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
    f4.d = PpcFmulsInline(f27.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f3.d = PpcFmulsInline(f0.d, f27.d);
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 132u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8080FB44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080FE00;
    }
}

loc_8080FB48:
{
    r3 = 0x809C0000u;
    f29.d = MemoryInline::FlatReadFloat32((r30 + 16));
    r5 = MemoryInline::FlatRead8((r3 + 17160));
}

loc_8080FB58:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080FB64;
    }
}

loc_8080FB5C:
{
    r4 = MemoryInline::FlatRead32((r30 + 64));
    goto loc_8080FBA4;
}

loc_8080FB64:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r6 + r3);
    r3 = (r0 + r4);
    r0 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r26 - r0);
}

loc_8080FB88:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r6))) {
        goto loc_8080FB94;
    }
}

loc_8080FB8C:
{
    r4 = 1;
    goto loc_8080FBA4;
}

loc_8080FB94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8080FB98:
{
    r4 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080FBA4;
    }
}

loc_8080FBA0:
{
    r4 = 2;
}

loc_8080FBA4:
{
}

loc_8080FBA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080FBB8;
    }
}

loc_8080FBAC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17156));
    goto loc_8080FBF8;
}

loc_8080FBB8:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r6 + r3);
    r3 = (r0 + r5);
    r0 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r26 - r0);
}

loc_8080FBDC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r6))) {
        goto loc_8080FBE4;
    }
}

loc_8080FBE0:
{
    goto loc_8080FBF8;
}

loc_8080FBE4:
{
}

loc_8080FBE8:
{
    r0 = (r3 - r5);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_8080FBF4;
    }
}

loc_8080FBF0:
{
    r0 = (r3 - r6);
}

loc_8080FBF4:
{
    r3 = r0;
}

loc_8080FBF8:
{
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f2.d, f30.d);
}

loc_8080FC04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080FC10;
    }
}

loc_8080FC08:
{
    f2.d = f30.d;
    goto loc_8080FC20;
}

loc_8080FC10:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 120u, (r31 + 120));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8080FC18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080FC20;
    }
}

loc_8080FC1C:
{
    f2.d = f0.d;
}

loc_8080FC20:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 120u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 120u, (r31 + 120));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 124u, (r31 + 124));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8080FC30:
{
    MemoryInline::FlatWriteRamFloat32((r30 + 32), f2.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f4.d = PpcFmulsInline(f0.d, f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080FCFC;
    }
}

loc_8080FC40:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8080FC58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080FC88;
    }
}

loc_8080FC5C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r31 + 128));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080FCFC;
}

loc_8080FC88:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080FCB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080FCCC;
    }
}

loc_8080FCB4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r31 + 128));
    f1.d = PpcFmulsInline(f0.d, f3.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080FCFC;
}

loc_8080FCCC:
{
    r0 = (r4 - r3);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8080FCFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 140));
    r0 = (r26 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 8));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f1.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f28.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
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
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f27.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f4.d = PpcFmulsInline(f28.d, f29.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f4.d = PpcFmulsInline(f29.d, f28.d);
    f2.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32(r28, f2.d);
    f3.d = PpcFmulsInline(f30.d, f27.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r3 = r28;
    f2.d = PpcFmulsInline(f30.d, f4.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    ctx->lr = 0x8080FDB8u;
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
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = (-(f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r4 = r28;
    MemoryInline::FlatWriteFloat32(r28, f2.d);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f2.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 1;
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    MemoryInline::FlatWriteFloat32(r29, f31.d);
    goto loc_8080FE04;
}

loc_8080FE00:
{
    r3 = 0;
}

loc_8080FE04:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
// RECOMP_REGISTRATION base 0x8080F840 func_8080F840 preserves=false fpr_mask=0xF8000000
