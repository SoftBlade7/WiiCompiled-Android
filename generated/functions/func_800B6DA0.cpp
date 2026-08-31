#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B6DA0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800B6DA0;

loc_800B6DA0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -640), 0, 648u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -640), r1);
    r1 = (r1 + -640);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 644u, (r1 + 644), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 624u, (r1 + 624), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 632);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 608u, (r1 + 608), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 616);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 592u, (r1 + 592), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 600);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 576u, (r1 + 576), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 584);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 560u, (r1 + 560), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 568);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 544u, (r1 + 544), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 528u, (r1 + 528), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 512u, (r1 + 512), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 496u, (r1 + 496), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 480u, (r1 + 480), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 480);
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
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r24 = r4;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 20), f0.d);
    r25 = r5;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27808));
    r23 = r3;
    f28.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 16), f28.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B6E2C:
{
    r30 = cr;
    r28 = r24;
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_0 & 1);
    r27 = r24;
    r6 = r24;
    r7 = r25;
    r4 = (r1 + 20);
    r5 = (r1 + 16);
    r29 = 0;
    ctx->lr = 0x800B6E54u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B77D0u>(ctx);
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r23 + 48));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f25.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r23);
    MemoryInline::FlatWriteRam32((r1 + 112), r24);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    r4 = MemoryInline::FlatRead32((r23 + 72));
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
    MemoryInline::FlatWriteRam32((r1 + 72), r24);
    r3 = (r1 + 72);
    r12 = (r1 + 76);
    ctx->lr = 0x800B6EA4u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
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
    f30.d = MemoryInline::FlatReadFloat32((r2 + -27792));
    r31 = (r1 + 328);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -27800));
    r22 = 1127219200;
    goto loc_800B770C;
}

loc_800B6EC4:
{
    r5 = (r26 & 65535);
}

loc_800B6ECC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_800B75E4;
    }
}

loc_800B6ED0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r29));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B6ED8:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_2 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 112), r7);
    MemoryInline::FlatWriteRam32((r1 + 124), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7134;
    }
}

loc_800B6EE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_800B6EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7134;
    }
}

loc_800B6EF0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r27));
}

loc_800B6EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7134;
    }
}

loc_800B6EF8:
{
    r4 = MemoryInline::FlatRead32((r1 + 108));
    r3 = MemoryInline::FlatRead32((r1 + 116));
    r0 = MemoryInline::FlatRead32((r1 + 120));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 372u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 88), r4);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 92), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 100), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 104), r6);
    guest_range_4 = MemoryInline::ResolveRangeHost(r23, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r23);
    MemoryInline::WriteResolved8(guest_range_3, 272u, (r1 + 328), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r23 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 273u, (r1 + 329), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r23 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 274u, (r1 + 330), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r23 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 275u, (r1 + 331), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r23 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 276u, (r1 + 332), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r23 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 277u, (r1 + 333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r23 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 278u, (r1 + 334), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r23 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 279u, (r1 + 335), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r23 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 280u, (r1 + 336), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r23 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 281u, (r1 + 337), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r23 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 282u, (r1 + 338), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r23 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 283u, (r1 + 339), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r23 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 284u, (r1 + 340), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r23 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 285u, (r1 + 341), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r23 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 286u, (r1 + 342), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r23 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 287u, (r1 + 343), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r23 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 288u, (r1 + 344), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r23 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 289u, (r1 + 345), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r23 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 290u, (r1 + 346), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r23 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 291u, (r1 + 347), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r23 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 292u, (r1 + 348), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r23 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 293u, (r1 + 349), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r23 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 294u, (r1 + 350), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r23 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 295u, (r1 + 351), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r23 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 296u, (r1 + 352), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r23 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 297u, (r1 + 353), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r23 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 298u, (r1 + 354), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 27u, (r23 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 299u, (r1 + 355), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 28u, (r23 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 300u, (r1 + 356), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 29u, (r23 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 301u, (r1 + 357), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 30u, (r23 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 302u, (r1 + 358), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r23 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 303u, (r1 + 359), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r23 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 304u, (r1 + 360), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r23 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r23 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 312u, (r1 + 368), r0);
        MemoryInline::WriteResolved32(guest_range_3, 308u, (r1 + 364), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r23 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r23 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 320u, (r1 + 376), r0);
        MemoryInline::WriteResolved32(guest_range_3, 316u, (r1 + 372), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r23 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 324u, (r1 + 380), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r23 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r23 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 332u, (r1 + 388), r0);
        MemoryInline::WriteResolved32(guest_range_3, 328u, (r1 + 384), r3);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_4, 64u, (r23 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 336u, (r1 + 392), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 65u, (r23 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 337u, (r1 + 393), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r23 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 338u, (r1 + 394), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r23 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 339u, (r1 + 395), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r23 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 340u, (r1 + 396), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r23 + 72));
    r4 = (r1 + 56);
    MemoryInline::WriteResolved32(guest_range_3, 344u, (r1 + 400), r0);
    r6 = (r1 + 88);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r23 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 348u, (r1 + 404), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r23 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 352u, (r1 + 408), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 84u, (r23 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 356u, (r1 + 412), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r23 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 360u, (r1 + 416), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r23 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 364u, (r1 + 420), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r23 + 96));
    MemoryInline::WriteResolved32(guest_range_3, 368u, (r1 + 424), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 56), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 60), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 64), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 68), f29.d);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 88), r31);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800B70E4u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_800B70F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B7128;
    }
}

