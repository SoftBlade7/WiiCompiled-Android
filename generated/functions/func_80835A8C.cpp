#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80835A8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80835C5C_loc_0 = 0;
    uint32_t addr_lfsx_80835C64_loc_0 = 0;
    uint32_t addr_lfsx_80835C70_loc_0 = 0;
    uint32_t addr_lfsx_80835C98_loc_0 = 0;
    uint32_t addr_lfsx_80835CE0_loc_0 = 0;
    uint32_t addr_lfsx_80835CE8_loc_0 = 0;
    uint32_t addr_lfsx_80835CF0_loc_0 = 0;
    uint32_t addr_lfsx_80835D18_loc_0 = 0;
    uint32_t addr_lfsx_80835D4C_loc_0 = 0;
    uint32_t addr_lfsx_80835D54_loc_0 = 0;
    uint32_t addr_lfsx_80835D94_loc_0 = 0;
    uint32_t addr_lfsx_80835D9C_loc_0 = 0;
    uint32_t addr_stfsx_80835B3C_loc_0 = 0;
    uint32_t addr_stfsx_80835B40_loc_0 = 0;
    uint32_t addr_stfsx_80835BA0_loc_0 = 0;
    uint32_t addr_stfsx_80835BA4_loc_0 = 0;
    uint32_t addr_stfsx_80835C2C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r20_rot_5 = 0;
    uint32_t r20_rot_6 = 0;
    uint32_t r20_rot_7 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r22_rot_6 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80835A8C;

loc_80835A8C:
{
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 64);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r9 = 0x809C0000u;
    r0 = 2;
    r9 = (r9 + 17656);
    r7 = r4;
    r5 = r9;
    r10 = 0;
    r11 = 1;
    r8 = 0;
    ctr = r0;
}

loc_80835AEC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 400u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r0 = (r0 & r11);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80835B44;
    }
}

loc_80835AF8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r7 + 16));
    r6 = (r0 * 12);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & -16);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    f5.d = MemoryInline::FlatReadFloat32((r7 + 24));
    r3 = (r8 + r3);
    r6 = (r4 + r6);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 24));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    addr_stfsx_80835B3C_loc_0 = (r5 + r3);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80835B3C_loc_0, f0.d);
    addr_stfsx_80835B40_loc_0 = (r9 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80835B40_loc_0, f0.d);
}

loc_80835B44:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & -2);
    r8 = (r8 + 4);
    r9 = (r9 + 16);
    r0 = (r0 & r11);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80835BA8;
    }
}

loc_80835B5C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r7 + 28));
    r6 = (r0 * 12);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_4 & -16);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    f5.d = MemoryInline::FlatReadFloat32((r7 + 36));
    r3 = (r8 + r3);
    r6 = (r4 + r6);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 24));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    addr_stfsx_80835BA0_loc_0 = (r5 + r3);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80835BA0_loc_0, f0.d);
    addr_stfsx_80835BA4_loc_0 = (r9 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80835BA4_loc_0, f0.d);
}

loc_80835BA8:
{
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & -2);
    r7 = (r7 + 24);
    r8 = (r8 + 4);
    r9 = (r9 + 16);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80835AEC;
    }
}

loc_80835BC0:
{
    r8 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r5 = 0x809C0000u;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r5 = (r5 + 17656);
    r7 = (r8 * 12);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r3 = (r3_rot_6 & -16);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & -4);
    r7 = (r4 + r7);
    r6 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r7 + 16));
    r0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 20));
    r8 = (r5 + r3);
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r7 + 24));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + -13576));
    r3 = (r0 + r9);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 160), f0.d);
    r7 = r5;
    r29 = 0;
    r28 = 1;
    r6 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    addr_stfsx_80835C2C_loc_0 = (r9 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80835C2C_loc_0, f0.d);
}

loc_80835C30:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r0 = (r0 & r28);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80835DD0;
    }
}

loc_80835C3C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r12 = (r5 + r6);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r9 = r7;
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_8 & -16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r5 + r3);
    r27 = (r28 | r8);
    addr_lfsx_80835C5C_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835C5C_loc_0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -16);
    addr_lfsx_80835C64_loc_0 = (r3 + r6);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835C64_loc_0);
    r30 = (r4 + r0);
    r3 = (r30 + r6);
    addr_lfsx_80835C70_loc_0 = (r7 + r6);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835C70_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r10 = r12;
    r11 = r5;
    r0 = (r4 + r6);
    MemoryInline::FlatWriteFloat32((r3 + 160), f0.d);
    r26 = 1;
    r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r8 = 0;
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r20 = (r20_rot_2 & -4);
    addr_lfsx_80835C98_loc_0 = (r7 + r20);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835C98_loc_0);
    r20 = (r30 + r20);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r20 + 160), f0.d);
    ctr = r29;
}

