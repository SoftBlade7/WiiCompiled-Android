#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80887F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80887F8C;

loc_80887F8C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -336), 0, 344u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 340u, (r1 + 340), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 320);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 296u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 300u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 304u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_2, 308u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 312u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_2, 316u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r4 = 0x809C0000u;
    r29 = 0x808E0000u;
    r4 = MemoryInline::FlatRead32((r4 + 18796));
    r30 = 0x808B0000u;
    r0 = MemoryInline::FlatRead8((r3 + 177));
    r28 = r3;
    r29 = (r29 + -12472);
    r30 = (r30 + 9952);
    r4 = (r4 + r0);
    r31 = 100;
    r0 = MemoryInline::FlatRead8((r4 + 7954));
}

loc_80887FD8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(100))) {
        goto loc_80887FE0;
    }
}

loc_80887FDC:
{
    r31 = r0;
}

loc_80887FE0:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80887FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088842C;
    }
}

loc_80887FE8:
{
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteRam32((r1 + 288), r4);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 56));
    r0 = (r0 | 8);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 288));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = MemoryInline::FlatRead32((r3 + 196));
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 200));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 128), r4);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = MemoryInline::FlatRead32((r3 + 204));
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r3 = MemoryInline::FlatRead32((r3 + 192));
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f1.d = MemoryInline::FlatReadFloat32((r3 + 388));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r3 = MemoryInline::FlatRead32((r28 + 192));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f1.d = f31.d;
    r4 = r3;
    r3 = (r1 + 116);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 116));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_80888068:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808880A8;
    }
}

loc_8088806C:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 120));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_80888074:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808880A8;
    }
}

loc_80888078:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 124));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80888080:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808880A8;
    }
}

loc_80888084:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f1.d);
}

loc_808880A8:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r1 + 104), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r3 = MemoryInline::FlatRead32((r28 + 192));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 & 536870912);
}

loc_808880D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808880F0;
    }
}

loc_808880DC:
{
    r0 = (r4 & 128);
}

loc_808880E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808880F8;
    }
}

loc_808880E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
}

loc_808880EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808880F8;
    }
}

loc_808880F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
}

loc_808880F8:
{
    r3 = (r31 & 255);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 292), r3);
    r3 = (r1 + 68);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 56));
    r4 = (r1 + 128);
    MemoryInline::FlatWriteRam32((r1 + 288), r0);
    r5 = (r1 + 92);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 288));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 56);
    r4 = (r1 + 68);
    r5 = (r1 + 104);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 240);
    r4 = (r1 + 56);
    // inline leaf 0x802302C4 (18 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    // end of inlined leaf 0x802302C4
    r3 = MemoryInline::FlatRead32((r28 + 192));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088817C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888228;
    }
}

loc_80888180:
{
    r4 = (r1 + 80);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    f4.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808881B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808881C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888228;
    }
}

loc_808881C4:
{
    r3 = (r1 + 80);
    ctx->lr = 0x808881CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32((r28 + 180));
    r3 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r28 + 184));
    r4 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r5 = (r1 + 32);
    r7 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    r6 = MemoryInline::FlatRead32((r1 + 84));
    r8 = MemoryInline::FlatRead32((r28 + 188));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 52), r8);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x80888210u;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r28 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r28 + 188), f0.d);
}

loc_80888228:
{
    r3 = MemoryInline::FlatRead32((r28 + 192));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r29 = 0x802A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 204), f0.d);
    r4 = (r29 + 16688);
    r5 = (r28 + 180);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 236), f0.d);
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
    r4 = (r29 + 16688);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = (r1 + 144);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 208), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 224), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 180));
    MemoryInline::FlatWriteRamFloat32((r1 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 184));
    MemoryInline::FlatWriteRamFloat32((r1 + 216), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 188));
    MemoryInline::FlatWriteRamFloat32((r1 + 232), f0.d);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r4 = (r1 + 144);
    r3 = (r1 + 240);
    r5 = r4;
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
    f31 = ctx->fpr[31];
    r4 = (r1 + 144);
    r3 = (r1 + 192);
    r5 = r4;
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
    f31 = ctx->fpr[31];
    r3 = MemoryInline::FlatRead16((r28 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r0));
    r26 = 0;
    r0 = (r3 | 4);
    r27 = 0;
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    r29 = 0x809C0000u;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 144), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 144));
    MemoryInline::FlatWriteFloat32((r28 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 148));
    MemoryInline::FlatWriteFloat32((r28 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 152));
    MemoryInline::FlatWriteFloat32((r28 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 156));
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 160));
    MemoryInline::FlatWriteFloat32((r28 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 164));
    MemoryInline::FlatWriteFloat32((r28 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 168));
    MemoryInline::FlatWriteFloat32((r28 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 172));
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 176));
    MemoryInline::FlatWriteFloat32((r28 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 180));
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 184));
    MemoryInline::FlatWriteFloat32((r28 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 188));
    MemoryInline::FlatWriteFloat32((r28 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 156));
    MemoryInline::FlatWriteFloat32((r28 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 172));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 188));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
    goto loc_808883C8;
}

loc_8088836C:
{
    r4 = MemoryInline::FlatRead32((r29 + 6584));
    r5 = MemoryInline::FlatRead8((r28 + 177));
    r3 = MemoryInline::FlatRead32((r4 + 24));
    r3_addr_2 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 156));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80888388:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_808883B4;
    }
}

loc_8088838C:
{
    r0 = MemoryInline::FlatRead8((r28 + 178));
}

loc_80888394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808883B4;
    }
}

loc_80888398:
{
    r0 = MemoryInline::FlatRead8((r4 + 37));
}

loc_808883A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808883B4;
    }
}

loc_808883A4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    // inline leaf 0x8055CCF8 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCF8
    goto loc_808883C0;
}

loc_808883B4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    // inline leaf 0x8055CCE0 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCE0
}

loc_808883C0:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_808883C8:
{
    r0 = MemoryInline::FlatRead8((r28 + 176));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_808883D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088836C;
    }
}

loc_808883D8:
{
    r3 = (r31 & 255);
    r0 = 1127219200;
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 288), r0);
    r3 = (r3 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 64));
    MemoryInline::FlatWriteRam32((r1 + 292), r3);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r28 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 288));
    r3 = MemoryInline::FlatRead32((r5 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32(r30);
    ctx->lr = 0x80888410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80888428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80888444;
}

loc_8088842C:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80888444u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80888444:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 320);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 296), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r1 + 320));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80887F8C func_80887F8C preserves=false fpr_mask=0x80000000
