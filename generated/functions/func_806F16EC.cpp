#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F16EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F16EC;

loc_806F16EC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r6 = 0x808A0000u;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    r0 = 0;
    r4 = 0x808C0000u;
    r7 = 552075264;
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r1 + 140), r31);
    r31 = 0x808A0000u;
    r8 = MemoryInline::FlatRead32((r6 + 26316));
    r6 = (r7 + 4095);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r1 + 136), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2912));
    r5 = (r5 + 15364);
    MemoryInline::FlatWrite8((r3 + 88), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r7 = (r1 + 32);
    r9 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 30632));
    r4 = (r30 + 16);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 32), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r1 + 40), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r1 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r1 + 48), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r1 + 52), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r0);
    ctx->lr = 0x806F1768u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F176C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F1858;
    }
}

loc_806F1770:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 88), static_cast<uint8_t>(r0));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2924));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F1798:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1);
}

loc_806F17A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806F17BC;
    }
}

loc_806F17A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32((r30 + 84), f0.d);
}

loc_806F17BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r4 = 0x802A0000u;
    r3 = (r1 + 20);
    f1.d = (-(f0.d));
    r4 = (r4 + 16688);
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
    r4 = 0x808C0000u;
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 30636));
    r4 = (r1 + 20);
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
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0x809C0000u;
    f5.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2912));
    MemoryInline::FlatWriteFloat32((r30 + 68), f5.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F1828:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8888));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8888));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F1860;
    }
}

loc_806F1850:
{
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    goto loc_806F1860;
}

loc_806F1858:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2912));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_806F1860:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC1F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F16EC func_806F16EC preserves=true fpr_mask=0x00000000
