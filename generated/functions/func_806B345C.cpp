#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B345C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B345C;

loc_806B345C:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 73));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B347C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B34F4;
    }
}

loc_806B3480:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 176), static_cast<uint8_t>(r0));
    r31 = 0x808A0000u;
    r3 = (r1 + 144);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    r4 = (r1 + 156);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2756));
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    r3 = (r1 + 56);
    MemoryInline::FlatWriteFloat32((r30 + 1836), f0.d);
    r4 = (r1 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteFloat32((r30 + 1840), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 152));
    MemoryInline::FlatWriteFloat32((r30 + 1844), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2756));
    // inline leaf 0x8054BE10 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8054BE10
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 1848), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 1852), f0.d);
    goto loc_806B3680;
}

loc_806B34F4:
{
    r31 = 0x808A0000u;
    r4 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1840));
    f2.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -10424));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806B3514:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1836));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r3 + 176), static_cast<uint8_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806B3534:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r4 = cr;
    r0 = (r0 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B361C;
    }
}

loc_806B3548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806B354C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B361C;
    }
}

loc_806B3550:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 2756));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_806B3558:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806B35BC;
    }
}

loc_806B355C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f2.d);
    r3 = (r1 + 120);
    r4 = (r1 + 132);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    r3 = (r1 + 40);
    MemoryInline::FlatWriteFloat32((r30 + 1836), f0.d);
    r4 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteFloat32((r30 + 1840), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteFloat32((r30 + 1844), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 2756));
    // inline leaf 0x8054BE10 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8054BE10
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 1848), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r30 + 1852), f0.d);
    goto loc_806B3680;
}

loc_806B35BC:
{
    f1.d = f3.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    r3 = (r1 + 96);
    r4 = (r1 + 108);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r3 = (r1 + 24);
    MemoryInline::FlatWriteFloat32((r30 + 1836), f0.d);
    r4 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    MemoryInline::FlatWriteFloat32((r30 + 1840), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::FlatWriteFloat32((r30 + 1844), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    // inline leaf 0x8054BE10 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8054BE10
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 1848), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 1852), f0.d);
    goto loc_806B3680;
}

loc_806B361C:
{
    r31 = 0x808A0000u;
    r3 = (r1 + 72);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    r4 = (r1 + 84);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1836));
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r30 + 1836), f1.d);
    r4 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -10588));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32((r30 + 1840), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::FlatWriteFloat32((r30 + 1844), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    // inline leaf 0x8054BE10 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8054BE10
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 1848), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 1852), f0.d);
}

loc_806B3680:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B345C func_806B345C preserves=true fpr_mask=0x00000000
