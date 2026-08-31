#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80783254(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_80783254;

loc_80783254:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32(r5);
    r7 = (r7 + 18352);
    f3.d = MemoryInline::FlatReadFloat32(r3);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f5.d = PpcFmulsInline(f3.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f4.d = PpcFmulsInline(f6.d, f4.d);
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_807832B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807832C0;
    }
}

loc_807832BC:
{
    goto loc_807832D4;
}

loc_807832C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = (-(f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_807832D4:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_807832DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80783368;
    }
}

loc_807832E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_807832EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80783368;
    }
}

loc_807832F4:
{
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_807832F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80783364;
    }
}

loc_80783300:
{
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80783304:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80783364;
    }
}

loc_8078330C:
{
    f2.d = MemoryInline::FlatReadFloat32(r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f7.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f4.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_80783364:
{
    r0 = 1;
}

loc_80783368:
{
    r3 = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000008B gpr_return=0x00000008 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80783254 func_80783254 preserves=true fpr_mask=0x00000000
