#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807831C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_807831C4;

loc_807831C4:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18352));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807831D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078324C;
    }
}

loc_807831DC:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18360));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807831E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807831F4;
    }
}

loc_807831F0:
{
    goto loc_8078324C;
}

loc_807831F4:
{
    f2.d = MemoryInline::FlatReadFloat32(r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
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

loc_8078324C:
{
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807831C4 func_807831C4 preserves=true fpr_mask=0x00000000
