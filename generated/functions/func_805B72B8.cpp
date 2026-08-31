#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B72B8(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
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
    uint32_t xer = ctx->xer;

    goto loc_805B72B8;

loc_805B72B8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -512), 0, 520u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 516u, (r1 + 516), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 496u, (r1 + 496), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 480u, (r1 + 480), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 464u, (r1 + 464), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 448u, (r1 + 448), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 432u, (r1 + 432), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 416u, (r1 + 416), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 400u, (r1 + 400), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 384u, (r1 + 384), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 368u, (r1 + 368), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 352u, (r1 + 352), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 352);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 332u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 336u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 340u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 344u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 348u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r30 = 0x80890000u;
    f28.d = f1.d;
    r31 = r4;
    r0 = (r0 & 67);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B7330:
{
    f29.d = f2.d;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = (r30 + 10120);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7868;
    }
}

loc_805B7348:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24));
    r3 = (r1 + 116);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    ctx->lr = 0x805B7380u;
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
    f3.d = MemoryInline::FlatReadFloat32((r27 + 60));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r27 + 68));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_805B73B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7868;
    }
}

loc_805B73BC:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = (r1 + 224);
    r4 = (r31 + 240);
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
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    f1.d = PpcFmulsInline(f6.d, f7.d);
    f4.d = PpcFmulsInline(f2.d, f9.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f3.d = PpcFmulsInline(f6.d, f12.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f0.d = PpcFmulsInline(f5.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f8.d);
    f6.d = PpcFmulsInline(f6.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f4.d);
    f2.d = PpcFmulsInline(f5.d, f12.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f3.d);
    f3.d = PpcFmulsInline(f5.d, f7.d);
    f4.d = PpcFmulsInline(f11.d, f9.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f0.d);
    }
    // end of inlined leaf 0x8023030C
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 224), 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 224));
    r3 = (r1 + 224);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 240));
    r4 = (r31 + 52);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 256));
    r5 = (r1 + 128);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 176), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 176), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 228));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 180), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 244));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 184), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r1 + 260));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 192), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 232));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 196), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 248));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r1 + 264));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 208), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r1 + 212), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 216), f0.d);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    r3 = (r1 + 128);
    r4 = (r1 + 176);
    r5 = (r1 + 272);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    r4 = MemoryInline::FlatRead32((r27 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B743C:
{
    r3 = MemoryInline::FlatRead32((r27 + 76));
    r0 = MemoryInline::FlatRead32((r27 + 80));
    MemoryInline::FlatWriteRam32((r1 + 104), r4);
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7460;
    }
}

loc_805B7454:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
}

