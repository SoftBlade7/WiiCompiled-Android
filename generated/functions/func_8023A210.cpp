#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023A210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_8023A210;

loc_8023A210:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f7.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f7.d = (-(f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24504));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f7.d);
    f3.d = (-(f5.d));
    f6.d = (-(f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f6.d);
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_8023A26C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8023A2AC;
    }
}

loc_8023A274:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24496));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    f3.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteFloat32(r4, f3.d);
    f0.d = PpcFmulsInline(f5.d, f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    goto loc_8023A2C8;
}

loc_8023A2AC:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_8023A2C8:
{
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x000000F8 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023A210 func_8023A210 preserves=true fpr_mask=0x00000000
