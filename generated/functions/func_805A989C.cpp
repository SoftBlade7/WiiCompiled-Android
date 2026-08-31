#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A989C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_805A98AC_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_805A989C;

loc_805A989C:
{
    r0 = (r4 * 24);
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r4 = (r4 + 8736);
    addr_lfsux_805A98AC_loc_0 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsux_805A98AC_loc_0);
    r4 = addr_lfsux_805A98AC_loc_0;
    f2.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWrite32((r3 + 20), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805A98C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A98CC;
    }
}

loc_805A98C8:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
}

loc_805A98CC:
{
    r4 = (r4 + 12);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 48), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805A98F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A98F8;
    }
}

loc_805A98F4:
{
    MemoryInline::FlatWriteFloat32((r3 + 36), f3.d);
}

loc_805A98F8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x0000000A fpr_write=0x0000000D fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A989C func_805A989C preserves=true fpr_mask=0x00000000
