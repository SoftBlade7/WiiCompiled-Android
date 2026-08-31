#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80595D04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80595D04;

loc_80595D04:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 25920);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = (r4 + 60);
    MemoryInline::FlatWriteRam32((r4 + 88), r0);
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_80595D24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595D30;
    }
}

loc_80595D28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80595D2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595D38;
    }
}

loc_80595D30:
{
    r0 = (r4 + 64);
    MemoryInline::FlatWriteRam32((r4 + 88), r0);
}

loc_80595D38:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 7964));
    MemoryInline::FlatWriteRamFloat32((r4 + 84), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80595D04 func_80595D04 preserves=true fpr_mask=0x00000000
