#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C33C4(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C33C4;

loc_806C33C4:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r8 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -2256));
    r7 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r5 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat32((r8 + -2248));
    r4 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r3 + 192));
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r7 + 12928));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(10));
}

loc_806C340C:
{
    MemoryInline::FlatWriteRam32((r1 + 108), r6);
    f4.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1340));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1364));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12912));
    f5.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1348));
    f3.d = PpcFmulsInline(f0.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1336));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1332));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 1328));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -2304));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    MemoryInline::FlatWriteFloat32((r3 + 1336), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1328), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 1332), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806C34FC;
    }
}

loc_806C3484:
{
    r4 = 0x808C0000u;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12944));
    r4 = 0x808A0000u;
    r5 = 0x809C0000u;
    r6 = 552075264;
    r8 = MemoryInline::FlatRead32((r4 + 26316));
    r4 = (r31 + 1328);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r5 = (r5 + 15364);
    r6 = (r6 + 4095);
    r7 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x806C34BCu;
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
    ctx->fpr[6] = f6;
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
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806C34C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C34FC;
    }
}

loc_806C34C4:
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

loc_806C34FC:
{
    r4 = 0x802A0000u;
    r3 = r31;
    r4 = (r4 + 16688);
    r5 = (r31 + 1340);
    ctx->lr = 0x806C3510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821910u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
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
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFF8F fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806C33C4 func_806C33C4 preserves=true fpr_mask=0x00000000
