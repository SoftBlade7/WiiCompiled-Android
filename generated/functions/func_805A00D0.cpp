#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A00D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A00D0;

loc_805A00D0:
{
}

loc_805A00D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805A00E0;
    }
}

loc_805A00D8:
{
    f3.d = f1.d;
    goto loc_805A00E4;
}

loc_805A00E0:
{
    f3.d = f2.d;
}

loc_805A00E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805A00EC:
{
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A0100;
    }
}

loc_805A00F8:
{
    f3.d = f1.d;
    goto loc_805A0104;
}

loc_805A0100:
{
    f3.d = f2.d;
}

loc_805A0104:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805A010C:
{
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A011C;
    }
}

loc_805A0118:
{
    goto loc_805A0120;
}

loc_805A011C:
{
    f1.d = f2.d;
}

loc_805A0120:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    MemoryInline::FlatWriteFloat32((r3 + 140), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 176), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    MemoryInline::FlatWriteFloat32((r4 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    MemoryInline::FlatWriteFloat32((r4 + 184), f0.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000B fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A00D0 func_805A00D0 preserves=true fpr_mask=0x00000000
