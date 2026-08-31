#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80068260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80068260;

loc_80068260:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 256);
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
    r6 = MemoryInline::FlatRead32(r3);
    r23 = r3;
    r24 = r4;
    r25 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80068290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800682A0;
    }
}

loc_80068294:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006829C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800682A8;
    }
}

loc_800682A0:
{
    r3 = 0;
    goto loc_8006873C;
}

loc_800682A8:
{
    r0 = (r6 + 28);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    r5 = (r1 + 104);
    r6 = (r1 + 12);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050C20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = (r1 + 16);
    r5 = (r1 + 108);
    r6 = (r1 + 13);
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050C20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = (r1 + 16);
    r5 = (r1 + 112);
    r6 = (r1 + 14);
    r4 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050C20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800682F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80068318;
    }
}

loc_800682F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80068300:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80068318;
    }
}

loc_80068304:
{
    r0 = MemoryInline::FlatRead32((r1 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006830C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80068318;
    }
}

loc_80068310:
{
    r3 = 0;
    goto loc_8006873C;
}

loc_80068318:
{
    r29 = 0;
    // inline leaf 0x80063E30 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -32468));
    // end of inlined leaf 0x80063E30
    r12 = MemoryInline::FlatRead32(r3);
    r27 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80068334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r13 = ctx->gpr[13];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f29.d = MemoryInline::FlatReadFloat32((r2 + -29436));
    r31 = (r1 + 104);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    r30 = (r1 + 12);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29440));
    r28 = 0;
}

loc_8006834C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r26 = (r28 + 1);
}

loc_80068358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80068724;
    }
}

loc_8006835C:
{
}

loc_80068360:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80068570;
    }
}

loc_80068364:
{
    r3 = MemoryInline::FlatRead32(r25);
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80068374:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80068564;
    }
}

loc_80068378:
{
    r4 = MemoryInline::FlatRead32(r24);
}

loc_80068380:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8006838C;
    }
}

loc_80068384:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    goto loc_80068390;
}

loc_8006838C:
{
    r0 = 0;
}

loc_80068390:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80068394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800683E8;
    }
}

loc_80068398:
{
    ctx->lr = 0x8006839Cu;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80063C50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 168), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 168), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 172), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 176), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 184), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 188), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r1 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 208), f0.d);
    goto loc_800684A0;
}

loc_800683E8:
{
    r3 = r23;
    // inline leaf 0x80050430 (8 guest instruction(s))
}

loc_inl2_0x80050430:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8005043C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80050448;
    }
}

loc_inl2_0x80050440:
{
    r3 = (r3 + r0);
    goto loc_inl2_cont_80050430;
}

loc_inl2_0x80050448:
{
    r3 = 0;
}

loc_inl2_cont_80050430:
{
    // end of inlined leaf 0x80050430
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r6 = (r3 + 76);
    r4 = MemoryInline::FlatRead32(r25);
    r3 = (r1 + 8);
    r5 = MemoryInline::FlatRead32((r6 + 36));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r4 = (r6 + r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E340u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r24);
    r5 = (r1 + 168);
    r3 = (r3 + 160);
    r4 = (r4 + 112);
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
    InvokeDirectCpu<0x80199D64u>(ctx);
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
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x8006843Cu;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80063C50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r3 + 32));
    r4 = (r1 + 168);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 28u, (r3 + 28));
    r5 = r4;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 20u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 24u, (r3 + 24));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r3 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r3 + 16));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r3 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r3 + 4));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r3);
    r3 = (r1 + 120);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 120), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 124), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 128), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 132), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r1 + 136), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r1 + 140), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r1 + 144), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 148), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 152), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r1 + 156), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r1 + 160), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r1 + 164), f31.d);
    }
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
    InvokeDirectCpu<0x80199D64u>(ctx);
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
}

loc_800684A0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 200));
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 184));
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f2.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_2));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f3.d);
    // end of inlined leaf 0x8019AC24
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r3 = (r1 + 80);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 204));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 188));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 200), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f5.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_3, f3.d);
    // end of inlined leaf 0x8019AC24
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 208));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 176));
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 204), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f5.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_4));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_4, f3.d);
    // end of inlined leaf 0x8019AC24
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 208), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    goto loc_80068570;
}

loc_80068564:
{
    // inline leaf 0x80064180 (7 guest instruction(s))
    r3 = 0x802C0000u;
    r3 = (r3 + -17740);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
    // end of inlined leaf 0x80064180
    r4 = (r1 + 168);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_5, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_6, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_7, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_8 = (r4 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_8, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_9 = (r4 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_9, f5.d);
    // end of inlined leaf 0x80199D30
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_80068570:
{
    r3 = MemoryInline::FlatRead8(r30);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x80063FB0 (10 guest instruction(s))
}

loc_inl8_0x80063FB0:
{
}

loc_inl8_0x80063FB4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(127))) {
        goto loc_inl8_0x80063FD0;
    }
}

loc_inl8_0x80063FB8:
{
    r0 = (r3 * 68);
    r3 = 0x802C0000u;
    r3 = (r3 + -28536);
    r3 = (r3 + r0);
    r3 = (r3 + 44);
    goto loc_inl8_cont_80063FB0;
}

loc_inl8_0x80063FD0:
{
    r3 = 0;
}

loc_inl8_cont_80063FB0:
{
    // end of inlined leaf 0x80063FB0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80068580:
{
    r22 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80068700;
    }
}

loc_80068588:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80068590:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80068700;
    }
}

loc_80068594:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80068598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80068620;
    }
}

loc_8006859C:
{
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077910u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800685AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800686D8;
    }
}

loc_800685B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800685B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800686D8;
    }
}

loc_800685BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800685C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800686D8;
    }
}

loc_800685C8:
{
    r3 = r22;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800778F0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r4 = r3;
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = (-(f1.d));
    f4.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_11));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_11 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_11, f3.d);
    // end of inlined leaf 0x8019AC24
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    goto loc_800686D8;
}

loc_80068620:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80068634;
    }
}

loc_80068628:
{
    r0 = (r4 & 2);
}

loc_8006862C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80068634;
    }
}

loc_80068630:
{
    r3 = 1;
}

loc_80068634:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80068638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80068694;
    }
}

loc_8006863C:
{
    r3 = r22;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800778F0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r4 = r3;
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = (-(f1.d));
    f4.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_12));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_12 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_12, f3.d);
    // end of inlined leaf 0x8019AC24
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    goto loc_800686D8;
}

loc_80068694:
{
    r3 = r22;
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077910u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r3 = (r1 + 56);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r4 = r3;
    f3.d = PpcFmulsInline(f29.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AC24u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
}

loc_800686D8:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r4 = r26;
    r5 = (r1 + 56);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r6 = (r1 + 168);
    r7 = MemoryInline::FlatRead32(r31);
    ctr = r12;
    ctx->lr = 0x800686FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r13 = ctx->gpr[13];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80068724;
}

loc_80068700:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r4 = r26;
    r6 = (r1 + 168);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r5 = 0;
    r7 = MemoryInline::FlatRead32(r31);
    ctr = r12;
    ctx->lr = 0x80068724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r13 = ctx->gpr[13];
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80068724:
{
    r28 = (r28 + 1);
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
}

loc_80068730:
{
    r31 = (r31 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8006834C;
    }
}

loc_80068738:
{
    r3 = r27;
}

loc_8006873C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 256));
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
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80068260 func_80068260 preserves=false fpr_mask=0xE0000000
