#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A5D70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A5D70;

loc_805A5D70:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 272);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r8 = 0x802A0000u;
    r8 = (r8 + 16640);
    r10 = MemoryInline::FlatRead32(r8);
    r31 = 0x80890000u;
    r0 = 0;
    r9 = MemoryInline::FlatRead32((r8 + 4));
    r31 = (r31 + 8728);
    r8 = MemoryInline::FlatRead32((r8 + 8));
}

loc_805A5DAC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r23 = r3;
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    r24 = r4;
    r25 = r5;
    r26 = r6;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 224u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 108), r10);
    r27 = r7;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 112), r9);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 116), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r1 + 140), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r1 + 144), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r1 + 148), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r1 + 152), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r1 + 156), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r1 + 160), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_2, 220u, (r1 + 228), r0);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805A5E00;
    }
}

loc_805A5DF8:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 480));
    goto loc_805A5E04;
}

loc_805A5E00:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 456));
}

loc_805A5E04:
{
    r3 = MemoryInline::FlatRead16((r4 + 100));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r6 = 0x802A0000u;
    r6 = (r6 + 16640);
    r8 = MemoryInline::FlatRead32(r6);
    r30 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 84), r8);
    r7 = MemoryInline::FlatRead32((r6 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 88), r7);
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    MemoryInline::FlatWrite16((r4 + 100), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A5E48;
    }
}

loc_805A5E40:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 100), static_cast<uint16_t>(r0));
}

loc_805A5E48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 108), r0);
    r3 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A5E60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A6344;
    }
}

loc_805A5E64:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A5E6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A6344;
    }
}

loc_805A5E70:
{
    r3 = 0x809C0000u;
    f1.d = f31.d;
    r6 = 1660485632;
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = r24;
    r5 = (r24 + 56);
    r6 = (r6 + -16897);
    r7 = (r1 + 140);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x805A5E9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F784u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A5EA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6344;
    }
}

loc_805A5EA4:
{
    f5.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f2.d = MemoryInline::FlatReadFloat32(r24);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r24 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f4.d);
    r0 = (r3 & 65536);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0_mrot_0 = (r3 & 1024);
    r0_mdest_0 = (r0 & -1025);
    r0 = (r0_mdest_0 | r0_mrot_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A5EEC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A635C;
    }
}

loc_805A5EF4:
{
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
}

loc_805A5F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A6120;
    }
}

loc_805A5F08:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A60C4;
    }
}

loc_805A5F18:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f6.d = MemoryInline::FlatReadFloat32((r24 + 188));
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r24 + 192));
    f1.d = PpcFmulsInline(f6.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 484));
    f4.d = PpcFmulsInline(f7.d, f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A5F40:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A5F4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A60AC;
    }
}

loc_805A5F50:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 188));
    r3 = r25;
    f4.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f1.d = PpcFmulsInline(f4.d, f3.d);
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f1.d = PpcFmulsInline(f4.d, f7.d);
    f0.d = PpcFmulsInline(f0.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f7.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r3 = r25;
    f4.d = PpcFmulsInline(f1.d, f5.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f3.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_805A6018:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A60AC;
    }
}

loc_805A601C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 188));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_805A6054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A6060;
    }
}

loc_805A6058:
{
    f1.d = f5.d;
    goto loc_805A606C;
}

loc_805A6060:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A6064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A606C;
    }
}

loc_805A6068:
{
    f1.d = f0.d;
}

loc_805A606C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 420));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A6074:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A6080;
    }
}

loc_805A6078:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r24 + 200), static_cast<uint8_t>(r0));
}

loc_805A6080:
{
    r0 = MemoryInline::FlatRead8((r24 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A6088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A60AC;
    }
}

loc_805A608C:
{
    f2.d = MemoryInline::FlatReadFloat32((r24 + 196));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 288));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 280));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r24 + 196), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A60A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A60AC;
    }
}

loc_805A60A8:
{
    MemoryInline::FlatWriteFloat32((r24 + 196), f0.d);
}

loc_805A60AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    MemoryInline::FlatWriteFloat32((r24 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    MemoryInline::FlatWriteFloat32((r24 + 188), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    MemoryInline::FlatWriteFloat32((r24 + 192), f0.d);
}

loc_805A60C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 60));
    f5.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 56));
    f6.d = MemoryInline::FlatReadFloat32(r24);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 64));
    f4.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f7.d = MemoryInline::FlatReadFloat32((r24 + 196));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f0.d = PpcFmulsInline(f2.d, f7.d);
    f3.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    MemoryInline::FlatWriteFloat32(r24, f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
    goto loc_805A635C;
}

loc_805A6120:
{
    r3 = 0x809C0000u;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_805A6134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(34))) {
        goto loc_805A6150;
    }
}

loc_805A6138:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_805A6148:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(345))) {
        goto loc_805A6150;
    }
}

loc_805A614C:
{
    r5 = 1;
}

loc_805A6150:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6328;
    }
}

loc_805A6160:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805A6164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A6328;
    }
}

loc_805A6168:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 188));
    r6 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 192));
    r3 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f2.d);
    r5 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f1.d);
    r4 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWrite8((r24 + 40), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    ctx->lr = 0x805A61A8u;
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
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A61B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A6328;
    }
}

loc_805A61B4:
{
    r4 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 488));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A61F0:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_805A61F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A6200;
    }
}

loc_805A61FC:
{
    r28 = 1;
}

