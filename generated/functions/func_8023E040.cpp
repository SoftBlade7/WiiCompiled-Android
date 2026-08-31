#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023E040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023E040;

loc_8023E040:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    r11 = (r1 + 80);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r30 = MemoryInline::FlatRead32((r3 + 60));
    r22 = r3;
    r23 = r4;
    r24 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8023E0A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023E3A4;
    }
}

loc_8023E0AC:
{
    r29 = MemoryInline::FlatRead32((r30 + 60));
}

loc_8023E0B4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8023E330;
    }
}

loc_8023E0B8:
{
    r28 = MemoryInline::FlatRead32((r29 + 60));
}

loc_8023E0C0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8023E2D4;
    }
}

loc_8023E0C4:
{
    r27 = MemoryInline::FlatRead32((r28 + 60));
}

loc_8023E0CC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8023E278;
    }
}

loc_8023E0D0:
{
    r26 = MemoryInline::FlatRead32((r27 + 60));
}

loc_8023E0D8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8023E21C;
    }
}

loc_8023E0DC:
{
    r25 = MemoryInline::FlatRead32((r26 + 60));
}

loc_8023E0E4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8023E1B0;
    }
}

loc_8023E0E8:
{
    r3 = r25;
    // inline leaf 0x8023E484 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 60));
    // end of inlined leaf 0x8023E484
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023E0F4:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023E144;
    }
}

loc_8023E0FC:
{
    r4 = (r1 + 8);
    r5 = (r1 + 12);
    ctx->lr = 0x8023E108u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023E040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 64));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r25 + 68));
    r4 = (r1 + 16);
    r5 = (r1 + 20);
    // inline leaf 0x8023E438 (19 guest instruction(s))
}

loc_inl2_0x8023E438:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_0x8023E440:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8023E450;
    }
}

loc_inl2_0x8023E444:
{
    MemoryInline::FlatWriteRamFloat32(r4, f1.d);
    MemoryInline::FlatWriteRamFloat32(r5, f2.d);
    goto loc_inl2_cont_8023E438;
}

loc_inl2_0x8023E450:
{
}

loc_inl2_0x8023E454:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8023E458:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    goto loc_inl2_cont_8023E438;
}

loc_inl2_return:
{
}

loc_inl2_cont_8023E438:
{
    // end of inlined leaf 0x8023E438
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_8023E154;
}

loc_8023E144:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 68));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
}

loc_8023E154:
{
    r0 = MemoryInline::FlatRead32((r25 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 68));
}

loc_8023E160:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 64));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8023E174;
    }
}

loc_8023E168:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    goto loc_8023E18C;
}

loc_8023E174:
{
}

loc_8023E178:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023E18C;
    }
}

loc_8023E17C:
{
    r3 = r25;
    r4 = (r1 + 24);
    r5 = (r1 + 28);
    // inline leaf 0x8023E40C (11 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    // end of inlined leaf 0x8023E40C
}

loc_8023E18C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    goto loc_8023E1C0;
}

loc_8023E1B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 68));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
}

loc_8023E1C0:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
    f6.d = MemoryInline::FlatReadFloat32((r27 + 68));
}

loc_8023E1CC:
{
    f5.d = MemoryInline::FlatReadFloat32((r27 + 64));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8023E1E0;
    }
}

loc_8023E1D4:
{
    f26.d = f5.d;
    f27.d = f6.d;
    goto loc_8023E208;
}

loc_8023E1E0:
{
}

loc_8023E1E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023E208;
    }
}

loc_8023E1E8:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f27.d = (-(f2.d));
}

loc_8023E208:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f2.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_8023E224;
}

loc_8023E21C:
{
    f26.d = MemoryInline::FlatReadFloat32((r27 + 64));
    f27.d = MemoryInline::FlatReadFloat32((r27 + 68));
}

loc_8023E224:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 68));
}

loc_8023E230:
{
    f3.d = MemoryInline::FlatReadFloat32((r28 + 64));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8023E244;
    }
}

loc_8023E238:
{
    f28.d = f3.d;
    f29.d = f4.d;
    goto loc_8023E26C;
}

loc_8023E244:
{
}

loc_8023E248:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023E26C;
    }
}

loc_8023E24C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f29.d = (-(f0.d));
}

loc_8023E26C:
{
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f26.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f27.d));
    goto loc_8023E280;
}

loc_8023E278:
{
    f28.d = MemoryInline::FlatReadFloat32((r28 + 64));
    f29.d = MemoryInline::FlatReadFloat32((r28 + 68));
}

loc_8023E280:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 68));
}

loc_8023E28C:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 64));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8023E2A0;
    }
}

loc_8023E294:
{
    f30.d = f3.d;
    f31.d = f4.d;
    goto loc_8023E2C8;
}

loc_8023E2A0:
{
}

loc_8023E2A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023E2C8;
    }
}

loc_8023E2A8:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f31.d = (-(f0.d));
}

loc_8023E2C8:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f28.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f29.d));
    goto loc_8023E2DC;
}

loc_8023E2D4:
{
    f30.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f31.d = MemoryInline::FlatReadFloat32((r29 + 68));
}

loc_8023E2DC:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 68));
}

loc_8023E2E8:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 64));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8023E2FC;
    }
}

loc_8023E2F0:
{
    f25.d = f3.d;
    f24.d = f4.d;
    goto loc_8023E324;
}

loc_8023E2FC:
{
}

loc_8023E300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023E324;
    }
}

loc_8023E304:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f24.d = (-(f0.d));
}

loc_8023E324:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f30.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f31.d));
    goto loc_8023E338;
}

loc_8023E330:
{
    f25.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f24.d = MemoryInline::FlatReadFloat32((r30 + 68));
}

loc_8023E338:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r22 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8023E344:
{
    f2.d = MemoryInline::FlatReadFloat32((r22 + 64));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023E358;
    }
}

loc_8023E34C:
{
    MemoryInline::FlatWriteFloat32(r23, f2.d);
    MemoryInline::FlatWriteFloat32(r24, f3.d);
    goto loc_8023E388;
}

loc_8023E358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023E35C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023E388;
    }
}

loc_8023E360:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r23, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
}

loc_8023E388:
{
    f0.d = MemoryInline::FlatReadFloat32(r23);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f25.d));
    MemoryInline::FlatWriteFloat32(r23, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r24);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f24.d));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    goto loc_8023E3B4;
}

loc_8023E3A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
}

loc_8023E3B4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 136u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 80));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::ReadResolved32(guest_range_3, 132u, (r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC007FF gpr_write=0xFFC0083B gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF00007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023E040 func_8023E040 preserves=false fpr_mask=0xFF000000
