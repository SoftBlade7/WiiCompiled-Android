#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80583B88(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80583B88;

loc_80583B88:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 240u, (r1 + 240), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 224u, (r1 + 224), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 208);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r4 = MemoryInline::FlatRead32(r3);
    r28 = 0x80890000u;
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r28 = (r28 + 6656);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80583BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583BF8;
    }
}

loc_80583BE4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80583EEC;
}

loc_80583BF8:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 65536);
}

loc_80583C00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583C14;
    }
}

loc_80583C04:
{
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 2048);
}

loc_80583C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80583C28;
    }
}

loc_80583C14:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 192));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80583C24:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80583C3C;
    }
}

loc_80583C28:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80583C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583EEC;
    }
}

loc_80583C3C:
{
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r5 = MemoryInline::FlatRead32((r3 + 104));
    r4 = MemoryInline::FlatRead32((r3 + 108));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r3 = r31;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 168u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 72), r5);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 76), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 80), r0);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f6.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f1.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 184));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    r3 = r31;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 60), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r1 + 64), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r1 + 68), f0.d);
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    r4 = 0x808B0000u;
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r0 = 0;
    f7.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f30.d = MemoryInline::FlatReadFloat32((r4 + 23280));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d));
    f4.d = MemoryInline::FlatReadFloat32(r28);
    f3.d = (-(f30.d));
    f31.d = MemoryInline::FlatReadFloat32((r28 + 28));
    r27 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 48), f5.d);
    f27.d = PpcFmulsInline(f3.d, f2.d);
    r26 = 0;
    f28.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 52), f6.d);
    f29.d = PpcFmulsInline(f3.d, f0.d);
    r28 = 0x809C0000u;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 56), f7.d);
    r29 = 0x809C0000u;
    r30 = 4194304;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r1 + 84), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r1 + 88), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r1 + 92), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r1 + 96), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r1 + 100), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r1 + 104), f4.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 172), r0);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r0);
}

loc_80583D28:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = f30.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r4 = (r1 + 36);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 76));
    r5 = (r29 + 15364);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    r6 = (r30 + 2048);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r7 = (r1 + 84);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = MemoryInline::FlatRead32((r28 + 12100));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    r8 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    r9 = 0;
    ctx->lr = 0x80583D7Cu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F500u>(ctx);
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80583D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583E7C;
    }
}

loc_80583D84:
{
    r28 = (r1 + 120);
    r3 = (r31 + 116);
    r4 = r3;
    r6 = 1;
    r5 = r28;
    ctx->lr = 0x80583D9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = MemoryInline::FlatRead32((r3 + 176));
    r5 = r28;
    r0 = MemoryInline::FlatRead32((r3 + 180));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r0 = MemoryInline::FlatRead32((r3 + 184));
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r4 = r3;
    // inline leaf 0x805AEBD0 (21 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805AEBD0
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 176), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = MemoryInline::FlatRead32((r3 + 200));
    r5 = r28;
    r0 = MemoryInline::FlatRead32((r3 + 204));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = MemoryInline::FlatRead32((r3 + 208));
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    // inline leaf 0x805AEBD0 (21 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805AEBD0
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 204), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 512);
}

loc_80583E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80583E74;
    }
}

loc_80583E50:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteFloat32((r31 + 68), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteFloat32((r31 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
}

loc_80583E74:
{
    r27 = 1;
    goto loc_80583ED0;
}

loc_80583E7C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r26 = (r26 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(3));
}

loc_80583E8C:
{
    f5.d = PpcFmulsInline(f2.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f4.d = PpcFmulsInline(f1.d, f31.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = PpcFmulsInline(f0.d, f31.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f27.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f28.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80583D28;
    }
}

loc_80583ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80583ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80583EEC;
    }
}

loc_80583ED8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80583EEC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 184), 0, 112u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 208);
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 208));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
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
// RECOMP_REGISTRATION base 0x80583B88 func_80583B88 preserves=false fpr_mask=0xF8000000