loc_805A6200:
{
}

loc_805A6204:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A620C;
    }
}

loc_805A6208:
{
    r30 = 1;
}

loc_805A620C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 400));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A6240:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A6328;
    }
}

loc_805A6244:
{
    r3 = r25;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32((r31 + 492));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A6254:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805A626C;
    }
}

loc_805A6258:
{
    r3 = MemoryInline::FlatRead32(r25);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A6268:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6278;
    }
}

loc_805A626C:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r24 + 100), static_cast<uint16_t>(r0));
    goto loc_805A6328;
}

loc_805A6278:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A6280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6328;
    }
}

loc_805A6284:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 136));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A6298:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A6328;
    }
}

loc_805A629C:
{
    r5 = MemoryInline::FlatRead32((r24 + 56));
    f2.d = (-(f31.d));
    r0 = MemoryInline::FlatRead32((r24 + 60));
    r3 = (r1 + 120);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r4 = (r1 + 36);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f5.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r5 = (r1 + 96);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    r0 = MemoryInline::FlatRead32((r24 + 64));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    ctx->lr = 0x805A6304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AEF6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r25;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r1 + 120);
    // inline leaf 0x805AF0F0 (22 guest instruction(s))
}

loc_inl5_0x805AF0F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r5 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9532));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl5_0x805AF134:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x805AF140;
    }
}

loc_inl5_0x805AF13C:
{
    r0 = 1;
}

loc_inl5_0x805AF140:
{
    r3 = r0;
}

loc_inl5_cont_805AF0F0:
{
    // end of inlined leaf 0x805AF0F0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A631C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6328;
    }
}

loc_805A6320:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r24 + 108), r0);
}

loc_805A6328:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A635C;
    }
}

loc_805A633C:
{
    r29 = 1;
    goto loc_805A635C;
}

loc_805A6344:
{
    f2.d = MemoryInline::FlatReadFloat32(r24);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    MemoryInline::FlatWriteFloat32((r24 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 64), f0.d);
}

loc_805A635C:
{
    r3 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
}

loc_805A636C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A63A0;
    }
}

loc_805A6370:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 240));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    r3 = (r3 + 16640);
    MemoryInline::FlatWriteFloat32((r24 + 184), f1.d);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r24 + 188), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r24 + 192), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 196), f0.d);
    MemoryInline::FlatWrite8((r24 + 200), static_cast<uint8_t>(r0));
}

loc_805A63A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_805A63B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(31))) {
        goto loc_805A63CC;
    }
}

loc_805A63B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 316));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A63C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A63CC;
    }
}

loc_805A63C4:
{
    MemoryInline::FlatWriteFloat32((r24 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 4), f0.d);
}

loc_805A63CC:
{
}

loc_805A63D0:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_805A63E0;
    }
}

loc_805A63D8:
{
}

loc_805A63DC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805A63EC;
    }
}

loc_805A63E0:
{
}

loc_805A63E4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805A63EC;
    }
}

loc_805A63E8:
{
    r3 = 1;
}

loc_805A63EC:
{
}

loc_805A63F0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_805A6430;
    }
}

loc_805A63F4:
{
}

loc_805A63F8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_805A6430;
    }
}

loc_805A63FC:
{
    r0 = MemoryInline::FlatRead16((r24 + 152));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A6404:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_805A6460;
    }
}

loc_805A6408:
{
}

loc_805A640C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805A6430;
    }
}

loc_805A6410:
{
    r0 = MemoryInline::FlatRead8((r24 + 168));
}

loc_805A6418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A6460;
    }
}

loc_805A641C:
{
}

loc_805A6420:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805A6460;
    }
}

loc_805A6424:
{
    r0 = MemoryInline::FlatRead16((r24 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A642C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A6460;
    }
}

loc_805A6430:
{
    f1.d = MemoryInline::FlatReadFloat32(r24);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f3.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32(r24, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r24 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
}

loc_805A6460:
{
    r0 = MemoryInline::FlatRead16((r24 + 152));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805A6468:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A648C;
    }
}

loc_805A646C:
{
    r3 = r25;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r24 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r24 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r24 + 64), f0.d);
}

loc_805A648C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805A6490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6594;
    }
}

loc_805A6494:
{
    r0 = MemoryInline::FlatRead16((r24 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A649C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805A6594;
    }
}

loc_805A64A0:
{
    f4.d = MemoryInline::FlatReadFloat32((r23 + 312));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r23 + 320));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f8.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::FlatReadFloat32((r23 + 316));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f6.d = PpcFmulsInline(f7.d, f3.d);
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 300));
    f3.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r23 + 304));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r23 + 308));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f6.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    f31.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A6514:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A651C;
    }
}

loc_805A6518:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 332));
}

loc_805A651C:
{
    r3 = r25;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f3.d = MemoryInline::FlatReadFloat32((r1 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805A652C:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = std::fabs(f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6564;
    }
}

loc_805A655C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 332));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_805A6564:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 496));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 400));
    f3.d = PpcFmulsInline(f1.d, f31.d);
    f2.d = MemoryInline::FlatReadFloat32((r24 + 92));
    f1.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 368));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 92), f0.d);
    goto loc_805A65A4;
}

loc_805A6594:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 92), f0.d);
}

loc_805A65A4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 272);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 292));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A5D70 func_805A5D70 preserves=false fpr_mask=0x80000000
