#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002EFD0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;

    goto loc_8002EFD0;

loc_8002EFD0:
{
}

loc_8002EFD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8002EFF0;
    }
}

loc_8002EFDC:
{
}

loc_8002EFE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8002F00C;
    }
}

loc_8002EFE4:
{
}

loc_8002EFE8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8002F02C;
    }
}

loc_8002EFEC:
{
    goto loc_8002F048;
}

loc_8002EFF0:
{
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_8002F048;
}

loc_8002F00C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_8002F048;
}

loc_8002F02C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8002F048:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F060;
    }
}

loc_8002F058:
{
    r3 = 3;
    goto loc_8002F0CC;
}

loc_8002F060:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F06C;
    }
}

loc_8002F064:
{
    r3 = 3;
    goto loc_8002F0CC;
}

loc_8002F06C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_8002F078:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002F088;
    }
}

loc_8002F07C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_8002F084:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F090;
    }
}

loc_8002F088:
{
    r3 = 4;
    goto loc_8002F0CC;
}

loc_8002F090:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8002F098:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002F0A4;
    }
}

loc_8002F09C:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F0A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F0AC;
    }
}

loc_8002F0A4:
{
    r3 = 4;
    goto loc_8002F0CC;
}

loc_8002F0AC:
{
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F0BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F0C8;
    }
}

loc_8002F0C0:
{
    r3 = 4;
    goto loc_8002F0CC;
}

loc_8002F0C8:
{
    r3 = 1;
}

loc_8002F0CC:
{
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002EFD0 func_8002EFD0 preserves=true fpr_mask=0x00000000
