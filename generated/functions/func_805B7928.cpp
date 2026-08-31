#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B7928(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B7928;

loc_805B7928:
{
    MemoryInline::FlatWriteRam32((r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 516), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 496), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 480), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 464), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 448), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 432), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 432);
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
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r30 = 0x80890000u;
    f27.d = f1.d;
    r28 = MemoryInline::FlatRead8((r1 + 523));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B7978:
{
    f28.d = f2.d;
    r31 = r4;
    r22 = r5;
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r26 = r9;
    r27 = r10;
    r30 = (r30 + 10120);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7F08;
    }
}

loc_805B79A0:
{
    f3.d = MemoryInline::FlatReadFloat32((r5 + 60));
    r29 = (r5 + 24);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 68));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f31.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_805B79D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7F08;
    }
}

loc_805B79E0:
{
    f29.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = (r1 + 288);
    r4 = (r4 + 240);
    // inline leaf 0x8023030C (44 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24944));
    f12.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32(r4);
    f11.d = PpcFmulsInline(f1.d, f12.d);
    f9.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f6.d = PpcFmulsInline(f1.d, f7.d);
    f2.d = PpcFmulsInline(f1.d, f9.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f5.d = PpcFmulsInline(f1.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    f10.d = PpcFmulsInline(f11.d, f12.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f0.d);
    f1.d = PpcFmulsInline(f6.d, f7.d);
    f4.d = PpcFmulsInline(f2.d, f9.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f3.d = PpcFmulsInline(f6.d, f12.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f0.d = PpcFmulsInline(f5.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f8.d);
    f6.d = PpcFmulsInline(f6.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f4.d);
    f2.d = PpcFmulsInline(f5.d, f12.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f3.d);
    f3.d = PpcFmulsInline(f5.d, f7.d);
    f4.d = PpcFmulsInline(f11.d, f9.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f0.d);
    }
    // end of inlined leaf 0x8023030C
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 288), 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 288));
    r3 = (r1 + 288);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 304));
    r4 = (r31 + 52);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 320));
    r5 = (r1 + 192);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 240), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 240), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 292));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 244), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 308));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 248), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r1 + 324));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 256), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 296));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 260), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 312));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 264), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r1 + 328));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 272), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r1 + 276), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 280), f0.d);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    r3 = (r1 + 192);
    r4 = (r1 + 240);
    r5 = (r1 + 336);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    r6 = MemoryInline::FlatRead32((r22 + 72));
    r5 = r29;
    r0 = MemoryInline::FlatRead32((r22 + 76));
    r3 = (r1 + 164);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r4 = (r1 + 176);
    MemoryInline::FlatWriteRam32((r1 + 176), r6);
    r0 = MemoryInline::FlatRead32((r22 + 80));
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    guest_range_4 = MemoryInline::ResolveRangeHost(r5, 0, 12u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f3.d = MemoryInline::FlatReadFloat32((r1 + 368));
    r3 = (r1 + 152);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    r4 = (r1 + 164);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 352));
    r5 = (r1 + 176);
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 336));
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 372));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 340));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 356));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 376));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 360));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 344));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r29);
    f1.d = (-(f30.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 152));
    r4 = r25;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r29 + 4));
    r3 = (r1 + 140);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r29 + 8));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = f29.d;
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f29.d));
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    r4 = r29;
    r3 = (r1 + 32);
    r5 = (r1 + 140);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r5 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r4 = (r1 + 140);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f6.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = PpcFmulsInline(f6.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f3.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B7BC4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B7BD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B7F08;
    }
}

loc_805B7BD4:
{
    r3 = (r1 + 140);
    ctx->lr = 0x805B7BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32(r25);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B7C10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B7C18;
    }
}

loc_805B7C14:
{
    f1.d = f0.d;
}

loc_805B7C18:
{
    f3.d = PpcFmulsInline(f31.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 144));
    r6 = r23;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    r3 = (r1 + 116);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f30.d));
    r4 = (r1 + 104);
    r5 = (r1 + 128);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    // inline leaf 0x805AEC24 (26 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = PpcFmulsInline(f5.d, f6.d);
    f1.d = PpcFmulsInline(f8.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x805AEC24
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x805B7C7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f29.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x805B7CA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = std::fabs(f31.d);
    f30.d = f1.d;
    f0.d = std::fabs(f29.d);
    f1.d = PpcFmulsInline(f27.d, f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B7CB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B7CD8;
    }
}

loc_805B7CBC:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_805B7CC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B7CD4;
    }
}

loc_805B7CC8:
{
    f0.d = (-(f27.d));
    f29.d = PpcFmulsInline(f0.d, f2.d);
    goto loc_805B7CD8;
}

loc_805B7CD4:
{
    f29.d = f1.d;
}

loc_805B7CD8:
{
    r3 = (r1 + 116);
    ctx->lr = 0x805B7CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f5.d = std::fabs(f31.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f4.d = std::fabs(f30.d);
    f3.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f1.d = PpcFmulsInline(f28.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f3.d);
    f2.d = PpcFmulsInline(f2.d, f29.d);
    f0.d = PpcFmulsInline(f0.d, f29.d);
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_805B7D0C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B7D34;
    }
}

loc_805B7D18:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805B7D20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B7D30;
    }
}

loc_805B7D24:
{
    f0.d = (-(f28.d));
    f30.d = PpcFmulsInline(f0.d, f5.d);
    goto loc_805B7D34;
}

loc_805B7D30:
{
    f30.d = f1.d;
}

loc_805B7D34:
{
    r3 = (r1 + 104);
    ctx->lr = 0x805B7D3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_805B7D44:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f5.d = PpcFmulsInline(f2.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f4.d = PpcFmulsInline(f1.d, f30.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f3.d = PpcFmulsInline(f0.d, f30.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    r4 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r3 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B7DB0;
    }
}

loc_805B7DA4:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
}

loc_805B7DB0:
{
}

loc_805B7DB4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_805B7DC0;
    }
}

loc_805B7DB8:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
}

loc_805B7DC0:
{
    r3 = (r1 + 80);
    r5 = r24;
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
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B7DD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 124));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7F08;
    }
}

loc_805B7E08:
{
    r3 = (r1 + 8);
    r4 = (r1 + 176);
    r5 = (r1 + 92);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r31 + 240);
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r4 = (r1 + 68);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 368));
    r5 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 372));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 352));
    f7.d = PpcFmulsInline(f2.d, f11.d);
    f6.d = PpcFmulsInline(f1.d, f10.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 356));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 336));
    f4.d = PpcFmulsInline(f0.d, f11.d);
    f3.d = PpcFmulsInline(f2.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 340));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f11.d);
    f0.d = PpcFmulsInline(f0.d, f10.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 376));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 360));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 344));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f11.d);
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f10.d);
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f9.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    ctx->lr = 0x805B7EACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r4 = MemoryInline::FlatRead32((r1 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_805B7EB4:
{
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B7ED4;
    }
}

loc_805B7ECC:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_805B7ED4:
{
    f5.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 168));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 164));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 164), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 168), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 172), f0.d);
}

loc_805B7F08:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 432);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 432));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 516));
    ctx->lr = r0;
    r1 = (r1 + 512);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC007FF gpr_write=0xFFC0087B gpr_return=0x00000018 fpr_read=0xF800DFFF fpr_write=0xF800FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B7928 func_805B7928 preserves=false fpr_mask=0xF8000000
