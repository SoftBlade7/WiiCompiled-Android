#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80037B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_80037B00;

loc_80037B00:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30752));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80037B10:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80037BC8;
    }
}

loc_80037B1C:
{
    r3 = 196608;
    r6 = MemoryInline::FlatRead32((r5 + 236));
    r0 = (r3 + 17405);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r3 = (r6 * r0);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -30728));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -30748));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30736));
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r5 + 236), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80037B80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80037B8C;
    }
}

loc_80037B84:
{
    r4 = 1;
    goto loc_80037BC8;
}

loc_80037B8C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30712));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80037BA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80037BB4;
    }
}

loc_80037BA8:
{
    r3 = 65536;
    r4 = (r3 + -1);
    goto loc_80037BC8;
}

loc_80037BB4:
{
    f0.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r4 - r0);
    r4 = (r0 & 65535);
}

loc_80037BC8:
{
    r3 = r4;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000005B gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80037B00 func_80037B00 preserves=true fpr_mask=0x00000000