loc_800B70F8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 372));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B710C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B7128;
    }
}

loc_800B7110:
{
    MemoryInline::FlatWriteRam32((r1 + 72), r28);
    r3 = r31;
    r26 = 10;
    r4 = 0;
    ctx->lr = 0x800B7124u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800B770C;
}

loc_800B7128:
{
    r3 = (r1 + 328);
    r4 = 0;
    ctx->lr = 0x800B7134u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800B7134:
{
    r3 = MemoryInline::FlatRead32((r23 + 96));
    r4 = (r26 & 65535);
    r5 = (r1 + 108);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x800B7150u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800B7154:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_800B75B0;
    }
}

loc_800B7158:
{
    r0 = MemoryInline::FlatRead32((r23 + 92));
    r3 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_800B7164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B736C;
    }
}

loc_800B7168:
{
    r3 = MemoryInline::FlatRead32((r1 + 112));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 316u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 12), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 40), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 44), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r1 + 48), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r1 + 52), f29.d);
    }
    guest_range_6 = MemoryInline::ResolveRangeHost(r23, 0, 100u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_6, 0u, r23);
    MemoryInline::WriteResolved8(guest_range_5, 216u, (r1 + 228), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r23 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 217u, (r1 + 229), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 2u, (r23 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 218u, (r1 + 230), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 3u, (r23 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 219u, (r1 + 231), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r23 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 220u, (r1 + 232), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r23 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 221u, (r1 + 233), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r23 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 222u, (r1 + 234), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r23 + 7));
    MemoryInline::WriteResolved8(guest_range_5, 223u, (r1 + 235), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 8u, (r23 + 8));
    MemoryInline::WriteResolved8(guest_range_5, 224u, (r1 + 236), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 9u, (r23 + 9));
    MemoryInline::WriteResolved8(guest_range_5, 225u, (r1 + 237), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 10u, (r23 + 10));
    MemoryInline::WriteResolved8(guest_range_5, 226u, (r1 + 238), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 11u, (r23 + 11));
    MemoryInline::WriteResolved8(guest_range_5, 227u, (r1 + 239), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 12u, (r23 + 12));
    MemoryInline::WriteResolved8(guest_range_5, 228u, (r1 + 240), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 13u, (r23 + 13));
    MemoryInline::WriteResolved8(guest_range_5, 229u, (r1 + 241), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 14u, (r23 + 14));
    MemoryInline::WriteResolved8(guest_range_5, 230u, (r1 + 242), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 15u, (r23 + 15));
    MemoryInline::WriteResolved8(guest_range_5, 231u, (r1 + 243), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 16u, (r23 + 16));
    MemoryInline::WriteResolved8(guest_range_5, 232u, (r1 + 244), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 17u, (r23 + 17));
    MemoryInline::WriteResolved8(guest_range_5, 233u, (r1 + 245), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 18u, (r23 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 234u, (r1 + 246), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 19u, (r23 + 19));
    MemoryInline::WriteResolved8(guest_range_5, 235u, (r1 + 247), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 20u, (r23 + 20));
    MemoryInline::WriteResolved8(guest_range_5, 236u, (r1 + 248), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 21u, (r23 + 21));
    MemoryInline::WriteResolved8(guest_range_5, 237u, (r1 + 249), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 22u, (r23 + 22));
    MemoryInline::WriteResolved8(guest_range_5, 238u, (r1 + 250), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 23u, (r23 + 23));
    MemoryInline::WriteResolved8(guest_range_5, 239u, (r1 + 251), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 24u, (r23 + 24));
    MemoryInline::WriteResolved8(guest_range_5, 240u, (r1 + 252), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 25u, (r23 + 25));
    MemoryInline::WriteResolved8(guest_range_5, 241u, (r1 + 253), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 26u, (r23 + 26));
    MemoryInline::WriteResolved8(guest_range_5, 242u, (r1 + 254), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 27u, (r23 + 27));
    MemoryInline::WriteResolved8(guest_range_5, 243u, (r1 + 255), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 28u, (r23 + 28));
    MemoryInline::WriteResolved8(guest_range_5, 244u, (r1 + 256), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 29u, (r23 + 29));
    MemoryInline::WriteResolved8(guest_range_5, 245u, (r1 + 257), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 30u, (r23 + 30));
    MemoryInline::WriteResolved8(guest_range_5, 246u, (r1 + 258), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 31u, (r23 + 31));
    MemoryInline::WriteResolved8(guest_range_5, 247u, (r1 + 259), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r23 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 248u, (r1 + 260), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r23 + 36));
            r4 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r23 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 256u, (r1 + 268), r4);
        MemoryInline::WriteResolved32(guest_range_5, 252u, (r1 + 264), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r23 + 44));
            r4 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r23 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 264u, (r1 + 276), r4);
        MemoryInline::WriteResolved32(guest_range_5, 260u, (r1 + 272), r5);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r23 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 268u, (r1 + 280), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r23 + 56));
            r4 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r23 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 276u, (r1 + 288), r4);
        MemoryInline::WriteResolved32(guest_range_5, 272u, (r1 + 284), r5);
    }
    r4 = MemoryInline::ReadResolved8(guest_range_6, 64u, (r23 + 64));
    MemoryInline::WriteResolved8(guest_range_5, 280u, (r1 + 292), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 65u, (r23 + 65));
    MemoryInline::WriteResolved8(guest_range_5, 281u, (r1 + 293), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 66u, (r23 + 66));
    MemoryInline::WriteResolved8(guest_range_5, 282u, (r1 + 294), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 67u, (r23 + 67));
    MemoryInline::WriteResolved8(guest_range_5, 283u, (r1 + 295), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 68u, (r23 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 284u, (r1 + 296), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r23 + 72));
    r6 = (r3 - r24);
    MemoryInline::WriteResolved32(guest_range_5, 288u, (r1 + 300), r4);
    r3 = (r1 + 228);
    r4 = (r1 + 40);
    r5 = (r1 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 76u, (r23 + 76));
    r6 = (r25 - r6);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 292u, (r1 + 304), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 80u, (r23 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 296u, (r1 + 308), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 84u, (r23 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 300u, (r1 + 312), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_6, 88u, (r23 + 88));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 304u, (r1 + 316), r7);
        MemoryInline::WriteResolved32(guest_range_5, 308u, (r1 + 320), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r23 + 96));
    MemoryInline::WriteResolved32(guest_range_5, 312u, (r1 + 324), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 260u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 260u, (r1 + 272), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 264u, (r1 + 276), f29.d);
    }
    ctx->lr = 0x800B733Cu;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B65F0u>(ctx);
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r3 = (r1 + 228);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r4 = 0;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x800B7354u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 44), f0.d);
    goto loc_800B759C;
}

