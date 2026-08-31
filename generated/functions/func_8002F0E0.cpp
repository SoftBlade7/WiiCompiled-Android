#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002F0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8002F0E0;

loc_8002F0E0:
{
}

loc_8002F0E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8002F100;
    }
}

loc_8002F0EC:
{
}

loc_8002F0F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8002F11C;
    }
}

loc_8002F0F4:
{
}

loc_8002F0F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8002F13C;
    }
}

loc_8002F0FC:
{
    goto loc_8002F158;
}

loc_8002F100:
{
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_8002F158;
}

loc_8002F11C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_8002F158;
}

loc_8002F13C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8002F158:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F164:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F170;
    }
}

loc_8002F168:
{
    r3 = 3;
    goto loc_8002F1C0;
}

loc_8002F170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F17C;
    }
}

loc_8002F174:
{
    r3 = 3;
    goto loc_8002F1C0;
}

loc_8002F17C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F188:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002F198;
    }
}

loc_8002F18C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8002F194:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F1A0;
    }
}

loc_8002F198:
{
    r3 = 4;
    goto loc_8002F1C0;
}

loc_8002F1A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F1A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002F1B4;
    }
}

loc_8002F1AC:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8002F1B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F1BC;
    }
}

loc_8002F1B4:
{
    r3 = 4;
    goto loc_8002F1C0;
}

loc_8002F1BC:
{
    r3 = 1;
}

loc_8002F1C0:
{
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002F0E0 func_8002F0E0 preserves=true fpr_mask=0x00000000
