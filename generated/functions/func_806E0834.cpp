#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E0834(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806E0834;

loc_806E0834:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
}

loc_806E084C:
{
    r28 = 0x808A0000u;
    r31 = 0x808C0000u;
    r29 = r3;
    r27 = r4;
    r30 = r5;
    r28 = (r28 + 1648);
    r31 = (r31 + 26600);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806E0888;
    }
}

loc_806E086C:
{
}

loc_806E0870:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806E0944;
    }
}

loc_806E0874:
{
}

loc_806E0878:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806E09E0;
    }
}

loc_806E087C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806E0880:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0A7C;
    }
}

loc_806E0884:
{
    goto loc_806E0B14;
}

loc_806E0888:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806E0890:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E08AC;
    }
}

loc_806E0894:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 320), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 324), f0.d);
    r3 = r30;
    goto loc_806E0B18;
}

loc_806E08AC:
{
    r0 = MemoryInline::FlatRead32((r3 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E08B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0B14;
    }
}

loc_806E08B8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E08C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 292), 0, 69u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 292), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_806E08D8:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 336), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f6.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 264));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 260));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r29 + 356), f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 52));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r29 + 348), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r29 + 352), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 332), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r29 + 344), f5.d);
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r29 + 360), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r29 + 340), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0B14;
    }
}

loc_806E0928:
{
    r0 = MemoryInline::FlatRead32((r27 + 124));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E0930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0B14;
    }
}

loc_806E0934:
{
    r3 = r29;
    r4 = 630;
    ctx->lr = 0x806E0940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082053Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806E0B14;
}

loc_806E0944:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806E094C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0968;
    }
}

loc_806E0950:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 320), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 324), f0.d);
    r3 = r30;
    goto loc_806E0B18;
}

loc_806E0968:
{
    r0 = MemoryInline::FlatRead32((r3 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E0970:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0B14;
    }
}

loc_806E0974:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E0984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 292), 0, 69u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r29 + 292), r0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r29 + 336), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 264));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 256));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 260));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r29 + 356), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r29 + 348), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r29 + 352), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r29 + 332), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r29 + 344), f4.d);
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r29 + 360), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r29 + 340), f0.d);
    goto loc_806E0B14;
}

loc_806E09E0:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806E09E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0A04;
    }
}

loc_806E09EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 320), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 324), f0.d);
    r3 = r30;
    goto loc_806E0B18;
}

loc_806E0A04:
{
    r0 = MemoryInline::FlatRead32((r3 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E0A0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0B14;
    }
}

loc_806E0A10:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E0A20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 292), 0, 69u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r29 + 292), r0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r29 + 336), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 264));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 256));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 260));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r29 + 356), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r29 + 348), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r29 + 352), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r29 + 332), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r29 + 344), f4.d);
    MemoryInline::WriteResolved8(guest_range_2, 68u, (r29 + 360), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r29 + 340), f0.d);
    goto loc_806E0B14;
}

loc_806E0A7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806E0A84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0AA0;
    }
}

loc_806E0A88:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 320), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 324), f0.d);
    r3 = r30;
    goto loc_806E0B18;
}

loc_806E0AA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E0AA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0B14;
    }
}

loc_806E0AAC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E0ABCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 292), 0, 69u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r29 + 292), r0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r29 + 336), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 264));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 256));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 260));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r29 + 356), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 52));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r29 + 348), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r29 + 352), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r29 + 332), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r29 + 344), f4.d);
    MemoryInline::WriteResolved8(guest_range_3, 68u, (r29 + 360), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r29 + 340), f0.d);
}

loc_806E0B14:
{
    r3 = r30;
}

loc_806E0B18:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806E0834 func_806E0834 preserves=true fpr_mask=0x00000000