loc_80835CB0:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80835DD0;
    }
}

loc_80835CB4:
{
    r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r20 = (r20 & r26);
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80835DB8;
    }
}

loc_80835CC0:
{
    r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r20 = (r26 | r27);
    r23_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(4));
    r23 = (r23_rot_3 & -16);
    r24 = (r26 | r28);
    r22_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(4));
    r22 = (r22_rot_3 & -16);
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r21 = (r21_rot_3 & -4);
    r20 = (r8 + r22);
    r31 = (r4 + r23);
    addr_lfsx_80835CE0_loc_0 = (r5 + r20);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835CE0_loc_0);
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
    r25 = (r25_rot_3 & -16);
    addr_lfsx_80835CE8_loc_0 = (r12 + r22);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835CE8_loc_0);
    r24 = (r8 + r4);
    addr_lfsx_80835CF0_loc_0 = (r7 + r6);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835CF0_loc_0);
    r21 = (r30 + r21);
    f5.d = MemoryInline::FlatReadFloat32(r9);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 160));
    r24 = (r25 + r24);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 160));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r20 = (r31 + r8);
    addr_lfsx_80835D18_loc_0 = (r11 + r8);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835D18_loc_0);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32(r10);
    r23 = (r0 + r23);
    r25 = (r0 + r25);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteFloat32((r20 + 160), f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
        }
    }
    r22_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(4));
    r22 = (r22_rot_4 & -16);
    r21_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r21 = (r21_rot_4 & -4);
    r20 = (r26 | r20);
    addr_lfsx_80835D4C_loc_0 = (r12 + r22);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835D4C_loc_0);
    r22 = (r8 + r22);
    addr_lfsx_80835D54_loc_0 = (r5 + r22);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835D54_loc_0);
    r20_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(4));
    r20 = (r20_rot_4 & -16);
    r22 = (r4 + r20);
    r20 = (r22 + r8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r22 = (r22 + r21);
    f2.d = MemoryInline::FlatReadFloat32((r20 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 160));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 160), f0.d);
    r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 160));
    r20_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r20 = (r20_rot_5 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 160));
    addr_lfsx_80835D94_loc_0 = (r11 + r20);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835D94_loc_0);
    r31 = (r31 + r20);
    addr_lfsx_80835D9C_loc_0 = (r7 + r20);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80835D9C_loc_0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 160), f0.d);
}

loc_80835DB8:
{
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_3 & -2);
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    r10 = (r10 + 16);
    r11 = (r11 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80835CB4;
    }
}

loc_80835DD0:
{
    r29 = (r29 + 1);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r28 = (r28_rot_2 & -2);
}

loc_80835DDC:
{
    r6 = (r6 + 4);
    r7 = (r7 + 16);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_80835C30;
    }
}

loc_80835DE8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_80835DF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835EF4;
    }
}

loc_80835DF4:
{
    r5 = 0x809C0000u;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 368u, (r4 + 368));
    r3 = (r5 + 17656);
    f6.d = MemoryInline::FlatReadFloat32((r5 + 17656));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r3 + 8));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r3 + 4));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r3 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 336u, (r4 + 336));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 272u, (r4 + 272));
    f6.d = PpcFmulsInline(f2.d, f3.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.second);
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r3 + 20));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r3 + 16));
        }
    }
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r3 + 28));
    f9.d = PpcFmulsInline(f4.d, f5.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r3 + 24));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f8.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f3.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 340u, (r4 + 340));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 276u, (r4 + 276));
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 388u, (r4 + 388));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r3 + 36));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r3 + 32));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r3 + 44));
    f31.d = PpcFmulsInline(f12.d, f31.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f13.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 392u, (r4 + 392));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f7.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 376u, (r4 + 376));
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r3 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f3.d));
    f8.d = PpcFmulsInline(f5.d, f7.d);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r3 + 48));
    f12.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r3 + 56));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f28.d));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 396u, (r4 + 396));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f1.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 348u, (r4 + 348));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 280u, (r4 + 280));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f27.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 380u, (r4 + 380));
    f13.d = PpcFmulsInline(f30.d, f29.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f12.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    f10.d = PpcFmulsInline(f10.d, f11.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f12.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f5.d = PpcFmulsInline(f5.d, f7.d);
    MemoryInline::FlatWriteFloat32((r4 + 400), f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 404), f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 408), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 412), f0.d);
}

loc_80835EF4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f27.d = leaf_stack_saved_f27_entry;
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->fpr[13] = f13;
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

// RECOMP_GUEST_ABI gpr_read=0xFFF01FFB gpr_write=0xFFF01FEB gpr_return=0x00000008 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80835A8C func_80835A8C preserves=true fpr_mask=0x00000000
