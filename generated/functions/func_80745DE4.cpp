#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80745DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80745DE4;

loc_80745DE4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 10), static_cast<uint16_t>(r0));
    r26 = r3;
    r30 = 0x808A0000u;
    r31 = 0x808D0000u;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r27 = r4;
    r28 = r5;
    r30 = (r30 + 11192);
    r31 = (r31 + -18696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C224u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 12));
    r3 = 0x809C0000u;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11324));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 32u, (r1 + 40), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r3 = MemoryInline::FlatRead32((r28 + 16));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r4);
    }
    r0 = MemoryInline::FlatRead32((r28 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r26 + 4));
    // inline leaf 0x8071C2A0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // end of inlined leaf 0x8071C2A0
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80745E84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80745E90;
    }
}

loc_80745E88:
{
    f1.d = f0.d;
    goto loc_80745EA0;
}

loc_80745E90:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80745E98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80745EA0;
    }
}

loc_80745E9C:
{
    f1.d = f0.d;
}

loc_80745EA0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 12));
    r4 = 0;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 24));
    r5 = 2;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 28));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = (-(f2.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 4));
    // inline leaf 0x8071C164 (9 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 12), r5);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    // end of inlined leaf 0x8071C164
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C188u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 100));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r31 + 102));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    // inline leaf 0x8071C1F0 (13 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 36), r6);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 36), r6);
    // end of inlined leaf 0x8071C1F0
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 100));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r31 + 102));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    // inline leaf 0x8071C1F0 (13 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 36), r6);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 36), r6);
    // end of inlined leaf 0x8071C1F0
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = (r1 + 12);
    r5 = (r1 + 24);
    ctx->lr = 0x80745F48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C0A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    r5 = (r1 + 12);
    r4 = 1;
    ctx->lr = 0x80745F58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807467BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r28);
    r29 = r3;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80745F78;
    }
}

loc_80745F6C:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
}

loc_80745F78:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead16((r26 + 128));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80745F94;
    }
}

loc_80745F88:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
}

loc_80745F94:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80745FB0;
    }
}

loc_80745FA4:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
}

loc_80745FB0:
{
    r0 = MemoryInline::FlatRead8((r26 + 130));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80745FB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80745FD4;
    }
}

loc_80745FBC:
{
    r3 = r26;
    r5 = r28;
    r4 = (r1 + 10);
    r6 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807462B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_80745FE8;
}

loc_80745FD4:
{
    r3 = r26;
    r5 = r28;
    r4 = (r1 + 10);
    r6 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074612Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80745FE8:
{
    r4 = MemoryInline::FlatRead16((r26 + 128));
    r5 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r5 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8074601C;
    }
}

loc_80745FFC:
{
    r0 = (r5 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8074601C;
    }
}

loc_80746004:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80746024;
    }
}

loc_80746010:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 16), static_cast<uint8_t>(r0));
    goto loc_80746024;
}

loc_8074601C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 16), static_cast<uint8_t>(r0));
}

loc_80746024:
{
    r0 = MemoryInline::FlatRead8((r26 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074602C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074603C;
    }
}

loc_80746030:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
}

loc_8074603C:
{
    r3 = r26;
    r5 = r28;
    r4 = (r26 + 24);
    ctx->lr = 0x8074604Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80746C64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r26 + 84));
    f2.d = MemoryInline::FlatReadFloat32((r3 + -844));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    f1.d = PPC_Fctiwz(f1.d);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f1.d);
    r5 = fctiwzword2;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80746088:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746098;
    }
}

loc_8074608C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 52));
    goto loc_807460BC;
}

loc_80746098:
{
    f0.d = (-(f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_807460B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807460BC;
    }
}

loc_807460B4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r5 = MemoryInline::FlatRead32((r1 + 44));
}

loc_807460BC:
{
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r1 + 10));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -844));
    r3 = r27;
    MemoryInline::FlatWrite16((r27 + 4), static_cast<uint16_t>(r0));
    f0.d = PPC_Fctiwz(f0.d);
    r0 = MemoryInline::FlatRead32(r28);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = fctiwzword4;
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r0));
    r0 = (r5 + r4);
    r4 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051E960u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8051EA60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = r27;
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051EB68u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r27 + 20));
    r11 = (r1 + 80);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r27 + 20), static_cast<uint8_t>(r0));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80745DE4 func_80745DE4 preserves=true fpr_mask=0x00000000
