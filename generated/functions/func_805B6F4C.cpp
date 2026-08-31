#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B6F4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B6F4C;

loc_805B6F4C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 212u, (r1 + 212), r0);
    r11 = (r1 + 208);
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
    r29 = MemoryInline::FlatRead32((r7 + 140));
    r24 = r3;
    r31 = 0x80890000u;
    r30 = (r7 + 8);
    r3 = MemoryInline::FlatRead32(r29);
    r25 = r4;
    r26 = r5;
    r27 = r6;
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    r28 = r8;
    r22 = r9;
    r3 = r30;
    r31 = (r31 + 10120);
    // inline leaf 0x805B821C (40 guest instruction(s))
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 10152));
    r5 = 0;
    r0 = -1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10156));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 132u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 56), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 52), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 68), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 64), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 80), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 76), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 96), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 92), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 88), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 100), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 104), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 108), r5);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 112), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 116), r5);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 120), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 124), r5);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r3 + 128), f1.d);
    }
    // end of inlined leaf 0x805B821C
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r23 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r22);
    r4 = (r1 + 24);
    MemoryInline::FlatWriteFloat32((r29 + 12), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r1 + 76), f0.d);
    r3 = MemoryInline::FlatRead32((r23 + 12100));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r1 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r1 + 84), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r1 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r1 + 92), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r1 + 96), f0.d);
    MemoryInline::WriteResolved32(guest_range_3, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 8), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r1 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r1 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r1 + 44), f0.d);
    }
    // inline leaf 0x8078E4E8 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8078E4E8
    r6 = -352780288;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r23 + 12100));
    r4 = (r29 + 12);
    r5 = (r29 + 24);
    r6 = (r6 + -16897);
    r7 = (r1 + 76);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x805B702Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807907F8u>(ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B7030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7208;
    }
}

loc_805B7034:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 100));
    MemoryInline::FlatWriteFloat32((r30 + 4), f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::FlatWriteFloat32((r30 + 8), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteFloat32((r30 + 12), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B7058:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1);
}

loc_805B7060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B70AC;
    }
}

loc_805B7064:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r0 = MemoryInline::FlatRead32(r30);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    r0 = (r0 | 512);
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_805B70AC:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B70E4;
    }
}

loc_805B70C0:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r30, r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
}

loc_805B70E4:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = MemoryInline::FlatRead32((r29 + 16));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r0 = MemoryInline::FlatRead32((r29 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 112));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 64), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32((r30 + 52), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 60), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B7154:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B7164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B718C;
    }
}

loc_805B7168:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r30, r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
}

loc_805B718C:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r4 = r30;
    r5 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r6 = (r1 + 76);
    r7 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x805B71B0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = -352780288;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 + -16897);
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B71D0;
    }
}

loc_805B71C4:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_805B71D4;
}

loc_805B71D0:
{
    r3 = 0;
}

loc_805B71D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B71D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B7230;
    }
}

loc_805B71DC:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 15324));
    r4 = r25;
    r3 = MemoryInline::FlatRead32((r3 + 8656));
    r5 = r26;
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r6 = MemoryInline::FlatRead32(r6);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 7);
    ctx->lr = 0x805B7204u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8067DA5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805B7230;
}

loc_805B7208:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    r4 = r25;
    r5 = r26;
    r6 = 0;
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    r7 = -1;
    r3 = MemoryInline::FlatRead32((r3 + 8656));
    ctx->lr = 0x805B7230u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8067DA5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B7230:
{
    r0 = MemoryInline::FlatRead32(r30);
    r11 = (r1 + 208);
    r3 = (r0 & 67);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B723C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
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
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B6F4C func_805B6F4C preserves=true fpr_mask=0x00000000