loc_805B7460:
{
    f5.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f7.d = (-(f31.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f26.d = PpcFmulsInline(f5.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f8.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f13.d = PpcFmulsInline(f1.d, f2.d);
    f25.d = PpcFmulsInline(f3.d, f2.d);
    f11.d = PpcFmulsInline(f5.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r1 + 304));
    f9.d = PpcFmulsInline(f3.d, f0.d);
    f10.d = MemoryInline::FlatReadFloat32((r1 + 308));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f25.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f11.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f11.d = MemoryInline::FlatReadFloat32((r1 + 292));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 276));
    f27.d = PpcFmulsInline(f10.d, f23.d);
    f26.d = PpcFmulsInline(f12.d, f22.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 288));
    f11.d = PpcFmulsInline(f11.d, f23.d);
    f25.d = MemoryInline::FlatReadFloat32((r1 + 312));
    f9.d = PpcFmulsInline(f9.d, f22.d);
    f12.d = PpcFmulsInline(f6.d, f22.d);
    f8.d = PpcFmulsInline(f8.d, f23.d);
    f13.d = MemoryInline::FlatReadFloat32((r1 + 296));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 280));
    f25.d = PpcFmulsInline(f25.d, f24.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f27.d));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f11.d));
    f13.d = PpcFmulsInline(f13.d, f24.d);
    f6.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f27.d));
    f11.d = PpcFmulsInline(f10.d, f24.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f22.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f12.d));
    f10.d = PpcFmulsInline(f22.d, f5.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f12.d);
    f9.d = PpcFmulsInline(f12.d, f1.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f29.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f11.d);
    f1.d = PpcFmulsInline(f11.d, f1.d);
    f8.d = PpcFmulsInline(f22.d, f3.d);
    f11.d = PpcFmulsInline(f11.d, f3.d);
    f5.d = PpcFmulsInline(f12.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f3.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f5.d));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f4.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f8.d);
    f29.d = PpcFmulsInline(f7.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f3.d = PpcFmulsInline(f0.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d / f30.d));
    r4 = MemoryInline::FlatRead32((r27 + 60));
    r3 = (r1 + 68);
    r0 = MemoryInline::FlatRead32((r27 + 64));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r27 + 68));
    f5.d = (-(f1.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f6.d = (-(f3.d));
    f3.d = (-(f1.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    f7.d = PpcFmulsInline(f2.d, f8.d);
    f6.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f6.d = PpcFmulsInline(f4.d, f3.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f1.d = PpcFmulsInline(f0.d, f8.d);
    f3.d = PpcFmulsInline(f7.d, f2.d);
    f5.d = PpcFmulsInline(f9.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    f2.d = PpcFmulsInline(f9.d, f0.d);
    f1.d = PpcFmulsInline(f7.d, f4.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f4.d = PpcFmulsInline(f6.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    ctx->lr = 0x805B75FCu;
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
    f3.d = MemoryInline::FlatReadFloat32((r27 + 60));
    f5.d = std::fabs(f29.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r27 + 68));
    f1.d = PpcFmulsInline(f28.d, f5.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = std::fabs(f6.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B7640:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B7660;
    }
}

loc_805B7644:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_805B764C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B765C;
    }
}

loc_805B7650:
{
    f0.d = (-(f28.d));
    f6.d = PpcFmulsInline(f0.d, f5.d);
    goto loc_805B7660;
}

loc_805B765C:
{
    f6.d = f1.d;
}

loc_805B7660:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805B7668:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f5.d = PpcFmulsInline(f29.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f4.d = PpcFmulsInline(f29.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B76FC;
    }
}

loc_805B76C8:
{
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r0 & 1);
}

loc_805B76D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B7704;
    }
}

loc_805B76D4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 336));
    f1.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_805B76E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B7704;
    }
}

loc_805B76E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805B76F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B7704;
    }
}

loc_805B76F4:
{
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    goto loc_805B7704;
}

loc_805B76FC:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_805B7704:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 44));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_805B7720:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::FlatWriteFloat32((r31 + 120), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 116), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B7758;
    }
}

loc_805B7740:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_805B7744:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B7758;
    }
}

loc_805B7748:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805B7750:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B7758;
    }
}

loc_805B7754:
{
    MemoryInline::FlatWriteFloat32((r31 + 120), f1.d);
}

loc_805B7758:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r3 = (r31 + 240);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r4 = (r1 + 32);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    r5 = (r1 + 20);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f8.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f6.d = PpcFmulsInline(f7.d, f3.d);
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 304));
    f2.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 308));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 288));
    f6.d = PpcFmulsInline(f0.d, f10.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 276));
    f7.d = PpcFmulsInline(f4.d, f11.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 312));
    f4.d = PpcFmulsInline(f3.d, f11.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 292));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 296));
    f1.d = PpcFmulsInline(f1.d, f11.d);
    f3.d = PpcFmulsInline(f2.d, f10.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 280));
    f0.d = PpcFmulsInline(f0.d, f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f11.d);
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f10.d);
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f9.d);
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    ctx->lr = 0x805B781Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[13] = f13;
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
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f5.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 168));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 164));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 164), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 168), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 172), f0.d);
}

loc_805B7868:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 332), 0, 188u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 164u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 148u, (r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 132u, (r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 116u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 100u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 84u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 68u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 52u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 36u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 352);
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 20u, (r1 + 352));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_4, 184u, (r1 + 516));
    ctx->lr = r0;
    r1 = (r1 + 512);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FF gpr_write=0xF800087B gpr_return=0x00000018 fpr_read=0xFFC0FFFF fpr_write=0xFFC0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B72B8 func_805B72B8 preserves=false fpr_mask=0xFFC00000