loc_800B736C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_800B7370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B7574;
    }
}

loc_800B7374:
{
    r3 = MemoryInline::FlatRead32((r1 + 112));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 220u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 8), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r1 + 24), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r1 + 28), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r1 + 32), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r1 + 36), f29.d);
    }
    guest_range_8 = MemoryInline::ResolveRangeHost(r23, 0, 100u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_8, 0u, r23);
    MemoryInline::WriteResolved8(guest_range_7, 120u, (r1 + 128), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r23 + 1));
    MemoryInline::WriteResolved8(guest_range_7, 121u, (r1 + 129), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 2u, (r23 + 2));
    MemoryInline::WriteResolved8(guest_range_7, 122u, (r1 + 130), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 3u, (r23 + 3));
    MemoryInline::WriteResolved8(guest_range_7, 123u, (r1 + 131), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 4u, (r23 + 4));
    MemoryInline::WriteResolved8(guest_range_7, 124u, (r1 + 132), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 5u, (r23 + 5));
    MemoryInline::WriteResolved8(guest_range_7, 125u, (r1 + 133), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 6u, (r23 + 6));
    MemoryInline::WriteResolved8(guest_range_7, 126u, (r1 + 134), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 7u, (r23 + 7));
    MemoryInline::WriteResolved8(guest_range_7, 127u, (r1 + 135), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 8u, (r23 + 8));
    MemoryInline::WriteResolved8(guest_range_7, 128u, (r1 + 136), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 9u, (r23 + 9));
    MemoryInline::WriteResolved8(guest_range_7, 129u, (r1 + 137), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 10u, (r23 + 10));
    MemoryInline::WriteResolved8(guest_range_7, 130u, (r1 + 138), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 11u, (r23 + 11));
    MemoryInline::WriteResolved8(guest_range_7, 131u, (r1 + 139), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 12u, (r23 + 12));
    MemoryInline::WriteResolved8(guest_range_7, 132u, (r1 + 140), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 13u, (r23 + 13));
    MemoryInline::WriteResolved8(guest_range_7, 133u, (r1 + 141), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 14u, (r23 + 14));
    MemoryInline::WriteResolved8(guest_range_7, 134u, (r1 + 142), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 15u, (r23 + 15));
    MemoryInline::WriteResolved8(guest_range_7, 135u, (r1 + 143), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r23 + 16));
    MemoryInline::WriteResolved8(guest_range_7, 136u, (r1 + 144), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 17u, (r23 + 17));
    MemoryInline::WriteResolved8(guest_range_7, 137u, (r1 + 145), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r23 + 18));
    MemoryInline::WriteResolved8(guest_range_7, 138u, (r1 + 146), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r23 + 19));
    MemoryInline::WriteResolved8(guest_range_7, 139u, (r1 + 147), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 20u, (r23 + 20));
    MemoryInline::WriteResolved8(guest_range_7, 140u, (r1 + 148), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 21u, (r23 + 21));
    MemoryInline::WriteResolved8(guest_range_7, 141u, (r1 + 149), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 22u, (r23 + 22));
    MemoryInline::WriteResolved8(guest_range_7, 142u, (r1 + 150), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 23u, (r23 + 23));
    MemoryInline::WriteResolved8(guest_range_7, 143u, (r1 + 151), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 24u, (r23 + 24));
    MemoryInline::WriteResolved8(guest_range_7, 144u, (r1 + 152), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 25u, (r23 + 25));
    MemoryInline::WriteResolved8(guest_range_7, 145u, (r1 + 153), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 26u, (r23 + 26));
    MemoryInline::WriteResolved8(guest_range_7, 146u, (r1 + 154), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 27u, (r23 + 27));
    MemoryInline::WriteResolved8(guest_range_7, 147u, (r1 + 155), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 28u, (r23 + 28));
    MemoryInline::WriteResolved8(guest_range_7, 148u, (r1 + 156), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 29u, (r23 + 29));
    MemoryInline::WriteResolved8(guest_range_7, 149u, (r1 + 157), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 30u, (r23 + 30));
    MemoryInline::WriteResolved8(guest_range_7, 150u, (r1 + 158), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 31u, (r23 + 31));
    MemoryInline::WriteResolved8(guest_range_7, 151u, (r1 + 159), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r23 + 32));
    MemoryInline::WriteResolved32(guest_range_7, 152u, (r1 + 160), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r23 + 36));
            r4 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r23 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_7, 160u, (r1 + 168), r4);
        MemoryInline::WriteResolved32(guest_range_7, 156u, (r1 + 164), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r23 + 44));
            r4 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r23 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_7, 168u, (r1 + 176), r4);
        MemoryInline::WriteResolved32(guest_range_7, 164u, (r1 + 172), r5);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r23 + 52));
    MemoryInline::WriteResolved32(guest_range_7, 172u, (r1 + 180), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_8, 56u, (r23 + 56));
            r4 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r23 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_7, 180u, (r1 + 188), r4);
        MemoryInline::WriteResolved32(guest_range_7, 176u, (r1 + 184), r5);
    }
    r4 = MemoryInline::ReadResolved8(guest_range_8, 64u, (r23 + 64));
    MemoryInline::WriteResolved8(guest_range_7, 184u, (r1 + 192), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 65u, (r23 + 65));
    MemoryInline::WriteResolved8(guest_range_7, 185u, (r1 + 193), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 66u, (r23 + 66));
    MemoryInline::WriteResolved8(guest_range_7, 186u, (r1 + 194), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 67u, (r23 + 67));
    MemoryInline::WriteResolved8(guest_range_7, 187u, (r1 + 195), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 68u, (r23 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 188u, (r1 + 196), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r23 + 72));
    r6 = (r3 - r24);
    MemoryInline::WriteResolved32(guest_range_7, 192u, (r1 + 200), r4);
    r3 = (r1 + 128);
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 76u, (r23 + 76));
    r6 = (r25 - r6);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 196u, (r1 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 80u, (r23 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 200u, (r1 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 84u, (r23 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 204u, (r1 + 212), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r23 + 88));
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 208u, (r1 + 216), r7);
        MemoryInline::WriteResolved32(guest_range_7, 212u, (r1 + 220), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r23 + 96));
    MemoryInline::WriteResolved32(guest_range_7, 216u, (r1 + 224), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 164u, (r1 + 172), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 168u, (r1 + 176), f29.d);
    }
    ctx->lr = 0x800B7548u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B65F0u>(ctx);
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 128);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = 0;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x800B7560u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 44), f0.d);
    goto loc_800B759C;
}

