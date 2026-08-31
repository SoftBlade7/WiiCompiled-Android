#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078F500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8078F500;

loc_8078F500:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
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
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r31 = 0x808A0000u;
    f31.d = f1.d;
    r23 = r4;
}

loc_8078F530:
{
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r31 = (r31 + 19288);
    r22 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078F560;
    }
}

loc_8078F550:
{
    r4 = 0x809C0000u;
    r22 = (r3 + 16);
    r4 = MemoryInline::FlatRead32((r4 + 15376));
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_8078F560:
{
}

loc_8078F564:
{
    r29 = MemoryInline::FlatRead32((r3 + 16));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8078F59C;
    }
}

loc_8078F56C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 88u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r7 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r7 + 4), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r7, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r7 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r7 + 16), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r7 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r7 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r7 + 76), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r7 + 72), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r7 + 84), f1.d);
}

loc_8078F59C:
{
}

loc_8078F5A0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8078F5AC;
    }
}

loc_8078F5A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r8, r0);
}

loc_8078F5AC:
{
}

loc_8078F5B0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8078F5D8;
    }
}

loc_8078F5B4:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r29, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 36), f0.d);
}

loc_8078F5D8:
{
}

loc_8078F5DC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8078F668;
    }
}

loc_8078F5E0:
{
    r30 = MemoryInline::FlatRead32((r7 + 88));
}

loc_8078F5E8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8078F668;
    }
}

loc_8078F5EC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078F5F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078F660;
    }
}

loc_8078F5F8:
{
    r3 = r30;
    ctx->lr = 0x8078F600u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD954u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r30);
    r25 = (r25 & r3);
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078F60C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078F668;
    }
}

loc_8078F610:
{
    r3 = 0x809C0000u;
    r4 = 0x808A0000u;
    r0 = 0;
    r6 = 0x809C0000u;
    r8 = MemoryInline::FlatRead32((r4 + 26368));
    r5 = r23;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = (r6 + 15364);
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    r9 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 136));
    r4 = 0;
    r7 = 134217728;
    ctx->lr = 0x8078F648u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807C2A60u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8078F64C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8078F668;
    }
}

loc_8078F650:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8078F668;
}

loc_8078F660:
{
    r3 = r30;
    // inline leaf 0x807BD930 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 26304));
    r4 = 0;
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x807BD930
}

loc_8078F668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8078F66C:
{
    r30 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078F6AC;
    }
}

loc_8078F674:
{
    r3 = 0x809C0000u;
    f2.d = f31.d;
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    r5 = r23;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 136));
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    r4 = 0;
    ctx->lr = 0x8078F6A0u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807C3CF0u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078F6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078F6AC;
    }
}

loc_8078F6A8:
{
    r30 = 1;
}

loc_8078F6AC:
{
    r3 = 0x809C0000u;
    f1.d = f31.d;
    r3 = MemoryInline::FlatRead32((r3 + 17168));
    r4 = r23;
    r5 = r24;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r28;
    r23 = 0;
    ctx->lr = 0x8078F6D8u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081BE48u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8078F6DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8078F6E8;
    }
}

loc_8078F6E0:
{
}

loc_8078F6E4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8078F6EC;
    }
}

loc_8078F6E8:
{
    r23 = 1;
}

loc_8078F6EC:
{
}

loc_8078F6F0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8078F744;
    }
}

loc_8078F6F4:
{
}

loc_8078F6F8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8078F71C;
    }
}

loc_8078F6FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 12);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 20);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_4 = (r26 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_5 = (r26 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_5, f2.d);
}

loc_8078F71C:
{
}

loc_8078F720:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8078F744;
    }
}

loc_8078F724:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_5 = (r29 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5, f0.d);
}

loc_8078F744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8078F748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078F760;
    }
}

loc_8078F74C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32(r22, r0);
}

loc_8078F760:
{
    r3 = r23;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078F500 func_8078F500 preserves=false fpr_mask=0x80000000
