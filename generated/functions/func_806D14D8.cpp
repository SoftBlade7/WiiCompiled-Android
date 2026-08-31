#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D14D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_806D14D8;

loc_806D14D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    r5 = 0x808A0000u;
    r4 = 0x808C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 192));
    r6 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 284));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f3.d = MemoryInline::FlatReadFloat64((r5 + -608));
    f4.d = (-(f0.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 19400));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f6.d = MemoryInline::FlatReadFloat32((r6 + -600));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 280));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = PpcFmulsInline(f6.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_806D1544:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D1550;
    }
}

loc_806D154C:
{
    f0.d = f5.d;
}

loc_806D1550:
{
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000021 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D14D8 func_806D14D8 preserves=true fpr_mask=0x00000000