loc_800B7574:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_800B7584:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B758C;
    }
}

loc_800B7588:
{
    goto loc_800B7590;
}

loc_800B758C:
{
    f1.d = f25.d;
}

loc_800B7590:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f25.d = f1.d;
    MemoryInline::FlatWriteFloat32((r23 + 44), f0.d);
}

loc_800B759C:
{
}

loc_800B75A0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800B75A8;
    }
}

loc_800B75A4:
{
    r27 = MemoryInline::FlatRead32((r1 + 72));
}

loc_800B75A8:
{
    r29 = 0;
    goto loc_800B75D8;
}

loc_800B75B0:
{
}

loc_800B75B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800B75C0;
    }
}

loc_800B75B8:
{
    r29 = 0;
    goto loc_800B75D8;
}

loc_800B75C0:
{
}

loc_800B75C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_800B75D0;
    }
}

loc_800B75C8:
{
    r29 = 1;
    goto loc_800B75D8;
}

loc_800B75D0:
{
}

loc_800B75D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_800B771C;
    }
}

loc_800B75D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    goto loc_800B76EC;
}

loc_800B75E4:
{
}

loc_800B75E8:
{
    f27.d = MemoryInline::FlatReadFloat32((r23 + 48));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800B7680;
    }
}

loc_800B75F0:
{
}

