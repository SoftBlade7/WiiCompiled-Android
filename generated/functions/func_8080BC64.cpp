#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080BC64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8080BC64;

loc_8080BC64:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r0 = MemoryInline::FlatRead32((r3 + 368));
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8080BC8C:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080BDA8;
    }
}

loc_8080BC94:
{
    r0 = MemoryInline::FlatRead32((r31 + 376));
    r30 = 0x808B0000u;
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat64((r30 + -19920));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -19932));
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r4 = (r31 + 380);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    r3 = (r1 + 20);
    r4 = (r31 + 356);
    r5 = (r1 + 32);
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
    r0 = MemoryInline::FlatRead32((r31 + 376));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat64((r30 + -19920));
    r4 = (r31 + 392);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r5 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = (r5 | 1);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f2.d);
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
    r6 = MemoryInline::FlatRead32((r31 + 376));
    r4 = 0x808B0000u;
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r5 = 1;
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f3.d = MemoryInline::FlatReadFloat64((r30 + -19920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(255));
}

loc_8080BD40:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = (r3 | 3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = (r6 + 1);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -19928));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 360));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r5));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 72), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 76), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f3.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    MemoryInline::FlatWrite32((r31 + 376), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080BDA8;
    }
}

loc_8080BDA0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 368), r0);
}

loc_8080BDA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080BC64 func_8080BC64 preserves=true fpr_mask=0x00000000
