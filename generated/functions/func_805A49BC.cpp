#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8059020C_statefree(uint32_t);
extern "C" uint64_t func_805A1C3C_statefree(uint32_t);

extern "C" void func_805A49BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
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

    goto loc_805A49BC;

loc_805A49BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r29 = 0x80890000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8728));
    r27 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 268), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 260), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    r3 = (r3 + 412);
    // inline leaf 0x805A1C3C (46 guest instruction(s))
    r4 = 0x80890000u;
    r5 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    r7 = (r5 + 16688);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 76), 0, 126u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 76), f2.d);
    r0 = 0;
    r6 = 0x802A0000u;
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    r5 = (r6 + 16640);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8968));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 84), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 92), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 96), f2.d);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 100), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 108), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 116), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 112), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 120), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 124), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 128), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 132), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 74u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 76u, (r3 + 152), r0);
        MemoryInline::WriteResolved16(guest_range_0, 74u, (r3 + 150), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 72u, (r3 + 148), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 136), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 140), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 144), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 164), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 160), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 156), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r3 + 168), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 192), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 188), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 184), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 196), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 124u, (r3 + 200), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 125u, (r3 + 201), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805A1C3C
    r3 = (r27 + 616);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805A1C3Cu) && KnownTranslatedCpuCall<0x805A1C3Cu>::kAvailable && !KnownTranslatedCpuCall<0x805A1C3Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805A1C3Cu>()) {
        const auto state_free_result_805A1C3C_1B81 = func_805A1C3C_statefree(r3);
        r7 = static_cast<uint32_t>(state_free_result_805A1C3C_1B81);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x805A1C3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
    }
    r5 = MemoryInline::FlatRead32((r27 + 392));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r27 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r27 + 692), f0.d);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWriteFloat32((r27 + 488), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    r28 = r3;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 128));
    r30 = 0x80890000u;
    f8.d = MemoryInline::FlatReadFloat32((r27 + 300));
    r31 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 132));
    r4 = (r31 + 16688);
    f6.d = MemoryInline::FlatReadFloat32((r27 + 304));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    r3 = (r27 + 312);
    f4.d = MemoryInline::FlatReadFloat32((r27 + 308));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8976));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r5 = (r27 + 300);
    f1.d = PpcFmulsInline(f7.d, f2.d);
    r6 = 1;
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r27 + 300), f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 304), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 308), f0.d);
    ctx->lr = 0x805A4AA0u;
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
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8976));
    r6 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8728));
    r3 = r27;
    f3.d = f1.d;
    r5 = r28;
    r4 = (r27 + 412);
    ctx->lr = 0x805A4AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x805A2CFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r27 + 220), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r27 + 224), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = r28;
    MemoryInline::FlatWriteFloat32((r27 + 228), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 108), f0.d);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8059020Cu) && KnownTranslatedCpuCall<0x8059020Cu>::kAvailable && !KnownTranslatedCpuCall<0x8059020Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8059020Cu>()) {
        const auto state_free_result_8059020C_3718 = func_8059020C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8059020C_3718);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8059020Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
    }
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8976));
    r7 = r3;
    r3 = r27;
    r6 = r28;
    f2.d = f1.d;
    r4 = (r27 + 412);
    f3.d = f1.d;
    r5 = 0;
    ctx->lr = 0x805A4B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x805A34B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16688));
    r4 = (r31 + 16688);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 336), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r27 + 336), f0.d);
    r3 = (r27 + 376);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8728));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r27 + 340), f0.d);
    f3.d = f2.d;
    f4.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8976));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r27 + 344), f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 16688));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r27 + 360), f6.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r27 + 364), f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r27 + 368), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r27 + 348), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r27 + 352), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r27 + 356), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80239DFCu>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8976));
    r3 = r27;
    MemoryInline::FlatWriteFloat32((r27 + 372), f1.d);
    r4 = r28;
    r5 = 0;
    ctx->lr = 0x805A4B90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x805A40D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8728));
    r11 = (r1 + 48);
    f6.d = MemoryInline::FlatReadFloat32((r27 + 412));
    f5.d = MemoryInline::FlatReadFloat32((r27 + 416));
    f4.d = MemoryInline::FlatReadFloat32((r27 + 420));
    f3.d = MemoryInline::FlatReadFloat32((r27 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 176));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 180));
    guest_range_2 = MemoryInline::ResolveRangeHost((r27 + 100), 0, 200u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r27 + 100), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r27 + 104), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r27 + 108), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r27 + 112), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r27 + 116), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r27 + 120), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 192u, (r27 + 292), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 196u, (r27 + 296), f0.d);
    }
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF70E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFE00 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A49BC func_805A49BC preserves=true fpr_mask=0x00000000