loc_800B75F4:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r27))) {
        goto loc_800B7680;
    }
}

loc_800B75F8:
{
}

loc_800B75FC:
{
    f24.d = MemoryInline::FlatReadFloat32((r23 + 44));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800B760C;
    }
}

loc_800B7604:
{
    f23.d = MemoryInline::FlatReadFloat32((r23 + 80));
    goto loc_800B7610;
}

loc_800B760C:
{
    f23.d = MemoryInline::FlatReadFloat32((r2 + -27804));
}

loc_800B7610:
{
    r0 = MemoryInline::FlatRead8((r23 + 67));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800B7618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7624;
    }
}

loc_800B761C:
{
    f2.d = MemoryInline::FlatReadFloat32((r23 + 68));
    goto loc_800B7658;
}

loc_800B7624:
{
    r3 = MemoryInline::FlatRead32((r23 + 72));
    r4 = (r26 & 65535);
    f22.d = MemoryInline::FlatReadFloat32((r23 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x800B7640u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    MemoryInline::FlatWriteRam32((r1 + 432), r22);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 432));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f2.d = PpcFmulsInline(f0.d, f22.d);
}

loc_800B7658:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B7670:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B7680;
    }
}

loc_800B7674:
{
    MemoryInline::FlatWriteRam32((r1 + 72), r28);
    r26 = 10;
    goto loc_800B770C;
}

