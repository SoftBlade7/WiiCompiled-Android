#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CE828(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t cr = ctx->cr;

    goto loc_806CE828;

loc_806CE828:
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
    r5 = 0x808A0000u;
    r30 = r3;
    r31 = r4;
    r5 = (r5 + -676);
    ctx->lr = 0x806CE850u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8081EFECu>(ctx);
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
    cr = ctx->cr;
    r6 = 0x808C0000u;
    r7 = 0;
    r6 = (r6 + 19048);
    r3 = -1;
    r5 = (r6 + 236);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 184), r3);
    r4 = 0x808A0000u;
    r0 = 1127219200;
    MemoryInline::WriteResolved16(guest_range_0, 180u, (r30 + 180), static_cast<uint16_t>(r7));
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -736));
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 188), r7);
    MemoryInline::WriteResolved16(guest_range_0, 192u, (r30 + 192), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r30 + 200), r7);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 204), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r6);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 176), r5);
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 208), r0);
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r4 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 212u, (r30 + 212), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514194u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r29 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32(r31);
    r28 = MemoryInline::FlatRead16(r3);
    r3 = MemoryInline::FlatRead32((r29 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x806F10FC
    r4 = MemoryInline::FlatRead32(r31);
    r27 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r29 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x806F10FC
    r0 = (r28 + -1);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r27 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CE910:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE934;
    }
}

loc_806CE918:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r29 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x806F10FC
    r3 = MemoryInline::FlatRead32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_806CE968;
}

loc_806CE934:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514194u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r31);
    r28 = MemoryInline::FlatRead16(r3);
    r3 = MemoryInline::FlatRead32((r29 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x806F10FC
    r0 = (r28 + -1);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
}

loc_806CE968:
{
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514194u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r28 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32(r31);
    r29 = MemoryInline::FlatRead16(r3);
    r3 = MemoryInline::FlatRead32((r28 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x806F10FC
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 524272);
    r4 = (r3 + r0);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r30 + 224), r0);
    MemoryInline::FlatWrite32((r30 + 220), r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r30 + 228), r0);
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r28 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    // end of inlined leaf 0x806F10FC
    r4 = 1;
    // inline leaf 0x806ED150 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 1048560);
    r3 = (r3 + r0);
    // end of inlined leaf 0x806ED150
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r30 + 328), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514194u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r31);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // end of inlined leaf 0x806F10FC
    r4 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -2);
    r4 = (r0 & 65535);
    // inline leaf 0x806ED150 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & 1048560);
    r3 = (r3 + r0);
    // end of inlined leaf 0x806ED150
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 332), f0.d);
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r28 + 8880));
    r4 = MemoryInline::FlatRead16((r4 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x806F10FC
    f2.d = MemoryInline::FlatReadFloat32((r30 + 212));
    r29 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 216));
    r31 = (r29 + 18952);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = 2;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWrite16((r30 + 336), static_cast<uint16_t>(r3));
    r3 = 4;
    MemoryInline::FlatWriteFloat32((r30 + 252), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWrite32((r30 + 204), r30);
    MemoryInline::FlatWrite32((r30 + 200), r31);
    MemoryInline::FlatWrite16((r30 + 192), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 248), f0.d);
    ctx->lr = 0x806CEA64u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r30 + 196), r3);
    r4 = 65536;
    r0 = (r4 + -1);
    r6 = 0;
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r5 = 1;
    r11 = (r1 + 48);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 196));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 18952));
    r4 = MemoryInline::FlatRead32((r30 + 196));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_0, static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r4 = MemoryInline::FlatRead32((r30 + 196));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r5));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF8 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CE828 func_806CE828 preserves=true fpr_mask=0x00000000
