#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80764EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80764EB4;

loc_80764EB4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat64((r4 + 14992));
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 160));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r5 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead16((r5 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 180), f0.d);
    r4 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80764F04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80764F10;
    }
}

loc_80764F08:
{
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 180), f0.d);
}

loc_80764F10:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 176), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80764F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80764F2C;
    }
}

loc_80764F24:
{
    r4 = (r3 + 72);
    goto loc_80764F5C;
}

loc_80764F2C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    ctx->lr = 0x80764F40u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80764F5C:
{
    r3 = (r31 + 200);
    ctx->lr = 0x80764F64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r4 = (r31 + 200);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    r3 = (r1 + 44);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    r5 = 2;
    MemoryInline::FlatWriteFloat32((r31 + 212), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 228), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 244), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r31 + 188), f0.d);
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 14984));
    r3 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r4 = (r4 + 16688);
    MemoryInline::FlatWriteFloat32((r31 + 192), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r31 + 196), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 200));
    MemoryInline::FlatWriteFloat32((r31 + 296), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 204));
    MemoryInline::FlatWriteFloat32((r31 + 300), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    MemoryInline::FlatWriteFloat32((r31 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 212));
    MemoryInline::FlatWriteFloat32((r31 + 308), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 216));
    MemoryInline::FlatWriteFloat32((r31 + 312), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 220));
    MemoryInline::FlatWriteFloat32((r31 + 316), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 224));
    MemoryInline::FlatWriteFloat32((r31 + 320), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 228));
    MemoryInline::FlatWriteFloat32((r31 + 324), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 232));
    MemoryInline::FlatWriteFloat32((r31 + 328), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 236));
    MemoryInline::FlatWriteFloat32((r31 + 332), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 240));
    MemoryInline::FlatWriteFloat32((r31 + 336), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 244));
    MemoryInline::FlatWriteFloat32((r31 + 340), f0.d);
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
    r4 = (r31 + 48);
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 308), f0.d);
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 324), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 340), f0.d);
    ctx->lr = 0x80765050u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x808204B8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xFFFFCFFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80764EB4 func_80764EB4 preserves=true fpr_mask=0x00000000