loc_800B7680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800B7684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7698;
    }
}

loc_800B7688:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 44), f0.d);
}

loc_800B7698:
{
    r3 = MemoryInline::FlatRead32((r23 + 72));
    r29 = 1;
    f22.d = MemoryInline::FlatReadFloat32((r23 + 40));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x800B76B4u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (0 - r3);
    MemoryInline::FlatWriteRam32((r1 + 432), r22);
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 48));
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    r3 = r23;
    r4 = (r26 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 432));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f1.d = PpcFmulsInline(f1.d, f22.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r23 + 48), f0.d);
    ctx->lr = 0x800B76E8u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B3B40u>(ctx);
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r23 + 48), f27.d);
}

loc_800B76EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B76F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B76F8;
    }
}

loc_800B76F4:
{
    r28 = MemoryInline::FlatRead32((r1 + 72));
}

loc_800B76F8:
{
    r3 = (r1 + 72);
    r12 = (r1 + 76);
    ctx->lr = 0x800B7704u;
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
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

loc_800B770C:
{
    r7 = MemoryInline::FlatRead32((r1 + 72));
    r0 = (r7 - r24);
}

loc_800B7718:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r25))) {
        goto loc_800B6EC4;
    }
}

loc_800B771C:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_800B772C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B7734;
    }
}

loc_800B7730:
{
    goto loc_800B7738;
}

loc_800B7734:
{
    f1.d = f25.d;
}

loc_800B7738:
{
    r0 = MemoryInline::FlatRead32((r23 + 92));
    r0 = (r0 & 768);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(256));
}

loc_800B7744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7750;
    }
}

loc_800B7748:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(512));
}

loc_800B774C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B7758;
    }
}

loc_800B7750:
{
    MemoryInline::FlatWriteFloat32((r23 + 48), f28.d);
    goto loc_800B7764;
}

loc_800B7758:
{
    f0.d = MemoryInline::FlatReadFloat32((r23 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f26.d));
    MemoryInline::FlatWriteFloat32((r23 + 48), f0.d);
}

loc_800B7764:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 480), 0, 168u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 144u, (r1 + 624));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 128u, (r1 + 608));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 112u, (r1 + 592));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 96u, (r1 + 576));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 80u, (r1 + 560));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 64u, (r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 48u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 32u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 16u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 480);
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, (r1 + 480));
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
    r0 = MemoryInline::ReadResolved32(guest_range_9, 164u, (r1 + 644));
    ctx->lr = r0;
    r1 = (r1 + 640);
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
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
// RECOMP_REGISTRATION base 0x800B6DA0 func_800B6DA0 preserves=false fpr_mask=0xFFC00000
