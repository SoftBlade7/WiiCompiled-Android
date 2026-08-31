#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C1E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C1E90;

loc_806C1E90:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r8 = 0x808C0000u;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = 1127219200;
    r8 = (r8 + 12912);
    f4.d = MemoryInline::FlatReadFloat64((r5 + -2408));
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r7 = 0x808A0000u;
    r4 = 0x808A0000u;
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 192));
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1340));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(10));
}

loc_806C1ED4:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 12));
    MemoryInline::FlatWriteRam32((r1 + 108), r6);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1328));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f2.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f4.d = MemoryInline::FlatReadFloat32((r7 + -2400));
    MemoryInline::FlatWriteFloat32((r3 + 1328), f0.d);
    f5.d = PpcFmulsInline(f4.d, f1.d);
    f4.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1348));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1336));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1332));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -2496));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 1336), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1332), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806C1FC8;
    }
}

loc_806C1F54:
{
    r3 = 0x809C0000u;
    r6 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r8 + 32));
    r5 = 0x809C0000u;
    r7 = 1693188096;
    r8 = MemoryInline::FlatRead32((r6 + 26316));
    r6 = (r7 + -8193);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = (r31 + 1328);
    r5 = (r5 + 15364);
    r7 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x806C1F88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

loc_806C1F8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C1FC8;
    }
}

loc_806C1F90:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1328));
    r0 = 3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1332));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1336));
    MemoryInline::FlatWriteFloat32((r31 + 1328), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 1332), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWrite32((r31 + 188), r0);
    MemoryInline::FlatWriteFloat32((r31 + 1336), f0.d);
}

loc_806C1FC8:
{
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1336));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1332));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1328));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFD7 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806C1E90 func_806C1E90 preserves=true fpr_mask=0x00000000
